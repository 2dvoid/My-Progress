#include <stdio.h>

int primechk(int n); 
int sprimechk (int n);

int main () {
    int n;

    while (scanf ("%d", &n) != EOF) {
        
        if (!primechk(n)) printf ("Nada\n");
        else {    
            if (sprimechk(n)) printf ("Super\n");
            else printf ("Primo\n");
        }
    }
}



int primechk(int n) {
    if (n<=1) return 0;
    for (int i=2; i<=(n/2); i++) {
        if (n%i==0) return 0;
    }
    return 1;
}


int sprimechk (int n) {
    while (n!=0) {
        if (primechk(n%10)==0) return 0;
        n/=10;
    }
    return 1;
}
