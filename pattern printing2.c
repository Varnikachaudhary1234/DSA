#include <stdio.h>

int main() {
    int i, j, k;
    for (i = 1; i <= 4; i++) {
        k = i;





        for (j = 1; j <= i; j++, k++) {
            printf("%d", k);
        }

        printf("\n");
    }
    return 0;
}
