#include <bits/stdc++.h>
using namespace std;

/*Uma permutação da sequência 1 . . n é qualquer rearranjo dos termos dessa sequência. Em outras palavras, uma permutação de 1 . . n é qualquer
sequência p[1 . . n] em que cada elemento de 1 . . n aparece somente uma vez.
Por exemplo dado o valor 123 as possíveis permutações são:
123
132
213
231
312
321
Elabore um programa que dado um valor inteiro qualquer, menor que 9999 apresente as permutações possíveis para o valor informado.*/

void Verifica(char numero[]);
void Permuta(char numero[]);

int main(){

    setlocale(LC_ALL, "Portuguese");
    char numero[5];
    int tamanho = strlen(numero);

    cout<<" Digite um número para saber sua permutação: ";
    gets(numero);
    Verifica(numero);
    getchar();
    return 0;
}

void Verifica(char numero[]){
    if(atoi(numero) < 9999){
        cout<<endl;
        Permuta(numero);
    }else{
        cout<<"\n\n\t O NÚMERO PRECISA SER MENOR QUE 9999!\n\n";
    }
}

void Permuta(char numero[]){
    cout<<"--PERMUTAÇÃO--"<<endl;
    switch(strlen(numero)){
    case 1:
        cout<<numero[0];
        break;
    case 2:
        do {
            cout<<"  "<<numero[0]<<" "<<numero[1]<<endl;
        } while(next_permutation(numero, numero + 2));
        break;
    case 3:
        do {
            cout<<"  "<<numero[0]<<" "<<numero[1]<<" "<<numero[2]<<endl;
        } while(next_permutation(numero, numero + 3));
        break;
    case 4:
        do {
            cout<<"  "<<numero[0]<<" "<<numero[1]<<" "<<numero[2]<<" "<<numero[3]<<endl;
        } while(next_permutation(numero, numero + 4));
        break;
    default:
        break;
    }
    cout<<"--------------"<<endl;
}
