#include <iostream>

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, quadrado, cubo;

    cout<<" Digite um n�mero: ";
    cin>>numero;

    quadrado = numero * numero;
    cubo = numero * numero * numero;

    cout<<"\n  O n�mero do quadrado do valor "<<numero<<" � "<<quadrado<<"."<<endl;
    cout<<"  O n�mero do cubo do valor "<<numero<<" � "<<cubo<<"."<<endl;

}
