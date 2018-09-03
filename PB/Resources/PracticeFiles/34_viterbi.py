def create_hmm(strings_pos, strings_neg):


def class_transition_prob(class_from, class_to):


def state_transition_prob(state_from, state_to):


def viterbi(hmm, query_string):


def main():
    strings_pos = ['ATAATAACATGCGACTACTAAAATA', 'AATAACATTCACTACCCA']
    strings_neg = ['GCCCGACAAGCCGGCGGACGGCG', 'CGGACCGACGTGCGCCGCCGC']
    hmm = create_hmm(strings_pos, strings_neg)

    print(viterbi(hmm, 'ATTAAATTCAAATTACGTAGCTATCG'))


if __name__ == '__main__':
    main()
