#include <stdio.h>

void update(int *a,int *b) {
    int dif = *a;

    *a += *b;

    *b = (*b > dif) ? (*b - dif) :(dif - *b);

}

int PIC(int) {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
