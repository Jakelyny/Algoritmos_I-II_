#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Escreva um programa que leia um texto qualquer e usando aritm�tica de ponteiro execute as seguintes a��es:
- Conte quantas letras mai�sculas e quantas letras min�sculas existem no texto;
- Transforme todos os caracteres do texto em mai�sculo;
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
    cout<<"\nExistem "<<maiuscula<<" letras mai�scula e "<<minuscula<<" em min�scula."<<endl;
    cout<<"\nTexto em mai�sculo: "<<texto<<endl;
    int i=0;
    cout<<"\nTexto invertido: ";
    while(i <= strlen(texto)){
        cout<<*ptexto;
        ptexto--;
        i++;
    }
    cout<<"\n\n";
}



