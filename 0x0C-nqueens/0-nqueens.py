#!/usr/bin/python3
""" Function to check is safe to place a queen
"""


def isSafe(mat, r, c):
    for i in range(r):
        if mat[i][c] == 'Q':
            return False

    (i, j) = (r, c)
    while i >= 0 and j >= 0:
        if mat[i][j] == 'Q':
            return False
        i = i - 1
        j = j - 1

    (i, j) = (r, c)
    while i >= 0 and j < N:
        if mat[i][j] == 'Q':
            return False
        i = i - 1
        j = j + 1

    return True


def printSolution(mat):
    print([[i, j] for i in range(len(mat))
          for j in range(len(mat)) if mat[i][j] == 'Q'])


def nQueen(mat, r):

    if r == N:
        printSolution(mat)
        return

    for i in range(N):
        if isSafe(mat, r, i):
            mat[r][i] = 'Q'
            nQueen(mat, r + 1)
            mat[r][i] = '–'


if __name__ == '__main__':
    """N queens challenge
    Place N queen Non-attacking each other
    """
    import sys

    if len(sys.argv) != 2:
        print('Usage: nqueens N')
        exit(1)

    try:
        args = int(sys.argv[1])
    except Exception:
        args = sys.argv[1]

    if not isinstance(args, int):
        print('N must be a number')
        exit(1)

    if args < 4:
        print('N must be at least 4')
        exit(1)

    N = args
    mat = [['–' for x in range(N)] for y in range(N)]
    nQueen(mat, 0)
