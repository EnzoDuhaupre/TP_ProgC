#include <stdio.h>

int main() {
    int d = 1048784;

    int bit4 = (d >> (31 - 4)) & 1;  
    int bit20 = (d >> (31 - 20)) & 1; 

    if (bit4 == 1 && bit20 == 1) {
        printf("1\n");
        printf("Resultat correct\n");
    } else {
        printf("0\n");
        printf("Resultat incorrect\n");
    }

    return 0;
}
