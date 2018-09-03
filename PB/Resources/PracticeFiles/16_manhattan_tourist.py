def manhattan_tourist(n, m, down, right):


def main():
    n = 3
    m = 3
    down = [
        [0, 0, 0, 0],
        [0, 1, 2, 1],
        [0, 1, 1, 1],
        [0, 1, 1, 1]
    ]
    right = [
        [0, 0, 0, 1],
        [0, 3, 5, 1],
        [0, 1, 0, 1],
        [0, 1, 0, 1]
    ]

    print(manhattan_tourist(n, m, down, right))


if __name__ == '__main__':
    main()
