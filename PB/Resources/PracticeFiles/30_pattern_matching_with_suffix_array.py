def find_neighborhood(suffix_array, mid, pattern):


def pattern_matching_with_suffix_array(suffix_array, pattern):


def suffix_array_construction(string):


def main():
    string = 'bananananaspand'
    suffix_array = suffix_array_construction(string)
    pattern = 'nana'
    print(string, pattern, pattern_matching_with_suffix_array(suffix_array, pattern), sep='\n')


if __name__ == '__main__':
    main()
