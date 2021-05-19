#include <stdio.h>

int main() {
    printf("Introduce tu edad \n");
    int edad;
    edad = 0;
    scanf("%d", &edad);
    printf("Tu edad es %d\n", edad);

    if (edad < 60)
        printf("Eres joven");
    else
        printf("No eres joven");

    return 0;
}
