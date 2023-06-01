#include <stdio.h>

int main() {
    int beispiel[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(beispiel);

    for (int i = 0; i <= size; i++) {
        printf("%d\n", beispiel[i]);
    }

    return 0;
}


