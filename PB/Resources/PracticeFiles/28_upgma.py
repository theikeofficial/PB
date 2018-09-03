class Cluster:


def distance(d, c1: Cluster, c2: Cluster):


def min_distance(clusters, d, num_of_clusters):


def upgma(d, n):


def main():
    d = [
        [0, 13, 21, 22],
        [13, 0, 12, 13],
        [21, 12, 0, 13],
        [22, 13, 13, 0]
    ]
    n = len(d)

    print(upgma(d, n))


if __name__ == '__main__':
    main()
