#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Crie um programa que implemente uma fun��o recursiva para calcular o MDC (M�ximo Divisor Comum) entre dois n�meros
inteiros e positivos. Para calcular o MDC deve-se utilizar o algoritmo de Euclides, que possui como conceito: �O MDC
de dois n�meros inteiros � o maior n�mero inteiro que divide ambos sem deixar resto�, a figura abaixo exemplifica o algoritmo de Euclides.
O MDC de 30 e 4 �: 2*/

int Leitura(char recebido[100]);
int Resultado(int num1, int num2);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int num1 = 0, num2 = 0;

    num1 = Leitura("Digite um n�mero: ");
    num2 = Leitura("Digite outro n�mero: ");
    cout<<"\n O MDC do n�mero "<<num1<<" e "<<num2<<" �: "<<Resultado(num1, num2)<<endl;

    getchar();
    return 0;
}

int Leitura(char recebido[100]){
    int numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

int Resultado(int num1, int num2){
    if(num1 < num2){
        return Resultado(num2, num1);
    }else{
        if(num1 % num2 == 0){
            return num2;
        }else{
            return Resultado(num2, num1 % num2);
        }
    }
}
