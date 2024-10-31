#include <stdio.h>

int main () {
    int c, n, div2, div3, div4, div5;

    scanf ("%d", &c);
    div2=0, div3=0, div4=0, div5=0;

    while (c--) {
        scanf ("%d", &n);
        if (n%2==0) div2++;
        if (n%3==0) div3++;
        if (n%4==0) div4++;
        if (n%5==0) div5++;
    }

    printf ("%d Multiplo(s) de 2\n", div2);
    printf ("%d Multiplo(s) de 3\n", div3);
    printf ("%d Multiplo(s) de 4\n", div4);
    printf ("%d Multiplo(s) de 5\n", div5);
}
