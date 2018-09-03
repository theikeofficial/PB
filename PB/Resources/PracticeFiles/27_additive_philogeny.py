def limb(d, j):


def three_leaves(d, n):


def find_path(t, start, stop):


def find_insertion_point(path, distance):


def insert_vertex_on_path(t, start, stop, distance):


def additive_philogeny(d, n):


def main():
    d = [
        [0, 13, 21, 22],
        [13, 0, 12, 13],
        [21, 12, 0, 13],
        [22, 13, 13, 0]
    ]
    n = len(d)

    print(additive_philogeny(d, n))


if __name__ == '__main__':
    main()
