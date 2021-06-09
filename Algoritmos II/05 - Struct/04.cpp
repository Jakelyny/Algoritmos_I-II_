#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

/*Fazer um programa que cria uma estrutura chamada livro, que contém os elementos nome, editora, isbn, ano de edição, número de páginas e preço.
O sistema deverá permitir o cadastro de no máximo 20 livros e deverá apresentar o seguinte menu:
1 – Incluir livro
2 – Mostrar livros cadastrados (utilize um linha pontilhada entre um livro e outro)
3 – Livro mais caro
4 – Livro mais barato
5 – Mostrar os livro publicados em um determinado ano
6 – Sair*/

struct cadastro
{
    char nome[50];
    char editora[50];
    int isbn;
    int ano;
    int paginas;
    float valor;
};

void Cadastrar(cadastro x[], int i);
void Visualizar(cadastro x[], int i);
void MaisCaro(cadastro x[], int i);
void MaisBarato(cadastro x[], int i);
void AnoPublic(cadastro x[], int q);

int main(){

    setlocale(LC_ALL, "Portuguese");
    cadastro x[20];
    int menu = -1, indice = -1, copia = 0, a = 0;
    float v;

    do{
        system("cls");
        cout<<" *********************MENU*************************"<<endl;
        cout<<" * 1 - Incluir Livro                              *"<<endl;
        cout<<" * 2 - Mostrar Livros cadastrados                 *"<<endl;
        cout<<" * 3 - Livro mais caro                            *"<<endl;
        cout<<" * 4 - Livro mais barato                          *"<<endl;
        cout<<" * 5 - Mostrar livro publicado em determinado ano *"<<endl;
        cout<<" * 6 - Sair                                       *"<<endl;
        cout<<" **************************************************"<<endl;
        cout<<"\nDigite a opção desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
            case 1:
                system("cls");
                indice++;
                if(indice == 20){
                    cout<<"\n\n\tLimite de livros cadastrados atingido!.."<<endl;
                }else{
                    Cadastrar(x, indice);
                }
                break;
            case 2:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um livro primeiro!.."<<endl;
                }else{
                    Visualizar(x, indice);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um livro primeiro!.."<<endl;
                }else{
                    MaisCaro(x, indice);
                }
                getchar();
                break;
            case 4:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um livro primeiro!.."<<endl;
                }else{
                    MaisBarato(x, indice);
                }
                getchar();
                break;
            case 5:
                system("cls");
                if(indice < 0){
                    cout<<"\n\n\tPrecisa cadastrar um livro primeiro!.."<<endl;
                }else{
                    int copia = 0, a = 0;
                    cout<<" Insira o ano: ";
                    cin>>copia;
                    system("cls");
                    for(int l = 0; l <= indice; l++){
                        if(x[l].ano == copia){
                            AnoPublic(x, l);
                            a++;
                        }
                    }
                    if(a == 0){
                        cout<<"\n\n\tANO INVÁLIDO!..";
                        getchar();
                    }
                }
                getchar();
                break;
            case 6:
                system("cls");
                cout<<"\n\n\t ENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
        }
    }while(menu != 6);
    return 0;
}

void Cadastrar(cadastro x[], int i){
    cout<<"Digite o nome do livro: ";
    gets(x[i].nome);
    fflush(stdin);
    cout<<"Digite sua editora: ";
    gets(x[i].editora);
    fflush(stdin);
    cout<<"Digite seu ISBN: ";
    cin>>x[i].isbn;
    fflush(stdin);
    cout<<"Digite o ano do livro: ";
    cin>>x[i].ano;
    fflush(stdin);
    cout<<"Digite a quantidade de páginas: ";
    cin>>x[i].paginas;
    fflush(stdin);
    cout<<"Digite seu preço: R$";
    cin>>x[i].valor;
    fflush(stdin);
}

void Visualizar(cadastro x[], int i){
    cout<<"  LIVROS CADASTRADOS: \n\n..................................";
    for(int l = 0; l <= i; l++){
        cout<<"\n\n Livro: "<<x[l].nome;
        cout<<"\n Editora: "<<x[l].editora;
        cout<<"\n ISBN: "<<x[l].isbn;
        cout<<"\n Ano: "<<x[l].ano;
        cout<<"\n Páginas: "<<x[l].paginas;
        cout<<"\n Preço: R$"<<x[l].valor<<"\n\n..................................";
    }
}

void MaisCaro(cadastro x[], int i){
    int caro;
    for(int l = 0; l <= i; l++){
        if(l == 0 || x[l].valor > x[caro].valor){
            caro = l;
        }
    }
    cout<<"  O LIVRO MAIS CARO:";
    cout<<"\n\n Livro: "<<x[caro].nome;
    cout<<"\n Editora: "<<x[caro].editora;
    cout<<"\n ISBN: "<<x[caro].isbn;
    cout<<"\n Ano: "<<x[caro].ano;
    cout<<"\n Páginas: "<<x[caro].paginas;
    cout<<"\n Preço: R$"<<x[caro].valor<<"\n\n";
}

void MaisBarato(cadastro x[], int i){
    int barato;
    for(int l = 0; l <= i; l++){
        if(l == 0 || x[l].valor < x[barato].valor){
            barato = l;
        }
    }
    cout<<"  O LIVRO MAIS CARO:";
    cout<<"\n\n Livro: "<<x[barato].nome;
    cout<<"\n Editora: "<<x[barato].editora;
    cout<<"\n ISBN: "<<x[barato].isbn;
    cout<<"\n Ano: "<<x[barato].ano;
    cout<<"\n Páginas: "<<x[barato].paginas;
    cout<<"\n Preço: R$"<<x[barato].valor<<"\n\n";
}

void AnoPublic(cadastro x[], int q){
    cout<<"\n\n Livro: "<<x[q].nome;
    cout<<"\n Editora: "<<x[q].editora;
    cout<<"\n ISBN: "<<x[q].isbn;
    cout<<"\n Ano: "<<x[q].ano;
    cout<<"\n Páginas: "<<x[q].paginas;
    cout<<"\n Preço: R$"<<x[q].valor<<"\n\n";
    getchar();
}

