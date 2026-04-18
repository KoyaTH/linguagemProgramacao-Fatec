#include <stdio.h>

int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0)
            printf("\nO numero %d e divisivel por 3", i);
    }
    return 0;
}