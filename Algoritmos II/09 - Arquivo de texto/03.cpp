#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
using namespace std;

void cadastro();
void mostrar();
void consulta();

main(){

    int menu = -1;
    do{
        system("cls");
        cout<<".------------MENU-----------."<<endl;
        cout<<"| 0 - Sair                  |"<<endl;
        cout<<"| 1 - Cadastrar             |"<<endl;
        cout<<"| 2 - Mostrar               |"<<endl;
        cout<<"| 3 - Consultar             |\n.---------------------------."<<endl;
        cout<<" Escolha uma opcao: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
        case 0:
            system("cls");
            cout << "\n\n\tENCERRANDO PROGRAMA...";
            getchar();
            break;
        case 1:
            system("cls");
            cadastro();
            getchar();
            break;
        case 2:
            system("cls");
            mostrar();
            getchar();
            break;
        case 3:
            system("cls");
            consulta();
            getchar();
            break;
        }
    }
    while(menu != 0);
}

void cadastro(){

    ofstream escreve("cadastro.txt",ios::app);
    char nome[500];
    cout<<"\n\n\tINFORME SEU NOME COMPLETO:\n\n\tx ";
    gets(nome);
    fflush(stdin);
    escreve<<nome<<"\n";
    escreve.close();
}

void mostrar(){

    cout<<"\n\nNOMES CADASTRADOS:\n\n";
    char x;
    ifstream ler("cadastro.txt",ios::in);
    while(ler.get(x)){
        cout<<x;
    }
    ler.close();
}

void consulta(){

    ifstream ler("cadastro.txt",ios::in);
    char copia[80];
    cout<<"\n\n\tINFORME O NOME PARA A CONSULTA:\n\n\tx ";
    gets(copia);
    char nomeC[80];
    int aux = 0;
    while(!ler.fail()){
        ler.getline(nomeC,80,'\n');
        if(!strcmp(nomeC, copia)){
            cout<<"\n\t O nome existe entre nomes cadastrados!";
            aux++;
        }
    }
    if(aux == 0){
        cout<<"\n\t O nome nao existe entre nomes cadastrados!";
    }
    ler.close();
}
