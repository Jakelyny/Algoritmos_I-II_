#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Escreva um programa que leia um texto qualquer e usando aritmética de ponteiro execute as seguintes ações:
- Conte quantas letras maiúsculas e quantas letras minúsculas existem no texto;
- Transforme todos os caracteres do texto em maiúsculo;
- Inverta o texto;*/

void maiuscMinusc(char *ptexto);

main(){

    setlocale(LC_ALL, "Portuguese");
    char texto[100];
    char *ptexto;
    ptexto = texto;
    cout<<"Digite um texto qualquer: ";
    gets(texto);
    fflush(stdin);
    int maiuscula = 0, minuscula = 0;
    while(*ptexto){
        if(isupper(*ptexto)){
            maiuscula++;
        }
        if(islower(*ptexto)){
            minuscula++;
        }
        *ptexto = toupper(*ptexto);
        ptexto++;
    }
    cout<<"\nExistem "<<maiuscula<<" letras maiúscula e "<<minuscula<<" em minúscula."<<endl;
    cout<<"\nTexto em maiúsculo: "<<texto<<endl;
    int i=0;
    cout<<"\nTexto invertido: ";
    while(i <= strlen(texto)){
        cout<<*ptexto;
        ptexto--;
        i++;
    }
    cout<<"\n\n";
}



