GAP_PENALTY = -2
MISMATCH = 0
MATCH = 1


def match_score(c1, c2):


def global_alignment(v, w):


def main():
    v = 'AAATTTGGGCCCGGGAAATTTCCC'
    w = 'GGGCCCTT'
    print(global_alignment(v, w))


if __name__ == '__main__':
    main()
