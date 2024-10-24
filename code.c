// Sum with recursion
#include <stdio.h>

int main () {
    int n;
    printf("Upper Range: ");
    scanf("%d", &n);
    
    printf("Sum is: %d\n", sum(n));
    
}

int sum (int n) {
    if (n==1) return 1;
    else {
        return n + sum (n-1);
    }    
} 
