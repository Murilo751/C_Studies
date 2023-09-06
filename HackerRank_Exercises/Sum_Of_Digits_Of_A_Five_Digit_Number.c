#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SODOAFDN() {

    int n, s = 0;
    scanf("%d", &n);

    while (n != 0) {
        s+=n%10;
        n=n/10;
    }

    printf("%d", s);
    return 0;
}
