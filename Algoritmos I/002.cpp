#include <iostream>

using namespace std;

/*(2�) Fa�a um algoritmo que leia dois n�meros nas vari�veis Val1 e Val2, calcule sua m�dia na
vari�vel Media e imprima seu valor. */

int main(){

    system("color 87");
    setlocale(LC_ALL, "Portuguese");
    float val1, val2, media = 0.0;
    char resposta;

    do{
        cout<<"\nDigite um n�mero: ";
        cin>>val1;
        cout<<"Digite o segundo n�mero: ";
        cin>>val2;

        media = (val1 + val2) / 2;
        cout<<"\n A m�dia entre "<<val1<<" e "<<val2<<" � de "<<media<<".\n"<<endl;
        cout<<" Deseja fazer a m�dia novamente? ( S / N)? ";
        cin>>resposta;
    }while (resposta =='s' || resposta == 'S');
    cout<<"\n\t\t\t Encerrando programa...\n"<<endl;

    system("PAUSE");
    return 0;
}
