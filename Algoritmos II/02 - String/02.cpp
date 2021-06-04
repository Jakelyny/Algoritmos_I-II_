#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Fazer um programa que solicite o nome, o endereço, o telefone e a idade de uma pessoa e
monta uma string com a seguinte frase:
"Seu nome é ..., você tem ... anos, mora na rua ... e seu telefone é ...."*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    char nome[50], idade[10], rua[20], telefone[20], completo[200];

    cout<<"Digite seu nome: ";
    gets(nome);
    strcpy(completo,"\n\nSeu nome é " );
    strcat(completo, nome);

    cout<<"Sua idade: ";
    gets(idade);
    strcat(completo, ", você tem ");
    strcat(completo, idade);

    cout<<"Nome da rua em que mora: ";
    gets(rua);
    strcat(completo, " anos, mora na rua ");
    strcat(completo, rua);

    cout<<"Seu numero de telefone: ";
    gets(telefone);
    strcat(completo, " e seu telefone é ");
    strcat(completo, telefone);
    strcat(completo, ". \n\n");
    puts(completo);

    getchar();
    return 0;
}

