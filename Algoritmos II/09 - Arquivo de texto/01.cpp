#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main(){

    setlocale(LC_ALL,"Portuguese");
    char nome[50];
    cout<<"Digite o nome do arquivo txt: ";
    gets(nome);
    strcat(nome, ".txt");
    ofstream escreve(nome,ios::app);
    string escrita;
    char (x);
    if(escreve.is_open()){
        cout<<"\n\tArquivo "<<nome<<" criado com sucesso!";
        cout<<"\n\nEscreva seu conteúdo: ";
        getline(cin, escrita);
        fflush(stdin);
        escreve<<"\n"<<escrita;
        escreve.close();
        ifstream ler(nome,ios::in);
        cout<<"\nConteúdo do arquivo "<<nome<<":\n----------------------------------------------";
        while(ler.get(x)){
            cout<<x;
        }
        cout<<"\n----------------------------------------------\n\nO conteúdo inserido possui "<<escrita.size()<<" caracteres\n\n";
    }else{
        cout<<"Erro ao abrir o arquivo.";
    }
    getchar();
}
