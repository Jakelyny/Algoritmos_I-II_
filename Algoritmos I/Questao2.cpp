#include<iostream>
using namespace std;

/*Escrever umalgoritmo que lê o: a. número de um vendedor; b. o seu salário fixo;c. o total
de vendas por ele efetuadas; d. o percentual que ganha sobre este total de vendas.
Calcule e mostre o salário total do vendedor*/

main()
{
    setlocale (LC_ALL, "portuguese");
    double numVendedor, salFixo, vendTotal, percent, salTotal;

    cout<<" Escreva seu número de vendedor : ";
    cin>>numVendedor;

    cout<<"\n O seu salário fixo : ";
    cin>>salFixo;

    cout<<"\n Total de vendas efetuadas : ";
    cin>>vendTotal;

    cout<<"\n Seu percentual sobre este total de vendas : ";
    cin>>percent;

    salTotal = salFixo + vendTotal * (percent/100);

    cout<<"\n O vendedor de número "<<numVendedor<<", com salário fixo de R$"<<salFixo<<", efetuou "<<vendTotal<<" vendas, com o percentual de "<<percent<<"%. Sendo seu ganho este mês de R$"<<salTotal<<".";

    cout<<"\n \n \n";

}
