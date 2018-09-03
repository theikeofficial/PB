from copy import deepcopy


def linear_spectrum(peptide, amino_acid, amino_acid_mass):
	

def cyclic_spectrum(peptide, amino_acid, amino_acid_mass):


def mass(peptide, amino_acid, amino_acid_mass):


def expand(peptides, amino_acid):


def parent_mass(spectrum):


def consistent(peptide, target_spectrum, amino_acid, amino_acid_mass):


def score(peptide, spectrum_2, amino_acid, amino_acid_mass):


def linear_score(peptide, spectrum_2, amino_acid, amino_acid_mass):


def trim(leaderboard, spectrum, N, amino_acid, amino_acid_mass):


def leaderboard_cyclopeptide_sequencing(spectrum, N, amino_acid, amino_acid_mass):


def main():
    amino_acid = ['G', 'A', 'S', 'P', 'V', 'T', 'C', 'I', 'L', 'N', 'D', 'K', 'Q', 'E', 'M', 'H', 'F', 'R', 'Y', 'W']
    amino_acid_mass = [57, 71, 87, 97, 99, 101, 103, 113, 113, 114, 115, 128, 128, 129, 131, 137, 147, 156, 163, 186]
    peptide = "SPQR"
    spectrum = cyclic_spectrum(peptide, amino_acid, amino_acid_mass)
    N = 10

    print(leaderboard_cyclopeptide_sequencing(spectrum, N, amino_acid, amino_acid_mass))


if __name__ == '__main__':
    main()
