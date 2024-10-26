// https://judge.beecrowd.com/en/problems/view/1146

#include <stdio.h>

int main () {
    int x;
   while (1) {
       scanf("%d", &x);
       if (x==0) break;
       else {
           for (int i = 1; i<x; i++) {
               printf("%d ", i);
           }
           printf("%d", x);
           printf("\n");
       }
   }
}
