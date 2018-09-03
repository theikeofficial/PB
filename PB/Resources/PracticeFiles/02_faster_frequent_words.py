def symbol_to_number(c):

	
def number_to_symbol(n):


def pattern_to_number(pattern):


def number_to_pattern(number, n):


def pattern_count(text, pattern):

	
def computing_frequencies(text, k):


def faster_frequent_words(text, k, min_count):


def main():
    pattern = 'agctagatgctagctagctgatcgagctgatgcaggcagtgctagc'
    print(pattern_to_number(pattern))
    print(faster_frequent_words(pattern, 4, 2))


if __name__ == '__main__':
    main()
