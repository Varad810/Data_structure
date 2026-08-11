#include <stdio.h>
#include<conio.h>
int main() {
    int i;
    int integers[10];
    float floats[10];
    char chars[10];

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &integers[i]);
    }

    printf("Enter 10 float values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &floats[i]);
    }

    printf("Enter 10 characters:\n");
    for (i = 0; i < 10; i++) {
        scanf(" %c", &chars[i]);
    }

	printf("values are: \n");
    printf("\nIntegers:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", integers[i]);
    }

    printf("\nFloats:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", floats[i]);
    }
    
    printf("\nCharacters:\n");
    for (i = 0; i < 10; i++) {
        printf("%c ", chars[i]);
    }

    getch();
}