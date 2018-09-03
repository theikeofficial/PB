import copy
import random


def symbol_to_number(c):
	
	
def probability(pattern, profile):
	
	
def random_kmers(dna, k, t):
	
	
def most_probable_kmer(dna_string, profile, k):
	
	
def profile_from_motifs(motifs, k, t):
	
	
def motifs_from_profile(profile, dna):
	
	
def score(motifs, k):
	
	
def randomized_motif_search(dna, k, t):


def main():
    dna = [
        'GTAGATGTCATTAGCATGCAC',
        'CCTAGCCACTCTGCCATGTCG',
        'AACTCGTGCATTCTACGACTG',
        'AAACTTTCCGGATCTTCATAC',
        'CTACATCATCGAAGGCTACGC'
    ]

    print(randomized_motif_search(dna, 4, len(dna)))


if __name__ == '__main__':
    main()
