#include <stdio.h>

int main(){
    printf("Hola Mundo\n");
    int num = 10, *punt;

    punt = &num;

    printf("Contenido del puntero: %d\n", *punt);
    printf("Direccion de memoria almacenada del puntero: %p\n", punt);
    printf("Direccion de memoria de la variable: %p\n", &num);
    printf("Direccion de memoria del puntero: %p\n", punt);
    printf("Tamaño de memoria utilizado por la variable: %d\n", sizeof(num));

    return 0;
}