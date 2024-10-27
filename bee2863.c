// https://judge.beecrowd.com/en/problems/view/2863
#include <stdio.h>

int main () {

    int n;
    float t, s;
    while (scanf ("%d",  &n) != EOF) {
        
     
        scanf ("%f", &t);
        s=t;
        for (int i=2; i<=n; i++) {
            scanf ("%f", &t);
            if (t<s) s=t;
    
        }

    printf ("%0.2f\n", s);
    }
}
