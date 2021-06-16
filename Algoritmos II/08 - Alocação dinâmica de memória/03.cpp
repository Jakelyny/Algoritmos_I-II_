#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

struct cadastro
{
    int codigo;
    char nome[50];
    int unidade;
    float valor;
    int quantEstoq;
};

void cadastrar(cadastro *x, int i);
void listar(cadastro *x, int i);
void consult(cadastro *x, int i);
void venda(cadastro *x, int i, int quantV);

int main(){

    setlocale(LC_ALL, "Portuguese");
    cadastro *x = new cadastro[20];
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
                    cadastrar(x, indice);
                }
                getchar();
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um produto primeiro!.."<<endl;
                }else{
                    listar(x, indice);
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
                            consult(x, j);
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
                            venda(x, j, quantV);
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

void cadastrar(cadastro *x, int i){
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
void listar(cadastro *x, int i){
    cout<<"  PRODUTOS CADASTRADOS: \n\n";
    for(int v = 0; v <= i; v++){
        cout<<" Código: "<<x[v].codigo<<endl;
        cout<<" Nome: "<<x[v].nome<<endl;
        cout<<" Unidade: "<<x[v].unidade<<endl;
        cout<<" Valor de venda: "<<x[v].valor<<endl;
        cout<<" Quantidade em estoque: "<<x[v].quantEstoq<<"\n\n";
    }
}
void consult(cadastro *x, int i){
    cout<<" Código: "<<x[i].codigo<<endl;
    cout<<" Nome: "<<x[i].nome<<endl;
    cout<<" Unidade: "<<x[i].unidade<<endl;
    cout<<" Valor de venda: "<<x[i].valor<<endl;
    cout<<" Quantidade em estoque: "<<x[i].quantEstoq<<"\n\n";
    getchar();
}

void venda(cadastro *x, int i, int quantV){
    if(x[i].quantEstoq >= quantV){
        cout<<"\n  Compra de "<<x[i].nome<<" efetuada!";
        x[i].quantEstoq -= quantV;
        getchar();
    }else{
        cout<<"\n  Não existe estoque o suficiente do produto!";
        getchar();
    }
}
