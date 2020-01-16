#include <stdio.h>
#include <locale.h>

int main() {
    int numero1;
    int numero2;
    int diferenca;
    setlocale(LC_ALL, "Portuguese");
    wprintf(L"Digite um número inteiro\n");
    scanf("%d", &numero1);
    wprintf(L"Digite outro número inteiro\n");
    scanf("%d", &numero2);
    if(numero1 > numero2){
        wprintf(L"%d é maior do que %d\n", numero1, numero2);
        diferenca = numero1 - numero2;
    }else{
        wprintf(L"%d é maior do que %d\n", numero2, numero1);
        diferenca = numero2 -  numero1;
    }

    wprintf(L"A diferença, em módulo, entre %d e %d é %d", numero1, numero2, diferenca);
    return 0;
}