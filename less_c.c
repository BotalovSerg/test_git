#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);

    if (x < 3 || x > 11) {
        printf("x not in [3: 11]\n");
    } else {
        printf("x in [3: 11]\n");
    }

    return 0;
}