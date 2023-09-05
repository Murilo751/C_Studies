#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int s, i, j, maxe = 0, maxor = 0, maxxor = 0;

    for (i = 1; i <= n; i++) {
        for (j = i + 1; j <= n; j++) {

            int ce = i & j, cor = i | j, cxor = i ^ j;

            if (ce < k && ce > maxe) {
                maxe = ce ;
            }

            if (cor < k && cor > maxor) {
                maxor = cor ;
            }

            if (cxor < k && cxor > maxxor) {
                maxxor = cxor ;
            }
        }
    }

    printf("%d\n",maxe);
    printf("%d\n",maxor);
    printf("%d\n",maxxor);
}

int BO(int) {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
