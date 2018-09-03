import copy


def symbol_to_number(c):
	
	
def profile_from_motifs(motifs, k, t):

	
def probability(profile, pattern):
	
	
def most_probable_kmer(dna_string, profile, k):
	
	
def score(motifs, k):
	
	
def greedy_motif_search(dna, k, t):


def main():
    dna = [
        'GTAGATGTCATTAGCATGCAC',
        'CCTAGCCACTCTGCCATGTCG',
        'AACTCGTGCATTCTACGACTG',
        'AAACTTTCCGGATCTTCATAC',
        'CTACATCATCGAAGGCTACGC'
    ]
    print(greedy_motif_search(dna, 4, len(dna)))


if __name__ == '__main__':
    main()
