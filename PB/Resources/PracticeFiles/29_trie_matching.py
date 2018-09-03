def add_to_trie(trie, pattern, number_of_nodes, pattern_id):


def trie_construction(patterns):


def prefix_trie_pattern_matching(text, trie):


def trie_matching(text, trie):


def main():
    patterns = ['ananas', 'and', 'antenna', 'banana', 'bandana', 'nab', 'nana', 'pan']
    query = 'bananananaspand'
    trie = trie_construction(patterns)
    print(trie_matching(query, trie))


if __name__ == '__main__':
    main()
