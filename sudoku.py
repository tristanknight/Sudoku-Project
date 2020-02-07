import argparse

from tkinter import Tk, Canvas, Frame, Button, BOTH, TOP, BOTTOM

BOARDS = ['debug', 'n00b', 'l33t', 'error']  # Available Sudoku boards
MARGIN = 20  # pixels around the board
SIDE = 50  # Width of each board cell
WIDTH = HEIGHT = MARGIN * 2 + SIDE * 9  # width and height of entire board


class SudokuError(Exception):
    """
    An application specific error
    """
    pass


class SudokuBoard(object):
    """
    Sudoku board representation
    """
    def __init__(self, board_file):
        self.board = SudokuBoard.__create_board(board_file)

    def __create_board(self, board_file):
        # create an initial matrix, or a list of a list
        board = []

        # iterate over each line
        for line in board_file:
            line = line.strip()

        # raise error if line is shorter or longer than 9 characters

            if len(line) != 9:
                board = []
                raise SudokuError (
                    "Each line in the Sudoku puzzle must be 9 chars long"
                )

            # create a list for the line
            board.append([])

            # then iterate over each character
            for c in line:
                # Raise error if character is not an integer
                if type(c) != int:
                    raise SudokuError (
                        "Character must be an integer"
                    )
                # Add to the latest list for the line
                board[-1].append(int(c))

        # raise an error if there are not 9 lines
        if len(board) != 9:
            raise SudokuError (
                "Each Sudoku puzzle must be 9 lines long "
            )

        # return the constructed board
        return board


class SudokuGame(object):
    """
    A Sudoku game, in charge of storing the state of the board
    and checking whether the puzzle is complete
    """
    def __init__(self, board_file):
        self.board_file = board_file
        self.start_puzzle = SudokuBoard(board_file).board

    def start(self):
        self.game_over = False
        self.puzzle = []
        for i in range(9):
            self.puzzle.append([])
            for j in range(9):
                self.puzzle[i].append(self.start_puzzle)
