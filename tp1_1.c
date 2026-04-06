#include <stdio.h>

int main(){
    printf("Hola mundo\n");
    int a = 54;
    int *puntero = &a;
    printf("Contenido del puntero: %d\n",*puntero);
    printf("Direccion de memoria: %p\n",puntero);
    printf("Direccion de memoria de la variable: %p\n",&a);
    printf("Direccion de memoria: %p\n",&puntero);
    printf("%d",sizeof(a));


    


return 0;}