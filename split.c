#include <stdio.h>

int main () {
    int n;
    printf ("Enter a number: ");
    scanf ("%d", &n);

    printf ("Splitted digits (backwards): ");
    while (n!=0) {
        // Get the last digit
        printf ("%d ", n%10);
        // Discard the last digit from the number
        n = n/10;
    }
}
