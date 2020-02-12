board = [[2, 1, 0, 0, 0, 0, 4, 0, 0], [3, 8, 0, 4, 0, 0, 7, 0, 2], [0, 0, 0, 7, 2, 0, 0, 0, 0]
    , [0, 2, 4, 8, 0, 6, 9, 0, 0], [0, 0, 0, 0, 0, 0, 0, 0, 0],
         [0, 0, 1, 2, 0, 3, 5, 4, 0], [0, 0, 0, 0, 5, 8, 0, 0, 0], [9, 0, 3, 0, 0, 4, 0, 2, 8]
    , [0, 0, 8, 0, 0, 0, 0, 5, 7]]


def find_square(row, col):
    square = []  # initialize square as an empty list
    row_adjustment = row % 3
    col_adjustment = col % 3
    row_start = row - row_adjustment
    col_start = col - col_adjustment

    square += [board[i][j] for i in range(row_start, row_start + 3) for j in range(col_start, col_start + 3)]

    return square  # return list with all the numbers in the current square


print(find_square(7, 7))

# def check_conflict(row, col, square):
#     """
#     Function to check conflicts. Takes three lists (row, col, and square)
#     and returns a list of conflict locations
#     """
#     conflict_locations = []  # list to store conflict locations on board
#     current = 6  # current number
#     if row.count(current) > 1:
#         conflict_locations += [i for i in range(len(row)) if row[i] == current]
#     if col.count(current) > 1:
#         conflict_locations += [i for i in range(len(col)) if col[i] == current]
#     if square.count(current) > 1:
#         conflict_locations += [i for i in range(len(square)) if square[i] == current]
#     return conflict_locations
#
#
# row = [3, 6, 5, 4, 6, 9, 7, 1, 2]
# col = [3, 6, 6, 1, 4, 7, 5, 8, 9]
#
#
# print(check_conflict(row, col, square))
