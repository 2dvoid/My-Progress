// https://judge.beecrowd.com/en/problems/view/1150

#include <stdio.h>

int main () {
    int x,z,i, sum;
    scanf("%d", &x);
    sum = x;
    
    do {
        scanf("%d", &z);
    }
    while (z<=x);
    
    while(z<=x) scanf("%d", &z);
    for (i=1; sum<z; i++) {
        sum+=x;
        x++;
    }
    printf("%d\n", i);
}
