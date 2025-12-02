#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024}; 
    int taille = 5; 

    for (int i = 0; i < taille; i++) {
        int n = nombres[i];

        printf("n = %d en binaire = ", n);

        if (n == 0) {
            printf("0");
        } else {
            int bit_trouve = 0;  

            for (int bit = 31; bit >= 0; bit--) {
                
                int masque = 1 << bit;
              
                if (n & masque) {
                    printf("1");
                    bit_trouve = 1;  
                } else {
                    if (bit_trouve) 
                      
                        printf("0");
                    }
                }
            }
        }

        printf("\n");
    }

    return 0;
}
