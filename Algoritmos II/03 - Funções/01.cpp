#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;

/*Escreva um programa, que utilizando funções, calcule e mostre a área de um trapézio. Sabendo que: A = (base maior + base menor) * altura) / 2;
O programa deverá ter 3 funções: leitura, calcula, mostra.*/

double Leitura(char recebido[100]);
float Calcular(float v1, float v2, float v3);
void Mostra(float v1, float v2, float v3);

int main(){

    setlocale(LC_ALL, "Portuguese");
    int menu = -1, sim = 0;
    float nMaior, nMenor, altura;

    do{
        system("cls");
        cout<<" ********MENU********"<<endl;
        cout<<" * 0 - Sair         *"<<endl;
        cout<<" * 1 - Leitura      *"<<endl;
        cout<<" * 2 - Calcula      *"<<endl;
        cout<<" * 3 - Mostrar      *"<<endl;
        cout<<" ********************"<<endl;
        cout<<"Digite a opção desejada: ";
        cin>>menu;
        fflush(stdin);
        switch(menu)
        {
            case 0:
                system("cls");
                cout<<"\n\n\tENCERRANDO PROGRAMA..."<<endl;
                getchar();
                break;
            case 1:
                system("cls");
                nMaior = Leitura("Digite a base maior: ");
                nMenor = Leitura("Digite a base menor: ");
                altura = Leitura("Digite a altura: ");
                sim = 1;
                getchar();
                break;
            case 2:
                system("cls");
                if(sim == 0){
                    cout << "\n\n\tPRIMEIRO INSIRA UM VALOR";
                }else{
                    cout<<" O valor da área do trapézio é: "<<Calcular(nMaior, nMenor, altura);
                }
                getchar();
                break;
            case 3:
                system("cls");
                if(sim == 0){
                    cout << "\n\n\tPRIMEIRO INSIRA UM VALOR";
                }else{
                    Mostra(nMaior, nMenor, altura);
                }
                getchar();
                break;
        }
    }while(menu != 0);
    return 0;
}

double Leitura(char recebido[100]){
    double numero;
    cout<<recebido;
    cin>>numero;
    return numero;
}

float Calcular(float v1, float v2, float v3){
    return ((v1 + v2) * v3) / 2;
}

void Mostra(float v1, float v2, float v3){
    cout<<" Valor maior recebido: "<<v1<<endl;
    cout<<" Valor menor recebido: "<<v2<<endl;
    cout<<" Valor da altura recebida: "<<v3<<endl;
}


