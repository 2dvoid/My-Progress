#include <stdio.h>

int main () {

    int n;
    scanf("%d", &n);
    
    // For n, no divisor exists beyond (n/2)
    for (int i = 1; i<=(n/2); i++) {
        if (n%i==0) printf("%d\n", i);
    }
    printf("%d\n", n);
}
