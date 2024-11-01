#include <stdio.h>

int main () {

    int c, tmpn, sumC=0, sumR=0, sumS=0, total;
    char tmpch;
    scanf ("%d", &c);

    while (c--) {
        scanf ("%d %c", &tmpn, &tmpch);

        if (tmpch=='C') sumC+=tmpn;
        else if (tmpch=='R') sumR+=tmpn;
        else if (tmpch=='S') sumS+=tmpn;
        else printf ("Wrong Input!");
    }

    total = sumC+sumR+sumS;
    printf ("Total: %d cobaias\n", total);
    printf ("Total de coelhos: %d\n", sumC);
    printf ("Total de ratos: %d\n", sumR);
    printf ("Total de sapos: %d\n", sumS);

    printf ("Percentual de coelhos: %0.2lf %%\n", ((sumC*100.0)/total));
    printf ("Percentual de ratos: %0.2lf %%\n", ((sumR*100.0)/total));
    printf ("Percentual de sapos: %0.2lf %%\n", ((sumS*100.0)/total));
}
