#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;

/*Escrever uma função que recebe um texto qualquer e um caracter qualquer como parâmetro, em
 seguida mostre o texto conforme lido, em seguida remova todas as ocorrências do caracter lido
  do texto e apresente o texto resultante.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    string texto;
    char letra;

    cout<<"Digite seu texto: ";
    getline(cin, texto);
    cout<<"Agora um caracter: ";
    cin>>letra;
    cout<<"\n O texto digitado: "<<texto;

    cout<<"\n\n Texto sem o caracter ( "<<letra<<" ): ";
    for(int i = 0; i < texto.size(); i++){
        if(letra != texto[i]){
            cout<<texto[i];
        }
    }
    cout<<"\n\n";
    getchar();
    return 0;
}

