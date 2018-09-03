def string_spelled_by_patterns(patterns, k):


def string_spelled_by_gapped_patterns(gapped_patterns, k, d):


def main():
    gapped_patterns = [('CTG', 'CTG'), ('TGA', 'TGA'), ('GAC', 'GAC'), ('ACT', 'ACT')]
    k = 3
    d = 1
    print(string_spelled_by_gapped_patterns(gapped_patterns, k, d))


if __name__ == '__main__':
    main()
