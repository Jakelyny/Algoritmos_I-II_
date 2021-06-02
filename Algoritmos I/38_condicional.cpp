#include<iostream>
using namespace std;

/*Um banco concederá um crédito especial aos seus clientes, variável com o saldo médio no
último ano. Faça um algoritmo que leia o saldo médio de um cliente e calcule o valor do
crédito de acordo com a tabela abaixo.Mostre uma mensagem informando o saldo médio e o valor do crédito*/

int main()
{
    double saldoMedio, credito;

    cout<<"Informe o saldo medio do cliente: ";
    cin>>saldoMedio;

    if (saldoMedio>=0 && saldoMedio<=200)
        credito=0;

    if (saldoMedio>=201 && saldoMedio<=400)
        credito=saldoMedio*0.2;

    if (saldoMedio>=401 && saldoMedio<=600)
        credito=saldoMedio*0.3;

     if (saldoMedio>=601)
        credito=saldoMedio*0.4;

    cout<<"\n O saldo medio e: "<<saldoMedio;
    cout<<"\n O credito e: "<<credito;

    cout<<"\n \n";
}
