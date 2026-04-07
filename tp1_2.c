int cuadrado(int a){
    return a * a;
}
void cuadrado2(int *a){
    *a = (*a) * (*a);
}
void dire(int a){
    printf("Direccion: %p",&a);
    printf("-Contenido: %d",a);
}

void Invertir(int *a,int *b){
    int pa = *a;
    *a = *b;
    *b = pa;
}
void orden(int *a,int *b){
    
        if(*a>*b){
            int aux = *a;
            *a = *b;
            *b = aux;
        }
}

int main(){
    int a,b;
    printf("Ingrese el valor a: \n");
    scanf("%d",&a);
    printf("Ingrese el valor b: \n");
    scanf("%d",&b);

    printf("a) El valor del cuadrado: %d\n",cuadrado(a));
    int copiaA = a;
    cuadrado2(&copiaA);
    printf("b) El valor del cuadrado: %d\n",copiaA);
    printf("c) Datos de a: \n");
    dire(a);
    printf("d) Invertir %d y %d: ", a, b);
    Invertir(&a, &b);
    printf("Resultado -> a: %d, b: %d\n", a, b);

    // Probar e)
    printf("e) Ordenar %d y %d: ", a, b);
    orden(&a, &b);
    printf("Resultado -> a (menor): %d, a (mayor): %d\n", a, b);

return 0;}
