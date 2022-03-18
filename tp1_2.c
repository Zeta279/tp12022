#include <stdio.h>


int cuadrado1(int num);
void cuadrado2(int num);
void mostrar(int num);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(){
    int a, b;

    printf("Escribir dos numeros:\n");
    scanf("%d %d", &a, &b);

    printf("Cuadrado del primer numero: %d", cuadrado1(a));
    printf("Mostrando cuadrado del segundo numero: ");
    cuadrado2(b);

    mostrar(a);

    invertir(&a, &b);
    printf("Invirtiendo valores\nValor de a: %d\nValor de b: %d\n", a, b);

    orden(&a, &b);
    printf("Ordenando numeros\nValor de a: %d\nValor de b: %d\n", a, b);


    return 0;
}

int cuadrado1(int num){
    return num * num;
}

void cuadrado2(int num){
    printf("%d\n", num * num);
    return;
}

void mostrar(int num){
    printf("Direccion de memoria: %p\n", &num);
    printf("Contenido de la variable: %d\n", num);
    return;
}

void invertir(int *a, int *b){
    int aux;

    aux = *a;

    *a = *b;
    *b = aux;

    return;
}

void orden(int *a, int *b){
    int aux;

    aux = *a;

    if(*b < *a){
        *a = *b;
        *b = aux;
    }

    return;
}