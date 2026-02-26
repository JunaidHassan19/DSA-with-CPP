// 2D Arrays in Memory

/*
    How 2D Arrays are Stored in Memory?
    ------------------------------------

    In C++, 2D arrays are stored in ROW-MAJOR ORDER.
    This means elements are stored row by row in contiguous memory locations.

    Example: int arr[3][4] (3 rows, 4 columns)

    Logical View:
    -------------
    arr[0][0]  arr[0][1]  arr[0][2]  arr[0][3]
    arr[1][0]  arr[1][1]  arr[1][2]  arr[1][3]
    arr[2][0]  arr[2][1]  arr[2][2]  arr[2][3]

    Memory Layout (Row-Major Order):
    --------------------------------
    | arr[0][0] | arr[0][1] | arr[0][2] | arr[0][3] | arr[1][0] | arr[1][1] | ... | arr[2][3] |

    Address Calculation:
    --------------------
    Address of arr[i][j] = Base Address + (i * number_of_columns + j) * size_of_element

    For arr[1][2] in int arr[3][4]:
    Address = Base + (1 * 4 + 2) * 4 = Base + 24 bytes
*/
