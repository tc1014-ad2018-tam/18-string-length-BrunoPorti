//Bruno Portilla Hinojosa
//ITESM
#include <stdio.h>

int main() {    //asigno variables.
    int n;
    int counter=0;  //variable del contador
    char phr[100];      //hago el string

    printf("In this program you can enter any phrase and i will tell you how many characters it has.\nEnter a phrase:\n");
    gets(phr);                  //pido una frase para meter e el string.

    while (phr[counter] != '\0')    //cuento los caracteres en el string.
        counter++;

    printf("your phrase has %d characters, including spaces.", counter); //muestro el numero de caracteres que tiene el string.

    return 0;
    ;}