#include <iostream>
using namespace std;

/* Um banco conceder� um cr�dito especial aos seus clientes, vari�vel com o saldo m�dio no �ltimo ano.
Fa�a um algoritmo que leia o saldo m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela
abaixo. Mostre uma mensagem informando o saldo m�dio e o valor do cr�dito.*/

main(){

    setlocale(LC_ALL, "Portuguese");
    double saldoMedio, valorCredito;

    cout<<" Digite seu saldo m�dio: ";
    cin>>saldoMedio;

    if(saldoMedio >= 0 && saldoMedio <= 200)
        valorCredito = 0;

    if(saldoMedio >= 201 && saldoMedio <= 400)
        valorCredito = saldoMedio * 0.2;

    if(saldoMedio >=401 && saldoMedio <= 600)
        valorCredito = saldoMedio * 0.3;

    if(saldoMedio >= 601)
        valorCredito = saldoMedio * 0.4;

    cout<<"\n\tSaldo m�dio: "<<saldoMedio<<endl;
    cout<<"\tValor do cr�dito: "<<valorCredito<<"\n\n"<<endl;
}
