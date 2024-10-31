#include <stdio.h>

int primechk (int n); 

int main () {
    int s,c,n;
    scanf ("%d", &c);
    while (c--) {
        scanf ("%d", &n);
        s = primechk(n);
        if (s==1) printf ("%d eh primo\n", n);
        else if (s==0) printf ("%d nao eh primo\n", n);
        else printf ("Don't Fuck with me!\n");
    }
}


int primechk (int n) {

    if (n<=1) return -1;
    // Check from 2 to n/2. No need to check beyond n/2.
    for (int i=2; i<=(n/2); i++) {
        if (n%i==0) return 0;
    }

    return 1;
}
