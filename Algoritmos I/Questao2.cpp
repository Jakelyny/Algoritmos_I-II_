#include<iostream>
using namespace std;

/*Escrever umalgoritmo que l� o: a. n�mero de um vendedor; b. o seu sal�rio fixo;c. o total
de vendas por ele efetuadas; d. o percentual que ganha sobre este total de vendas.
Calcule e mostre o sal�rio total do vendedor*/

main()
{
    setlocale (LC_ALL, "portuguese");
    double numVendedor, salFixo, vendTotal, percent, salTotal;

    cout<<" Escreva seu n�mero de vendedor : ";
    cin>>numVendedor;

    cout<<"\n O seu sal�rio fixo : ";
    cin>>salFixo;

    cout<<"\n Total de vendas efetuadas : ";
    cin>>vendTotal;

    cout<<"\n Seu percentual sobre este total de vendas : ";
    cin>>percent;

    salTotal = salFixo + vendTotal * (percent/100);

    cout<<"\n O vendedor de n�mero "<<numVendedor<<", com sal�rio fixo de R$"<<salFixo<<", efetuou "<<vendTotal<<" vendas, com o percentual de "<<percent<<"%. Sendo seu ganho este m�s de R$"<<salTotal<<".";

    cout<<"\n \n \n";

}
