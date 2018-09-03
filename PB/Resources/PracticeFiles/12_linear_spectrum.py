def linear_spectrum(peptide, amino_acid, amino_acid_mass):


def main():
    amino_acid = ['G', 'A', 'S', 'P', 'V', 'T', 'C', 'I', 'L', 'N', 'D', 'K', 'Q', 'E', 'M', 'H', 'F', 'R', 'Y', 'W']
    amino_acid_mass = [57, 71, 87, 97, 99, 101, 103, 113, 113, 114, 115, 128, 128, 129, 131, 137, 147, 156, 163, 186]
    peptide = "NQEL"

    spectrum = linear_spectrum(peptide, amino_acid, amino_acid_mass)
    print(spectrum)


if __name__ == '__main__':
    main()
