#include <iostream>
using namespace std;

/* Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no último ano.
Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do crédito de acordo com a tabela
abaixo. Mostre uma mensagem informando o saldo médio e o valor do crédito.*/

main(){

    setlocale(LC_ALL, "Portuguese");
    double saldoMedio, valorCredito;

    cout<<" Digite seu saldo médio: ";
    cin>>saldoMedio;

    if(saldoMedio >= 0 && saldoMedio <= 200)
        valorCredito = 0;

    if(saldoMedio >= 201 && saldoMedio <= 400)
        valorCredito = saldoMedio * 0.2;

    if(saldoMedio >=401 && saldoMedio <= 600)
        valorCredito = saldoMedio * 0.3;

    if(saldoMedio >= 601)
        valorCredito = saldoMedio * 0.4;

    cout<<"\n\tSaldo médio: "<<saldoMedio<<endl;
    cout<<"\tValor do crédito: "<<valorCredito<<"\n\n"<<endl;
}
