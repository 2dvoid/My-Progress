// https://judge.beecrowd.com/en/problems/view/1098

#include <stdio.h>

int main () {

    for (float i = 0; i<=2.00001; i+=0.2) {

        for (int j = 1; j<=3; j++) {

            if (i - (int)i < 0.0001) {
                printf("I=%d J=%d", (int)i,(int)i+j);
                printf("\n");
            }
            else {
               printf("I=%0.1f J=%0.1f", i,i+j);
               printf("\n"); 
            }
            
        }
    }
}
