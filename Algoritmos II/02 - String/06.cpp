#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;

/*Escreva um programa que receba o nome completo, cpf, dia, mês e ano de nascimento de uma
pessoa, o programa deverá realizar as seguintes ações:
- Nome deve ser apresentado somente com as iniciais de cada palavra em maiúscula.
- CPF deve ser informado somente os números, deve verificar se existe 11 dígitos e deve
apresentar formatado xxx.xxx.xxx-xx
- O dia, mês e ano do nascimento deve ser exibido formatado: xx/xx/xxxx, sabendo que o
dia e o mês podem ser informado somente com 1 dígito, neste caso deverá ser incluído o
zero na frente, por exemplo: mês: 4 deverá ser exibido 04.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    string nome, dia, mes, ano, CPF;

    cout<<"Digite seu nome completo: ";
    getline(cin, nome);
    for(int i = 0; i < nome.size(); i++){
    nome[i] = tolower(nome[i]);
    }
    for (int i = 0; i < nome.size() + 1; i++) {
        if (i == 0 || nome[i - 1] == ' '){
            nome[i] = toupper(nome[i]);
        }else{
            nome[i] = nome[i];
        }
    }
    cout<<"Seu CPF: ";
    getline(cin, CPF);

    if(CPF.size() > 11){
        cout<<"\n\n\t Digite apenas 11 dígitos do seu CPF!"<<endl;
    }

    cout<<"Dia do seu nascimento: ";
    getline(cin, dia);
    if(dia.size() < 2){
        dia = "0" + dia;
    }

    cout<<"Mês do seu nascimento: ";
    getline(cin, mes);
    if(mes.size() < 2){
        mes = "0" + mes;
    }

    cout<<"Ano do seu nascimento: ";
    getline(cin, ano);

    cout<<"\n\n -------------- DADOS --------------\n\n NOME: "<<nome<<"\n CPF: ";
    for(int i = 0; i < CPF.size(); i++){
        if(i == 2 || i == 5){
            cout<<i<<".";
        }else if(i == 8){
            cout<<i<<"-";
        }else{
            cout<<CPF[i];
        }
    }
    cout<<"\n DATA: "<<dia<<"/"<<mes<<"/"<<ano<<"\n\n ----------------------------------\n\n";

    getchar();
    return 0;
}


























