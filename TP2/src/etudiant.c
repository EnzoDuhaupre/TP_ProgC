#include <stdio.h>

int main() {
    char noms[5][20] = {"Laquitu", "Gogmit", "Cocopit", "Thurbin", "Urbain"};
    char prenoms[5][20] = {"Albert", "Jean", "Christophe", "Patrick", "Lucas"};
    char adresses[5][50] = {
        "12 rue de la Lune, 75002 Paris",
        "27 boulevard Haussmann, 75009 Paris",
        "5 avenue des Champs-Élysées, 75008 Paris",
        "40 quai de la Tournelle, 75005 Paris",
        "9 place de la République, 75003 Paris"
    };

    float notes_prog[5] = {15.5, 12.0, 16.0, 14.5, 13.0};
    float notes_sys[5] = {14.0, 13.0, 15.5, 12.5, 16.0};

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.1f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.1f\n", notes_sys[i]);
        printf("--------------------------\n");
    }

    return 0;
}
