int main() {
    
    char source1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char source2[] = {'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char copie[100];
    char concat[200];

    int longueur_source1 = 0;
    int longueur_source2 = 0;
    int i;

    while (source1[longueur_source1] != '\0') {
        longueur_source1++;
    }

    while (source2[longueur_source2] != '\0') {
        longueur_source2++;
    }

    for (i = 0; i <= longueur_source1; i++) {
        copie[i] = source1[i];
    }

    for (i = 0; i < longueur_source1; i++) {
        concat[i] = source1[i];
    }

    for (i = 0; i <= longueur_source2; i++) {
        concat[longueur_source1 + i] = source2[i];
    }

    return 0;
}

