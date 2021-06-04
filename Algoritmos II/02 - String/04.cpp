#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;

/*Escreva um programa que receba um texto qualquer do teclado, em seguida apresente:
- Total de caracteres do texto
- Total de espaços em branco
- Total de vogais
- Total de consoantes
- Total de números
- Total de caracteres especiais*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    string texto;
    int espaco = 0, vogais = 0, consoante = 0, numero = 0, caractEspecial = 0;

    cout<<" Digite seu texto: ";
    getline(cin, texto);
    cout<<"\nTotal de caracteres do texto: "<<texto.size();

    cout<<"\nTotal de espaços em branco: ";
    for(int i = 0; i < texto.size(); i++){
        if(isspace(texto[i])){
            espaco++;
        }
    }
    cout<<espaco;

    cout<<"\nTotal de números: ";
    for(int i = 0; i < texto.size(); i++){
        if(isdigit(texto[i])){
            numero++;
        }
    }
    cout<<numero;

    cout<<"\nTotal de caracteres especiais: ";
    for(int i = 0; i < texto.size(); i++){
        if(!isalnum(texto[i])){
            caractEspecial++;
        }
    }
    cout<<caractEspecial - espaco;

    cout<<"\nTotal de vogais: ";
    for(int i = 0; i < texto.size(); i++){
        if(texto[i] == 'a'||texto[i] == 'A'||texto[i] == 'e'||texto[i] == 'E'||texto[i] == 'i'||texto[i] == 'I'||texto[i] == 'o'||texto[i] == 'O'||texto[i] == 'u'||texto[i] == 'U'){
            vogais++;
        }else{
            consoante++;
        }
    }
    cout<<vogais;
    cout<<"\nTotal de consoantes: "<<consoante-caractEspecial-numero;

    getchar();
    return 0;
}

