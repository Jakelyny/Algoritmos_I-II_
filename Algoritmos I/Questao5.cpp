#include<iostream>
using namespace std;

/*Criar um algoritmo que leia a idade de uma pessoa e informar a sua classe eleitoral:
n�o-eleitor (abaixo de 16 anos); eleitor obrigat�rio (entre 18 e 65 anos); eleitor facultativo
(entre 16 e 18 anos e maior de 65 anos)
*/

main()
{
    setlocale (LC_ALL,"portuguese");
    int idade;

    cout<<"\n Informe sua idade para saber sua classe eleitoral : ";
    cin>>idade;

    if (idade < 16)
        {
            cout<<"\n Com "<<idade<<" anos, voc� � eleitor n�o obrigat�rio.";
        }
    else if ((idade <= 16 || idade < 18) || (idade >= 65))
        {
            cout<<"\n Com "<<idade<<" anos, voc� � eleitor facultativo.";
        }
    else if (idade < 65)
        {
            cout<<"\n Com "<<idade<<" anos, voc� � eleitor obrigat�rio.";
        }
    cout<<"\n \n \n";
}
