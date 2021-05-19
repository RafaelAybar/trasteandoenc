#include <stdio.h>

int main() {
    printf("Introduce tu edad \n");
    int edad;
    scanf("%s", &edad);
    if (edad < 60){
        printf("Eres joven");
    }
    else
        printf("No eres joven");

    return 0;
}
