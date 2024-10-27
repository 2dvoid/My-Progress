//https://judge.beecrowd.com/en/problems/view/1858
#include <stdio.h>

int main (){
    int i, n, t, pos, s=0;
    scanf("%d", &n);

    scanf("%d", &t);
    s=t;
    pos=1;
    for (i=2; i<=n; i++) {
        scanf ("%d", &t);
        if (t<s){
            s=t;
            pos=i;
        }
    }
    printf ("%d\n", pos);
}
