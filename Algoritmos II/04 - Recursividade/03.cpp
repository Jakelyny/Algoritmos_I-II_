#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Faça um programa que receba dois valores inteiros e positivos, referentes a uma base e um expoente, após crie uma
função recursiva para realizar o cálculo e retornar o valor resultante.*/

int Leitura(char recebido[100]);
int Resultado(int base, int expoente);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int base = 0, expoente = 0;

    base = Leitura("Digite o valor da base: ");
    expoente = Leitura("Digite o valor do expoente: ");

    cout<<"\n Valor resultante: "<<Resultado(base, expoente)<<endl;

    getchar();
    return 0;
}

int Leitura(char recebido[100]){
    int numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

int Resultado(int base, int expoente){
    if(expoente != 1){
        return base * Resultado(base, expoente - 1);
    }else{
        return base;
    }
}
