#!/usr/bin/python3
"""
Test 0x16 - Rotate 2D Matrix
"""
rotate_2d_matrix = __import__('0-rotate_2d_matrix').rotate_2d_matrix

if __name__ == "__main__":
    matrix = []
    print("/******** Empty matrix ******/")
    rotate_2d_matrix(matrix)
    print(matrix)

    matrix = [[1]]
    print("/******** matrix 1 Dimension******/")
    print(matrix)
    rotate_2d_matrix(matrix)
    print(matrix)

    matrix = [[1, 2], [3, 4]]
    print("/******** matrix 2 Dimensions 2 X 2 ******/")
    print(matrix)
    rotate_2d_matrix(matrix)
    print(matrix)

    matrix = [[1, 2, 3],[4, 5, 6],[7, 8, 9]]
    print("/******** matrix 2 Dimensions 3 X 3 ******/")
    print(matrix)
    rotate_2d_matrix(matrix)
    print(matrix)


    matrix = [[1, 2, 3, 4],[5, 6, 7, 8],[9, 10, 11, 12],[13, 14, 15, 16]]
    print("/******** matrix 2 Dimensions 4 X 4 ******/")
    print(matrix)
    rotate_2d_matrix(matrix)
    print(matrix)

    matrix = [[0 ,0 ,4 ,6 ,5 ,4],
              [4 ,7 ,6 ,9 ,3 ,0],
              [7 ,0 ,2 ,8 ,7 ,5],
              [9 ,8 ,8 ,3 ,0 ,5],
              [7 ,4 ,0 ,4 ,4 ,9],
              [4 ,9 ,2 ,8 ,6 ,0]]
    print("/******** matrix 2 Dimensions 6 X 6 ******/")
    print(matrix)
    rotate_2d_matrix(matrix)
    print(matrix)
