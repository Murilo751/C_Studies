#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int SADOTN(int)
{
    int a,b,sum,dif;
    float c,d,fsum,fdif;

    scanf("%d%d", &a, &b);
    scanf("%f%f", &c, &d);

    sum = a + b;
    dif = a - b;

    printf("%d %d\n",sum, dif);

    fsum = c + d;
    fdif = c - d;

    printf("%.1f %.1f\n",fsum, fdif);

    return 0;
}
