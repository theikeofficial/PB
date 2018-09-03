def chromosome_to_cycle(chromosome):


def colored_edges(p):


def has_nontrivial_cycle(p, q):


def select_edge_from_nontrivial_cycle(p, q):


def shortest_rearrangement_scenario(p, q):


def main():
    p = [+1, -2, -3, +4]
    q = [+1, +2, +3, -4]

    print(shortest_rearrangement_scenario(p, q))


if __name__ == '__main__':
    main()
