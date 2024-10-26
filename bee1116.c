// https://judge.beecrowd.com/en/problems/view/1116

#include <stdio.h>

int main () {
    int n,a,b;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        scanf("%d %d", &a, &b);
        if (b == 0) printf("divisao impossivel\n");
        else {
            printf("%0.1f\n", (float)a/b);
        }
    }
}
