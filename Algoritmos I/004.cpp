#include <iostream>

using namespace std;

main(){

    setlocale(LC_ALL, "Portuguese");
    int numero, quadrado, cubo;

    cout<<" Digite um número: ";
    cin>>numero;

    quadrado = numero * numero;
    cubo = numero * numero * numero;

    cout<<"\n  O número do quadrado do valor "<<numero<<" é "<<quadrado<<"."<<endl;
    cout<<"  O número do cubo do valor "<<numero<<" é "<<cubo<<"."<<endl;

}
