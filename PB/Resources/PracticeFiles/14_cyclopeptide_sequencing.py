from copy import deepcopy


def cyclic_spectrum(peptide, amino_acid, amino_acid_mass):


def expand(peptides, amino_acid):


def mass(peptide, amino_acid, amino_acid_mass):


def parent_mass(spectrum):


def linear_spectrum(peptide, amino_acid, amino_acid_mass):


def consistent(peptide, target_spectrum, amino_acid, amino_acid_mass):


def cyclopeptide_sequencing(spectrum, amino_acid, amino_acid_mass):


def main():
    amino_acid = ['G', 'A', 'S', 'P', 'V', 'T', 'C', 'I', 'L', 'N', 'D', 'K', 'Q', 'E', 'M', 'H', 'F', 'R', 'Y', 'W']
    amino_acid_mass = [57, 71, 87, 97, 99, 101, 103, 113, 113, 114, 115, 128, 128, 129, 131, 137, 147, 156, 163, 186]
    peptide = "SPQR"
    spectrum = cyclic_spectrum(peptide, amino_acid, amino_acid_mass)

    cyclopeptide_sequencing(spectrum, amino_acid, amino_acid_mass)


if __name__ == '__main__':
    main()
