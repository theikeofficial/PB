def create_hmm(strings_pos, strings_neg):


def main():
    strings_pos = ['ATAATAACATGCGACTACTAAAATA', 'AATAACATTCACTACCCA']
    strings_neg = ['GCCCGACAAGCCGGCGGACGGCG', 'CGGACCGACGTGCGCCGCCGC']

    print(create_hmm(strings_pos, strings_neg))


if __name__ == '__main__':
    main()
