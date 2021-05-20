#include <stdio.h>
#include <stdint-gcc.h>
typedef uint32_t edad_t;
int main() {
    printf("Introduce tu edad \n");

    edad_t edad = 0;
    scanf("%u", &edad);
    printf("Tu edad es %u\n", edad);
    if (edad > 0 && edad < 120) {
        if (edad > 60){
            printf("No eres joven");
        }
        else
            printf("Eres joven");
    } else {
        printf("Introduce un dato válido");
    }

    return 0;
}