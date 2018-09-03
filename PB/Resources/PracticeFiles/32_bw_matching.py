def last_to_first(first_column, c, count):


def bw_matching(first_column, last_column, pattern):


def bwt(text):


def main():
    s = 'panamabananas'
    last_column = bwt(s)
    pattern = 'ana'
    first_column = last_column[:]
    first_column.sort()

    print(bw_matching(first_column, last_column, pattern))


if __name__ == '__main__':
    main()
