#include<iostream>
using namespace std;

/*A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios estatut�rios.
O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio bruto. Fazer um algoritmo que
permita entrar com o sal�rio bruto e o valor da presta��o e informar se o empr�stimo pode ou
n�o ser concedido.*/

main()
{
    setlocale (LC_ALL,"portuguese");
    int salBruto, emprest;

    cout<<"\n Digite o valor do seu sal�rio bruto : R$";
    cin>>salBruto;

    cout<<"\n Agora informe o valor do seu empr�stimo: R$";
    cin>>emprest;

    if (emprest < (salBruto * 0.3))
        {
            cout<<" EMPR�STIMO APROVADO";
        }
    else
        {
            cout<<" EMPR�STIMO NEGADO";
        }
    cout<<"\n \n \n";
}
