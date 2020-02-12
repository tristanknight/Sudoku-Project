import unittest
from sudoku import SudokuUI, SudokuBoard, SudokuGame, parse_arguments, SudokuError

class SudokuUITest(unittest.TestCase):

    # def setUpClass(cls):
    #     pass
    # def tearDownClass(cls):
    #     pass

    def test_find_square(self):
        self.sudoku_ui = SudokuUI(parent, game)
        self.assertEqual(SudokuUI.find_square(self.sudoku_ui, 1, 1), [2, 1, 0, 3, 8, 0, 0, 0, 0])

    # def test_check_conflict(self):
    #     self.assertEqual(SudokuUI.check_conflict(i, j, row, col, square), )


if __name__ == '__main__':
    unittest.main()