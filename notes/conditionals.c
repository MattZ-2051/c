#include <stdio.h>

int main() {
    int temp;
    printf("Whats the temperature?\n");
    scanf("%d", &temp);

    if (temp >= 70) {
        printf("It's Hot!\n");
    } else if (temp >= 30) {
        printf("It's Mild\n");
    } else {
        printf("It's Cold\n");
    }

    return 0;
}
