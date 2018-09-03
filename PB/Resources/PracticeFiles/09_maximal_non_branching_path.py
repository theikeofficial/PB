def string_to_kmers(dna_string, k):


def debruijn_graph_from_kmers(kmers):


def degree(g, v):


def isolated_cycle(g, v):


def maximal_non_branching_paths(g):


def main():
    dna_string = 'AATCGTGACCTCAACT'
    k = 3
    kmers = string_to_kmers(dna_string, k)
    g = debruijn_graph_from_kmers(kmers)
    paths = maximal_non_branching_paths(g)
    print(paths)


if __name__ == '__main__':
    main()
