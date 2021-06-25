#include <bits/stdc++.h>
using namespace std;

/*Uma permuta��o da sequ�ncia 1 . . n � qualquer rearranjo dos termos dessa sequ�ncia. Em outras palavras, uma permuta��o de 1 . . n � qualquer
sequ�ncia p[1 . . n] em que cada elemento de 1 . . n aparece somente uma vez.
Por exemplo dado o valor 123 as poss�veis permuta��es s�o:
123
132
213
231
312
321
Elabore um programa que dado um valor inteiro qualquer, menor que 9999 apresente as permuta��es poss�veis para o valor informado.*/

void Verifica(char numero[]);
void Permuta(char numero[]);

int main(){

    setlocale(LC_ALL, "Portuguese");
    char numero[5];
    int tamanho = strlen(numero);

    cout<<" Digite um n�mero para saber sua permuta��o: ";
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
        cout<<"\n\n\t O N�MERO PRECISA SER MENOR QUE 9999!\n\n";
    }
}

void Permuta(char numero[]){
    cout<<"--PERMUTA��O--"<<endl;
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
