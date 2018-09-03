def find_neighborhood(suffix_array, mid, pattern):


def pattern_matching_with_suffix_array(suffix_array, pattern):


def suffix_array_construction(strings):


def main():
    strings = ['ananas', 'and', 'antenna', 'banana', 'bandana', 'nab', 'nana', 'pan']
    suffix_array = suffix_array_construction(strings)
    pattern = 'an'

    print(strings)
    print(pattern)
    print(pattern_matching_with_suffix_array(suffix_array, pattern))


if __name__ == '__main__':
    main()
