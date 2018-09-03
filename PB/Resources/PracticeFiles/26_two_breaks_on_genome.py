def chromosome_to_cycle(Chromosome):


def cycle_to_chromosome(Nodes):


def colored_edges(P):


def black_edges(P):


def edges_to_graph(GraphEdges):


def dfs(Graph, v, marked):


def cycle_nodes(GenomeGraph):


def graph_to_genome(GenomeGraph):


def remove_edge_from_graph(Graph, edge):


def add_edge_to_graph(Graph, edge):


def two_break_on_genome_graph(GenomeGraph, i, ip, j, jp):


def two_break_on_genome(P, i, ip, j, jp):


def main():
    ChromosomeStart = [1, -2, -3, 4]
    Nodes = chromosome_to_cycle(ChromosomeStart)
    Chromosome = cycle_to_chromosome(Nodes)

    print(two_break_on_genome([Chromosome], 3, 6, 8, 1))


if __name__ == "__main__":
    main()
