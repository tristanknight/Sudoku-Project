import unittest
from unittest.mock import patch, Mock

from sudoku import SudokuUI, SudokuBoard, SudokuGame, parse_arguments, SudokuError
from tkinter import Tk, Canvas, Frame, Button, BOTH, TOP, BOTTOM


class MockSudokuGame:  # create class to mock sudoku game puzzle

    def __init__(self, puzzle):
        self.puzzle = puzzle
        self.start_puzzle = puzzle


class TestSudokuUI(unittest.TestCase):

    def test_check_conflict(self):
        puzzle = [[2, 1, 0, 0, 0, 0, 4, 0, 0], [3, 8, 5, 4, 0, 0, 7, 0, 2], [0, 5, 0, 7, 2, 0, 0, 0, 0], [0, 2, 4, 8, 0, 6, 9, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0],
                                    [0, 0, 1, 2, 0, 3, 5, 4, 0], [0, 0, 0, 0, 5, 8, 0, 0, 0], [9, 0, 3, 0, 0, 4, 0, 2, 8], [0, 0, 8, 0, 0, 0, 0, 5, 7]]
        mock_sudoku_game = MockSudokuGame(puzzle)
        tk = Tk()
        board_file = None
        sudoku_game = SudokuGame(board_file)
        row = puzzle[1]
        column = [puzzle[n][2] for n in range(len(puzzle))]  # where n is the row and 1 is the column
        square = [2, 1, 0, 3, 8, 5, 0, 5, 0]
        # self.assertEqual(row, [2, 1, 0, 0, 0, 0, 4, 0, 0])  # make sure row is correct
        # self.assertEqual(column, [2, 3, 0, 0, 0, 0, 0, 9, 0])  # make sure column is correct
        print(row)
        print(column)
        print(square)
        self.assertEqual(square.count(puzzle[1][2]), 2)
        self.assertEqual(sudoku_game.check_conflict(1, 2, row, column, square), [[1, 2], [2, 1]])


if __name__ == '__main__':
    unittest.main()