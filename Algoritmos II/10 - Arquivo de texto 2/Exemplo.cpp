#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<ctime>

using namespace std;

struct cad
{
    int matricula;
    char nome[100];
    char sexo[1];
    float salario;
};

void cadastrar(int i);
void leitura(cad px[], int *i);
main()
{
    cad x[20];
    int menu, indice = -1;
    do{
        system("cls");
        cout << "0 - Sair" << endl;
        cout << "1 - Cadastrar" << endl;
        cout << "2 - Mostrar" << endl;
        cout << "Sua escolha: ";
        cin >> menu;
        fflush(stdin);

        switch(menu)
        {
            case 0:
               cout << "Programa finalizado.";
               getchar();
               break;
            case 1:
               cadastrar(indice);
               getchar();
               break;
            case 2:
               leitura(x, &indice);
               for(int j = 0; j <= indice; j++)
               {
                   cout << "Matricula: " << x[j].matricula << endl;
                   cout << "Nome: " << x[j].nome << endl;
                   cout << "Sexo: " << x[j].sexo << endl;
                   cout << "Salario: " << x[j].salario << endl;
                   cout << "-------------------------------" << endl;
               }
               getchar();
               break;
            default:
                cout << "Opcao invalida";
                getchar();
                break;
        };
    }while(menu != 0);
}

void cadastrar(int i)
{
    cad x;
    ofstream escreve("exemplo_31.txt",ios::app);
    if(escreve.is_open())
    {
        cout << "\nInforme a matricula: ";
        cin >> x.matricula;
        fflush(stdin);
        if(i > -1)
            escreve << "\n";
        escreve << x.matricula << ";";
        cout << "\nInforme o nome: ";
        gets(x.nome);
        fflush(stdin);
        escreve << x.nome << ";";
        cout << "\nInforme o sexo: ";
        cin >> x.sexo;
        fflush(stdin);
        escreve << x.sexo << ";";
        cout << "\nInforme o salario: ";
        cin >> x.salario;
        fflush(stdin);
        escreve << x.salario;

        escreve.close();
    }
    else
    {
        cout << "Falha ao abrir o arquivo.";
    }
}

void leitura(cad px[], int *i)
{
    ifstream ler("exemplo_31.txt", ios::in);
    ler.clear();
    *i = -1;
    char aux[100];
    char aux2[100];
    if(ler.is_open())
    {
        while(!ler.eof())
        {
            (*i)++;
            ler.getline(aux,10,';');
            px[*i].matricula = atoi(aux);
            ler.getline(px[*i].nome,100,';');
            ler.getline(px[*i].sexo,10,';');
            ler.getline(aux2,20);
            px[*i].salario = atof(aux2);
        }
        ler.close();
    }
    else
    {
        cout << "Falha ao abrir o arquivo.";
    }
}
