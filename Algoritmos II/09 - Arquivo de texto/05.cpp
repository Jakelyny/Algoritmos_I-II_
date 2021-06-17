#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<fstream>

using namespace std;

main()
{
    ofstream escreve("numeroFloat.txt",ios::app);
    float num;
    char escolha;
    if(escreve.is_open()){

        cout<<"\tArquivo aberto com sucesso.\n";
        do{
            cout<<"\nInforme o numero float: ";
            cin>>num;

            escreve<<num<<"\n";
            cout<<"Inserir mais numero?[ s / n ]: ";
            cin>>escolha;

            system("cls");
        }while(escolha == 's' || escolha == 'S');
        escreve.close();
        cout<<"Numeros float: \n";
        ifstream ler("numeroFloat.txt",ios::in);
        char leu[1000];
        while(!ler.fail()){
            ler>>leu;
            cout<<leu<<endl;
        }
        ler.close();
        ifstream lerNum("numeroFloat.txt",ios::in);
        char conteudo[1000], copia = '\n';
        float maior = 0, aux = 0;
        while(!lerNum.fail()){
            lerNum.getline(conteudo,20,'\n');
            float n = atof(conteudo);
            if(aux == 0 || n > maior){
                maior = n;
            }
            aux++;
        }
        cout<<"\n\n O maior numero eh "<<maior<<endl;
        lerNum.close();
    }else{
        cout<<"Erro ao abrir o arquivo.";
    }
}
