#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>

/*Fa�a um programa que l� um texto qualquer do teclado, remova os espa�os em branco do texto e
 apresente o texto conforme lido, sem os espa�os, e o texto de forma invertida, sem os espa�os.*/

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    string texto;

    cout<<"Digite um texto: ";
    getline(cin, texto);
    cout<<"\n Texto digitado: "<<texto;

    cout<<"\n\n Texto sem espa�o: ";
    for(int i = 0; i < texto.size(); i++){
        if(!isspace(texto[i])){
            cout<<texto[i];
        }
    }

    cout<<"\n\n Texto sem espa�o e invertido: ";
    for(int i = texto.size()-1; i >= 0; i--){
        if(!isspace(texto[i])){
            cout<<texto[i];
        }
    }

    getchar();
    return 0;
}
