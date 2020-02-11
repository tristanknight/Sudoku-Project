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


def parse_arguments():
    """
    Parses command line arguments in the form:
        sudoku.py <board name>
    Where board name must be in the 'BOARD' list
    """
    parser = argparse.ArgumentParser()
    # tells parser to expect a string input and accept --board flag
    parser.add_argument('--board',
                        help='Desired board name',
                        type=str,
                        choices=BOARDS,
                        required=True)
    # Creates a dictionary of keys = argument flag, and value = argument
    args = vars(parser.parse_args())
    return args['board']


class SudokuUI(Frame):
    """
    The Tkinter UI, responsible for drawing the board and accepting user input
    """

    def __init__(self, parent, game):
        self.game = game
        self.parent = parent
        Frame.__init__(self, parent)

        self.row, self.col = 0, 0

        self._init_ui()

    def _init_ui(self):
        self.parent.title('Sudoku')
        self.pack(fill=BOTH, expand=1)  # organizes frame's geometry relative to parent
        self.canvas = Canvas(  # sets up width and height of puzzle canvas
            self,
            width=WIDTH,
            height=HEIGHT
        )

        self.canvas.pack(fill=BOTH, side=TOP)
        clear_button = Button(  # creates a "clear answers" button
            self,
            text='Clear answers',
            command=self._clear_answers
        )
        clear_button.pack(fill=BOTH, side=BOTTOM)

        self._draw_grid()
        self._draw_puzzle()

        self.canvas.bind('<Button-1>', self._cell_clicked)  # button-1 = left mouse button
        self.canvas.bind('<Key>', self._key_pressed)

    def _draw_grid(self):
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

    def _draw_puzzle(self):
        self.canvas.delete('numbers')  # clears out previous numbers
        for i in range(9):  # iterate over all rows and columns
            for j in range(9):
                answer = self.game.puzzle[i][j]
                if answer != 0:  # fill in the text if the answer in the cell is not zero
                    x = MARGIN + j * SIDE + SIDE / 2
                    y = MARGIN + i * SIDE + SIDE / 2
                    original = self.game.start_puzzle[i][j]
                    color = 'black' if answer == original else 'sea green'
                    self.canvas.create_text(
                        x, y, text=answer, tags='numbers', fill=color
                    )

    def _clear_answers(self):
        self.game.start()  # reset puzzle to original state
        self.canvas.delete('victory')  # delete victory status
        self._draw_puzzle()  # re-draw puzzle

    def _cell_clicked(self, event):
        if self.game.game_over:  # if game is over, no need for this function so just return
            return
        x, y = event.x, event.y  # get x, y location of the click
        if (MARGIN < x < WIDTH - MARGIN and MARGIN < y < HEIGHT - MARGIN):  # make sure click is within puzzle widget
            self.canvas.focus_set()

            # get row and col numbers from x, y coordinates
            print(x)
            print(y)
            row, col = int((y - MARGIN) / SIDE), int((x - MARGIN) / SIDE)
            print(row)
            print(col)

            # if cell was selected already, de-select it
            if (row, col) == (self.row, self.col):
                self.row, self.col = -1, -1
            elif self.game.puzzle[row][col] == 0:
                self.row, self.col = row, col

        else:
            self.row, self.col = -1, -1

        self._draw_cursor()

    def _draw_cursor(self):  # highlight cell that user has clicked on
        self.canvas.delete('cursor')
        # if self.row and self.col are set, compute dimensions of cell and then outline it
        if self.row >= 0 and self.col >= 0:
            x0 = MARGIN + self.col * SIDE + 1
            y0 = MARGIN + self.row * SIDE + 1
            x1 = MARGIN + (self.col + 1) * SIDE - 1
            y1 = MARGIN + (self.row + 1) * SIDE - 1

            self.canvas.create_rectangle(x0, y0, x1, y1, outline='red', tags='cursor')

    def _key_pressed(self, event):
        if self.game.game_over:
            return
        if self.row and self.col >= 0 and event.char in '1234567890':
            self.game.puzzle[self.row][self.col] = int(event.char)
            self.col, self.row = -1, -1
            self._draw_puzzle()
            self._draw_cursor()
            if self.game.check_win():
                self._draw_victory()

    def _draw_victory(self):
        # Create an oval (which will be a circle)
        x0 = y0 = MARGIN + SIDE * 2
        x1 = y1 = MARGIN + SIDE * 7
        self.canvas.create_oval(x0, y0, x1, y1,
                                tags='victory', color='dark orange', outline='orange')
        # create text
        x = y = MARGIN + 4 * SIDE + SIDE / 2
        self.canvas.create_text(
            x, y, text='You win!', tags='winner',
            fill='white', font=('Arial', 32))


class SudokuBoard(object):
    """
    Sudoku board representation
    """

    def __init__(self, board_file):
        self.board = SudokuBoard._create_board(self, board_file)

    def _create_board(self, board_file):
        board = []

        for line in board_file:
            line = line.strip()

            # raise error if line is shorter or longer than 9 characters
            if len(line) != 9:
                raise SudokuError(
                    "Each line in the Sudoku puzzle must be 9 chars long"
                )

            # create a list for the line
            board.append([])

            # then iterate over each character
            for c in line:
                # Raise error if character is not between 0 and 9
                if int(c) < 0 or int(c) > 9:
                    raise SudokuError(
                        "Character must be an integer"
                    )
                # Add to the latest list for the line
                board[-1].append(int(c))

        # raise an error if there are not 9 lines
        if len(board) != 9:
            raise SudokuError(
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

    def _check_block(self, block):  # block we pass in (square, row, or column) must be between 1 and 9
        return set(block) == set(range(1, 10))

    def _check_row(self, row):
        return self._check_block(self.puzzle[row])

    def _check_col(self, col):
        return self._check_block(
            [self.puzzle[row][col] for row in range(9)]
        )

    def _check_square(self, row, col):
        return self._check_block(
            [
                self.puzzle[r][c]
                for r in range(row * 3, (row + 1) * 3)
                for c in range(col * 3, (col + 1) * 3)
            ]

        )


if __name__ == '__main__':
    board_name = parse_arguments()

    # open Sudoku board file
    with open('%s.sudoku' % board_name, 'r') as boards_file:
        game = SudokuGame(boards_file)
        game.start()

        # create root widget, which is then passed in as parent widget when constructing UI
        root = Tk()
        SudokuUI(root, game)
        root.geometry('%dx%d' % (WIDTH, HEIGHT + 40))
        root.mainloop()  # start program
