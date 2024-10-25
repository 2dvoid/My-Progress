// Sum with recursion
#include <stdio.h>

int fact (int n);

int main () {
    int n;
    printf("Factorial of (Only positive int value): ");
    scanf("%d", &n);
    
    printf("Factorial of %d is: %d\n",n, fact(n));
    
}

int fact (int n) {
    if (n==1 || n== 0) return 1;
    else if (n>1) {
        return n * fact (n-1);
    }
    else {
        return NULL;
    }
}
