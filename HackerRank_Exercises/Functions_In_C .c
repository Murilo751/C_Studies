#include <stdio.h>

int max(x, y){
    return x > y ? x : y;
}

int max_of_four(int a, int b, int c, int d){
    return max( a, max(b, max(c, d)));
}

int FIC(int) {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

