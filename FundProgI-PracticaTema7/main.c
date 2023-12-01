#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*suma();
    parImpar();
    compara();
    segun();
    intercambio1();
    intercambio2();
    meses();
    ordena3Numeros();*/
    operaciones();
    return 0;
}

int suma(){
    int entero1, entero2;
    printf("Introducir un n%cmero entero: ", 163);
    scanf("%d", &entero1);
    printf("Introducir otro n%cmero entero: ", 163);
    scanf("%d", &entero2);

    printf("La suma de ambos numeros es: %d", entero1+entero2);
}

int parImpar(){
    int entero;
    printf("Introducir un n%cmero entero: ", 163);
    scanf("%d", &entero);
    if(entero %2==0){
        printf("El n%cmero %d es PAR.", 163, entero);
    }else{
        printf("El n%cmero %d es IMPAR.", 163, entero);
    }
}

int compara(){
    int entero1, entero2;
    printf("Introduce un n%cmero entero: ", 163);
    scanf("%d", &entero1);
    printf("Introduce otro n%cmero entero: ", 163);
    scanf("%d", &entero2);

    if(entero1==entero2){
        printf("Ambos n%cmeros son IGUALES.", 163);
    }else if (entero1>entero2){
        printf("El n%cmero %d es mayor que %d", 163, entero1, entero2);
    }else {
        printf("El n%cmero %d es mayor que %d", 163, entero2, entero1);
    }
}

int segun(){
    int a, b;
    printf("Introduce un n%cmero entero: ", 163);
    scanf("%d", &a);
    printf("Introduce otro n%cmero entero: ", 163);
    scanf("%d", &b);

    if(a<b){
        printf("%d + %d = %d", a, b, a+b);
    }else{
        printf("%d * %d = %d", a, b, a*b);
    }
}

int intercambio1(){
    int a, b, enteroa, enterob;
    printf("Introduce un n%cmero entero: ", 163);
    scanf("%d", &a);
    printf("Introduce otro n%cmero entero: ", 163);
    scanf("%d", &b);

    enteroa=a;
    enterob=b;
    a=enterob;
    b=enteroa;

    printf("La variable a ahora vale %d y la varible b ahora vale %d: ", a, b);
}

int intercambio2(){
    int a, b, enteroa;
    printf("Introduce un n%cmero entero: ", 163);
    scanf("%d", &a);
    printf("Introduce otro n%cmero entero: ", 163);
    scanf("%d", &b);

    enteroa=a;
    a=b;
    b=enteroa;


    printf("La variable a ahora vale %d y la varible b ahora vale %d: ", a, b);
}

int meses(){
    int mes;

    printf("Introducir un n%cmero entero (1 a 12): ", 163);
    scanf("%d", &mes);

    switch(mes){
    case 1:
        printf("Enero");
        break;
    case 2:
        printf("Febrero");
        break;
    case 3:
        printf("Marzo");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Mayo");
        break;
    case 6:
        printf("Junio");
        break;
    case 7:
        printf("Julio");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Septiembre");
        break;
    case 10:
        printf("Octubre");
        break;
    case 11:
        printf("Noviembre");
        break;
    case 12:
        printf("Diciembre");
        break;

    default:
        printf("Valor incorrecto");
        break;
    }
}


int ordena3Numeros(){
    int entero1, entero2, entero3, temp;

    printf("Introducir un n%cmero entero: ", 163);
    scanf("%d", &entero1);
    printf("Introducir otro n%cmero entero: ", 163);
    scanf("%d", &entero2);
    printf("Introducir otro n%cmero entero m%cs: ", 163, 160);
    scanf("%d", &entero3);

    // Comparar y ordenar los números
    if (entero1 < entero2) {
        temp = entero1;
        entero1 = entero2;
        entero2 = temp;
    }

    if (entero1 < entero3) {
        temp = entero1;
        entero1 = entero3;
        entero3 = temp;
    }

    if (entero2 < entero3) {
        temp = entero2;
        entero2 = entero3;
        entero3 = temp;
    }

    // Imprimir los números en orden descendente
    printf("Los números en orden descendente son: %d, %d, %d\n", entero1, entero2, entero3);
}

operaciones(){
    int entero1, entero2;
    float resultado;

    printf("Introducir un n%cmero entero: ", 163);
    scanf("%d", &entero1);
    printf("Introducir otro n%cmero entero: ", 163);
    scanf("%d", &entero2);

    resultado=entero1+entero2;
    printf("%d+%d=%.2f\n", entero1, entero2, resultado);
    resultado=entero1-entero2;
    printf("%d-%d=%.2f\n", entero1, entero2, resultado);
    resultado=entero1*entero2;
    printf("%d*%d=%.2f\n", entero1, entero2, resultado);
    if (!entero1){
        resultado=(float)entero1/entero2;
        printf("%d/%d=%.2f\n", entero1, entero2, resultado);
    }

}
