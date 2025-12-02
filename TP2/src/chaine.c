#include <stdio.h>

int main() {
    char source1[] = "Bonjour";
    char source2[] = " enzo";
    char copie[100];                     // Tableau pour copier source1 (suffisamment grand)
    char concat[200];                    // Tableau pour stocker la concaténation

    int longueur_source1 = 0;  // Longueur de source1
    int longueur_source2 = 0;  // Longueur de source2
    int i;

    // Calcul de la longueur de source1
    while (source1[longueur_source1] != '\0') {
        longueur_source1++;
    }

    // Calcul de la longueur de source2
    while (source2[longueur_source2] != '\0') {
        longueur_source2++;
    }

    // Copie de source1 dans copie, caractère par caractère
    for (i = 0; i <= longueur_source1; i++) {
        // Le <= copie aussi le caractère nul de fin '\0'
        copie[i] = source1[i];
    }

    // Copie de source1 dans concat (première partie de la concaténation)
    for (i = 0; i < longueur_source1; i++) {
        concat[i] = source1[i];
    }

    // Ajout de source2 à concat à partir de la fin de source1
    for (i = 0; i <= longueur_source2; i++) {
        concat [ longueur_source1 + i] = source2[i];
        // Le <= copie aussi le caractère nul de fin '\0' pour bien terminer la chaîne
    }

    // Affichage des résultats
    printf("Longueur de source1 : %d\n", longueur_source1);
    printf("Longueur de source2 : %d\n", longueur_source2);
    printf("Copie de source1 : %s\n", copie);
    printf("Concaténation source1 + source2 : %s\n", concat);

    return 0;
}
