//https://judge.beecrowd.com/en/problems/view/1145
// Solved By: 2dvoid (Emon)

#include <stdio.h>

int main () {

    int x,y,counter=1;
    scanf ("%d %d", &x, &y);

    // Calculate line number:
    int line=y/x;

    // Repeat for each line:
    for (int i=1; i<=line; i++) {

        // Print the first number without space:
        printf ("%d", counter++);

        // Print the remaining numbers with space beforehand:
        for (int j=2; j<=x; j++) {
            printf (" %d", counter++);
        }

        // Break the line:
        printf ("\n");
    }
}
