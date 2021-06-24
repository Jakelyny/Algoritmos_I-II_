#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;

main(){

    char nomeCidade[40];
    int aux =0 ;

    cout<<"Insira o nome da cidade: ";
    gets(nomeCidade);
    ifstream ler("cidade.txt",ios::in);
    char numChar[40];
    while(!ler.fail()){
        ler.getline(numChar,40, '\n');
        if(!strcmp(numChar, nomeCidade)){
            cout<<"\n\n\tJA EXISTE O NOME DESSA CIDADE!\n";
            aux++;
        }
    }
    if(aux == 0){
        cout<<"\n\n\tCIDADE CADASTRADA!\n"<<endl;
        ofstream escreve("cidade.txt", ios::app);
        escreve<<nomeCidade<<'\n';
    }
}
