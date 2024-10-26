// https://judge.beecrowd.com/en/problems/view/1080

#include <stdio.h>

int main () {
    int n, pos=0, bigass=0;

    for (int i=1; i<=100; i++) {
        scanf("%d", &n);
        if (n>bigass) {
            bigass=n;
            pos=i;
        }
    }
    printf ("%d\n%d\n", bigass, pos);
}
