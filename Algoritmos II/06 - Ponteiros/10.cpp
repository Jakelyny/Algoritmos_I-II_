#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Crie um programa para controlar o estoque de uma empresa, sabendo que serão no máximo 50 produtos, o sistema deverá
manipular o código do produto, nome, unidade, valor de venda e quantidade em estoque. O sistema deverá utilizar ponteiro
para manipular a struct e apresentar um menu com as seguintes opções:
0 – Sair
1 – Cadastrar produto
2 – Listar produtos cadastrados
3 – Consultar produto pelo código
4 – Vender produto (fornece o código e a quantidade de venda, o sistema verifica se existe estoque suficiente e executa a venda atualizando a quantidade em estoque).*/

struct cadastro
{
    int codigo;
    char nome[50];
    int unidade;
    float valor;
    int quantEstoq;
};

void Cadastrar(cadastro *x, int i);
void Listar(cadastro *x, int i);
void Consult(cadastro *x, int i);
void Venda(cadastro *x, int i, int quantV);

int main(){

    setlocale(LC_ALL, "Portuguese");
    cadastro x[20];
    int menu = -1, indice = -1;

    do{
        system("cls");
        cout<<" ****************MENU*****************"<<endl;
        cout<<" * 0 - Sair                          *"<<endl;
        cout<<" * 1 - Cadastrar produto             *"<<endl;
        cout<<" * 2 - Listar produtos cadastrados   *"<<endl;
        cout<<" * 3 - Consultar produto pelo código *"<<endl;
        cout<<" * 4 - Vender produto                *"<<endl;
        cout<<" *************************************"<<endl;
        cout<<"\nDigite a opção desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
            case 0:
                system("cls");
                cout<<"\n\n\t ENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
            case 1:
                system("cls");
                indice++;
                if(indice == 50){
                    cout<<"\n\n\tLimite de produtos cadastrados atingido!.."<<endl;
                }else{
                    Cadastrar(x, indice);
                }
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um produto primeiro!.."<<endl;
                }else{
                    Listar(x, indice);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um produto primeiro!.."<<endl;
                }else{
                    int copia = 0, a = 0;
                    cout<<" Insira o código: ";
                    cin>>copia;
                    for(int j = 0; j <= indice; j++){
                        if(x[j].codigo == copia){
                            Consult(x, j);
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
                int quantV, copia = 0, a = 0;
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um produto primeiro!.."<<endl;
                }else{
                    cout<<" Digite o código: ";
                    cin>>copia;
                    cout<<" Digite a quantidade: ";
                    cin>>quantV;
                    for(int j= 0; j <= indice; j++){
                        if(x[j].codigo == copia){
                            Venda(x, j, quantV);
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
        }
    }while(menu != 0);
    return 0;
}

void Cadastrar(cadastro *x, int i){
    cout<<"Digite o código do produto: ";
    cin>>x[i].codigo;
    fflush(stdin);
    cout<<"Digite o nome do produto: ";
    gets(x[i].nome);
    fflush(stdin);
    cout<<"Digite a unidade: ";
    cin>>x[i].unidade;
    fflush(stdin);
    cout<<"Digite o valor de venda: ";
    cin>>x[i].valor;
    fflush(stdin);
    cout<<"Digite a quantidade em estoque: ";
    cin>>x[i].quantEstoq;
}
void Listar(cadastro *x, int i){
    cout<<"  PRODUTOS CADASTRADOS: \n\n";
    for(int v = 0; v <= i; v++){
        cout<<" Código: "<<x[v].codigo<<endl;
        cout<<" Nome: "<<x[v].nome<<endl;
        cout<<" Unidade: "<<x[v].unidade<<endl;
        cout<<" Valor de venda: "<<x[v].valor<<endl;
        cout<<" Quantidade em estoque: "<<x[v].quantEstoq<<"\n\n";
    }
}
void Consult(cadastro *x, int i){
    cout<<" Código: "<<x[i].codigo<<endl;
    cout<<" Nome: "<<x[i].nome<<endl;
    cout<<" Unidade: "<<x[i].unidade<<endl;
    cout<<" Valor de venda: "<<x[i].valor<<endl;
    cout<<" Quantidade em estoque: "<<x[i].quantEstoq<<"\n\n";
    getchar();
}
void Venda(cadastro *x, int i, int quantV){
    if(x[i].quantEstoq >= quantV){
        cout<<"\n  Compra de "<<x[i].nome<<" efetuada!";
        x[i].quantEstoq -= quantV;
        getchar();
    }else{
        cout<<"\n  Não existe estoque o suficiente do produto!";
        getchar();
    }
}

