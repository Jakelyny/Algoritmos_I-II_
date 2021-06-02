#include<iostream>
using namespace std;

main()
{
    setlocale (LC_ALL,"portuguese");
    string codigo, descri, categoria, tamanho;
    int quantEtiq, numColuna;
    float preco;


    cout<<"  Informe o código do Produto : ";
    cin>>codigo;

    cout<<"\n  Informe a descrição do Produto : ";
    cin.ignore();
    getline(cin,descri);

    cout<<"\n  Informe a categoria do Produto : ";
    getline(cin,categoria);

    cout<<"\n  Informe o Tamanho do Produto : ";
    cin>>tamanho;

    cout<<"\n  Informe o preço do produto : ";
    cin>>preco;

    cout<<"\n  Informe a quantidade de ETIQUETAS : ";
    cin>>quantEtiq;

    cout<<"\n Informe a opção de número de colunas [1|2] : ";
    cin>>numColuna;

    for (int i= 0; i < quantEtiq; i++)
    {
        if (numColuna == 1)
        {
            cout<<"\n------------------------------";
            cout<<"\n"<<descri<<"         "<<categoria;
            cout<<"\nTAM:  "<<tamanho;
            cout<<"\n                 R$ "<<preco;
            cout<<"\n------------------------------";
        }
        else
        {
            if (quantEtiq % 2 == 1 && i == quantEtiq - 1)
            {
                cout<<"\n------------------------------";
                cout<<"\n"<<descri<<"         "<<categoria;
                cout<<"\nTAM:  "<<tamanho;
                cout<<"\n                 R$ "<<preco;
                cout<<"\n------------------------------";

            }
            else
            {
                i++;
                cout<<"\n------------------------------          ------------------------------";
                cout<<"\n"<<descri<<"         "<<categoria<<"                "<<descri<<"         "<<categoria;
                cout<<"\nTAM:  "<<tamanho<<"                                 TAM:"  <<tamanho;
                cout<<"\n                 R$ "<<preco<<"                              R$ "<<preco;
                cout<<"\n------------------------------          ------------------------------";
            }
        }
    }
    cout<<"\n\n\n";
}





















