#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número da conta, nome do cliente e saldo. O banco permite
o cadastramento de 10 contas e não poderá haver mais que uma conta com o mesmo número. O sistema deverá apresentar um menu com as seguintes opções:
1 – Cadastrar contas;
2 – Visualizar dados da conta; (deve ser informado o número da conta)
3 – Depositar; (deve ser informado o número da conta e o valor a ser depositado)
4 – Sacar; (deve ser informado o número da conta e o valor a ser sacado)
5 – Sair;*/

struct cadastro
{
    int conta;
    char nome[50];
    float saldo;
};

void Cadastrar(cadastro x[], int i);
void Visualizar(cadastro x[], int i);
void Depositar(cadastro x[], int i, float v);
void Sacar(cadastro x[], int i, float v);

int main(){

    setlocale(LC_ALL, "Portuguese");
    cadastro x[10];
    int menu = -1, indice = -1, copia = 0, a = 0;
    float v;

    do{
        system("cls");
        cout<<" **************MENU***************"<<endl;
        cout<<" * 1 - Cadastrar contas          *"<<endl;
        cout<<" * 2 - Visualizar dados da conta *"<<endl;
        cout<<" * 3 - Depositar                 *"<<endl;
        cout<<" * 4 - Sacar                     *"<<endl;
        cout<<" * 5 - Sair                      *"<<endl;
        cout<<" *********************************"<<endl;
        cout<<"\nDigite a opção desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
            case 1:
                system("cls");
                indice++;
                if(indice == 10){
                    cout<<"\n\n\tLimite de contas cadastradas atingido!.."<<endl;
                }else{
                    Cadastrar(x, indice);
                }
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa se cadastrar primeiro!.."<<endl;
                }else{
                    int copia = 0, a = 0;
                    cout<<" Insira o número da conta: ";
                    cin>>copia;
                    system("cls");
                    for(int j = 0; j <= indice; j++){
                        if(x[j].conta == copia){
                            Visualizar(x, j);
                            a++;
                        }
                    }
                    if(a == 0){
                        cout<<"\n\n\tCÓDIGO INVÁLIDO!..";
                        getchar();
                    }
                }
                getchar();
                break;
            case 3:
                system("cls");
                copia = 0, a = 0, v = 0;
                if(indice < 0){
                    cout<<"\n\n\tPrecisa se cadastrar primeiro!.."<<endl;
                }else{
                    cout<<" Insira o número da conta: ";
                    cin>>copia;
                    cout<<" Digite valor a ser depositado: R$";
                    cin>>v;
                    system("cls");
                    for(int j= 0; j <= indice; j++){
                        if(x[j].conta == copia){
                            Depositar(x, j, v);
                            a++;
                        }
                    }
                    if(a == 0){
                        cout<<"\n\n\tCÓDIGO INVÁLIDO!..";
                        getchar();
                    }
                }
                getchar();
                break;
            case 4:
                system("cls");
                copia = 0, a = 0, v = 0;
                if(indice < 0){
                    cout<<"\n\n\tPrecisa se cadastrar primeiro!.."<<endl;
                }else{
                    cout<<" Insira o número da conta: ";
                    cin>>copia;
                    cout<<" Digite valor a ser sacado: R$";
                    cin>>v;
                    for(int j= 0; j <= indice; j++){
                        if(x[j].conta == copia){
                            Sacar(x, j, v);
                            a++;
                        }
                    }
                    if(a == 0){
                        cout<<"\n\n\tCÓDIGO INVÁLIDO!..";
                        getchar();
                    }
                }
                getchar();
                break;
            case 5:
                system("cls");
                cout<<"\n\n\t ENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
        }
    }while(menu != 5);
    return 0;
}

void Cadastrar(cadastro x[], int i){
    cout<<"Digite o número da conta: ";
    cin>>x[i].conta;
    fflush(stdin);
    cout<<"Digite seu nome: ";
    gets(x[i].nome);
    fflush(stdin);
    cout<<"Digite seu saldo: R$";
    cin>>x[i].saldo;
    fflush(stdin);
}

void Visualizar(cadastro x[], int i){
    cout<<" DADOS DAS CONTA:\n"<<endl;
    cout<<" Conta: "<<x[i].conta<<endl;
    cout<<" Nome: "<<x[i].nome<<endl;
    cout<<" Saldo: R$"<<x[i].saldo<<"\n\n";
    getchar();
}
void Depositar(cadastro x[], int i, float v){
    cout<<"\n  Depósito de R$"<<v<<" efetuado com sucesso!";
    x[i].saldo += v;
    getchar();
}
void Sacar(cadastro x[], int i, float v){
    if(x[i].saldo >= v){
        cout<<"\n  Saque de R$"<<v<<" efetuado com sucesso!";
        x[i].saldo -= v;
        getchar();
    }else{
        cout<<"\n  Você não pussui saldo o suficente!";
        getchar();
    }
}
