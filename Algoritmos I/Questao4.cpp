#include<iostream>
using namespace std;

/*A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários estatutários.
O valor máximo da prestação não poderá ultrapassar 30% do salário bruto. Fazer um algoritmo que
permita entrar com o salário bruto e o valor da prestação e informar se o empréstimo pode ou
não ser concedido.*/

main()
{
    setlocale (LC_ALL,"portuguese");
    int salBruto, emprest;

    cout<<"\n Digite o valor do seu salário bruto : R$";
    cin>>salBruto;

    cout<<"\n Agora informe o valor do seu empréstimo: R$";
    cin>>emprest;

    if (emprest < (salBruto * 0.3))
        {
            cout<<" EMPRÉSTIMO APROVADO";
        }
    else
        {
            cout<<" EMPRÉSTIMO NEGADO";
        }
    cout<<"\n \n \n";
}
