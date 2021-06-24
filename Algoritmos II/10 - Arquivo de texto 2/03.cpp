#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>
#include<ctime>
using namespace std;

struct estoque{
    int codigo;
    char nome[50];
    int quant;
    float valor;
};

void leitura(estoque x[], int i);
void mostra(estoque x[], int i);
void buscaCod(estoque x[],int j);
void venderProduto(estoque x[],int j, int quant, int indice);

main(){
    estoque x[50];
    int menu = -1, indice = -1, cod = 0, aux = 0;
    char nome[50];

    do{
        system("cls");
        cout<<" ****************MENU*****************"<<endl;
        cout<<" * 0 - Sair                          *"<<endl;
        cout<<" * 1 - Cadastrar produto             *"<<endl;
        cout<<" * 2 - Listar produtos cadastrados   *"<<endl;
        cout<<" * 3 - Consultar produto pelo codigo *"<<endl;
        cout<<" * 4 - Vender produto                *"<<endl;
        cout<<" *************************************"<<endl;
        cout<<"\nDigite a opcao desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu){
            case 0 :
                system("cls");
                cout<<"\n\n\t ENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
            case 1 :
                system("cls");
                indice++;
                if(indice == 50){
                    cout<<"\n\n\tLimite de produtos cadastrados atingido!.."<<endl;
                }else{
                    leitura(x, indice);
                    getchar();
                }
            case 2 :
                system("cls");
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um produto primeiro!.."<<endl;
                }else{
                    mostra(x, indice);
                }
                break;
            case 3 :
                system("cls");
                aux=0;
                cout<<"Digite o nome: ";
                cin>>nome;
                for(int i = 0; i<=indice;i++){
                    if(strcmp(x[i].nome, nome)){
                        buscaCod(x, i);
                        aux++;
                    }
                }
                if(aux == 0){
                    cout<<"Nao existe produto com este codigo no estoque!\n";
                    getchar();
                }
                getchar();
                break;
            case 4 :
                system("cls");
                int quant;
                aux=0;
                cout<<"Insira o codigo: ";
                cin>>cod;
                cout<<"A quantidade: ";
                cin>>quant;
                for(int i = 0; i<=indice;i++){
                    if(x[i].codigo == cod){
                        venderProduto(x, i, quant, indice);
                        aux++;
                    }
                }
                if(aux == 0){
                    cout<<"\n\n\tCODIGO INVALIDO!..!";
                    getchar();
                }
                getchar();
                break;
            case 5 :
                system("cls");
                aux=0;
                for(int i = 0; i<=indice;i++){
                    if(x[i].quant == 0){
                        buscaCod(x, i);
                        aux++;
                    }
                }
                if(aux == 0){
                    cout<<"\n\n\tCODIGO INVALIDO!..\n";
                    getchar();
                }
                getchar();
                break;
        };
    }while(menu != 0);

}

void leitura(estoque x[], int i){
    ofstream escreve("produtos.txt",ios::app);
    cout << "\n\nInforme o codigo: ";
    cin >> x[i].codigo;
    escreve << x[i].codigo << "#";
    fflush(stdin);

    cout << "Informe o nome: ";
    gets(x[i].nome);
    escreve << x[i].nome << "#";
    fflush(stdin);

    cout << "Informe a quantidade: ";
    cin >> x[i].quant;
    escreve << x[i].quant << "#";
    fflush(stdin);

    cout << "Informe o valor: ";
    cin >> x[i].valor;
    escreve << x[i].valor << "#";
    escreve << "\n";
    fflush(stdin);
}

void mostra(estoque x[], int i)
{
    cout<<"DADOS DO ESTOQUE: " << endl;
    for(int j = 0; j <= i; j++){
        cout << "Codigo: " << x[j].codigo << endl;
        cout << "Nome: " << x[j].nome << endl;
        cout << "Quantidade: " << x[j].quant << endl;
        cout << "Valor: " << x[j].valor << endl;
        cout << "\n.............................\n";
        getchar();
    }
}

void buscaCod(estoque x[],int j){
    cout<<"Codigo: "<<x[j].codigo<<endl;
    cout<<"Nome: "<<x[j].nome<<endl;
    cout<<"Quantidade: "<< x[j].quant<<endl;
    cout<<"Valor: "<<x[j].valor<<endl;
    cout<<"\n\n";
    getchar();
}

void venderProduto(estoque x[], int j, int quant, int indice){
    if(x[j].quant >= quant){
        cout<<"n  Compra de "<<x[j].nome<<" efetuada!";
        x[j].quant -= quant;
        for(int i = 0; i < indice; i++){
            ofstream escreve("produtos.txt",ios::out);
            escreve<<x[i].codigo<<"#";
            escreve<<x[i].nome<<"#";
            escreve<<x[i].quant<<"#";
            escreve<<x[i].valor<<"#";
            escreve<<"\n";
        }
    }else{
        cout<<"Não existe estoque o suficiente do produto "<<x[j].nome;
    }
    getchar();
}
