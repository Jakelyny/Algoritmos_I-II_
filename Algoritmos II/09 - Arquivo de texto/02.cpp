#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main()
{
    ofstream escreve("numFloat.txt",ios::app);
    float num;
    char escolha;
    if(escreve.is_open())
    {
        cout<<"\tArquivo aberto com sucesso.\n";
        do{
            cout<<"\nInforme o numero float: ";
            cin>>num;

            escreve<<num<<";";
            cout<<"Inserir mais numero?[ s / n ]: ";
            cin>>escolha;

            system("cls");
        }while(escolha == 's' || escolha == 'S');
        escreve.close();
        cout<<"Numeros float: ";
        ifstream ler("numFloat.txt",ios::in);
        char leu[1000];
        while(!ler.fail()){
            ler>>leu;
            cout<<leu;
        }
        ler.close();
        ifstream lerNum("numFloat.txt",ios::in);
        char conteudo[1000];
        float soma = 0, maior = 0, menor = 999, aux = 0;
        while(!lerNum.fail()){
            lerNum.getline(conteudo,20,';');
            float n = atof(conteudo);
            soma += n;
            if(aux == 0 || n > maior){
                maior = n;
            }
            if(aux == 0 || n < menor && n != 0){
                menor = n;
            }
            aux++;
        }
        cout<<"\n\n Soma: "<<soma<<" \t Media: "<<soma/(aux-1)<<"\t Maior numero:"<<maior<<"\t Menor numero: "<<menor<<endl;
        lerNum.close();
    }
    else{
        cout<<"Erro ao abrir o arquivo.";
    }
}

