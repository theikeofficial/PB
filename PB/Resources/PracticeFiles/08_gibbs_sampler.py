import copy
import random


def symbol_to_number(s):
	
	
def probability(pattern, profile):


def random_kmers(dna, k, t):


def profile_from_motifs(motifs, k, t):


def score(motifs, k):


def most_probable_kmer(dna_string, profile, k):


def gibbs_sampler(dna, k, t, N):
	
	
def main():
    dna = [
        'GTAGATGTCATTAGCATGCAC',
        'CCTAGCCACTCTGCCATGTCG',
        'AACTCGTGCATTCTACGACTG',
        'AAACTTTCCGGATCTTCATAC',
        'CTACATCATCGAAGGCTACGC'
    ]

    print(gibbs_sampler(dna, 4, len(dna), 500))


if __name__ == '__main__':
    main()
