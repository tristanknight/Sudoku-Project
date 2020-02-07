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

    def check_win(self):
        for row in range(9):
            if not self.check_row:
                return False
        for col in range(9):
            if not self.check_col:
                return False
        for row in range(3):
            for col in range(3):
                if not self.check_square(row, col):
                    return False

        self.game_over = True  # if the above conditions are met, the game is completed
        return True

    def __check_block(self, block):
        return set(block) == set(range(1, 10))

    def __check_row(self, row):
        return self.__check_block(self.puzzle[row])

    def __check_col(self, col):
        return self.__check_block(
            [self.puzzle[row][col] for row in range(9)]
        )

    def __check_square(self, row, col):
        return self.__check_block(
            [
                self.puzzle[r][c]
                for r in range(row * 3, (row + 1) * 3)
                for c in range(col * 3, (col + 1) * 3)
            ]

        )


class SudokuUI(Frame):
    """
    The Tkinter UI, responsible for drawing the board and accepting user input
    """
    def __init__(self, parent, game):
        self.game = game
        self.parent = parent
        Frame.__init__(self, parent)

        self.row, self.col = 0, 0

        self.__init_ui()

    def __init_ui(self):
        self.parent.title('Sudoku')
        self.pack(fill=BOTH, expand=1)
        self.canvas = Canvas(
            self,
            width=WIDTH,
            height=HEIGHT
        )

        self.canvas.pack(fill=BOTH, side=TOP)
        clear_button = Button(
            self,
            text='Clear answers',
            command=self.__clear_answers
        )
        clear_button.pack(fill=BOTH, side=BOTTOM)

        self.__draw_grid()
        self.__draw_puzzle()

        self.canvas.bind('<Button-1>', self.__cell_clicked)
        self.canvas.bind('<Key>', self.__key_pressed)

    def __draw_grid(self):
        """
        draws grid divided with blue lines into 3x3 squares
        """
        for i in range(10):
            color = 'blue' if i % 3 == 0 else 'gray'

            x0 = MARGIN + i * SIDE
            y0 = MARGIN
            x1 = MARGIN + i * SIDE
            y1 = HEIGHT - MARGIN
            self.canvas.create_line(x0, y0, x1, y1, fill=color)

            x0 = MARGIN
            y0 = MARGIN + i * SIDE
            x1 = WIDTH - MARGIN
            y1 = MARGIN + i * SIDE
            self.canvas.create_line(x0, y0, x1, y1, fill=color)

    def __draw_puzzle(self):
        self.canvas.delete('numbers')
        for i in range(9):
            for j in range(9):
                answer = self.game.puzzle[i][j]
                if answer != 0:
                    x = MARGIN + j * SIDE + SIDE / 2
                    y = MARGIN + i * SIDE + SIDE / 2
                    original = self.game.start_puzzle[i][j]
                    color = 'black' if answer == original else 'sea green'
                    self.canvas.create_text(
                        x, y, text=answer, tags='numbers', fill=color
                    )
