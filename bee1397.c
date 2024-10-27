// https://judge.beecrowd.com/en/problems/view/1397

#include <stdio.h>

int main () {
    int n,a,b,sa,sb;

    while (scanf("%d", &n) && n!=0) {
        sa=0, sb=0;
        if (n==0) break;

        while (n--) {
            scanf ("%d %d", &a, &b);
            if (a>b) sa++;
            else if (b>a) sb++;
        }

        printf ("%d %d\n", sa, sb);
    } 
}
