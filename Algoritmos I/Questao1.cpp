#include<iostream>
using namespace std;

/*Efetuar o c�lculo da quantidade de litros de combust�vel gastos em uma viagem,
sabendo-se que o carro faz 12 km com um litro. Dever�o ser fornecidos o tempo
gasto na viagem e a velocidade m�dia.Utilizar as seguintes f�rmulas: dist�ncia = tempo * velocidade.
litros usados = dist�ncia / 12.
algoritmo dever� apresentar os valores da velocidade m�dia, tempo gasto
na viagem, dist�ncia percorrida e a quantidade de litros utilizados na viagem.*/

main()
{
    setlocale (LC_ALL, "portuguese");
    double temp, velMedia, distPer, litUsad;

    cout<<" Vamos descobrir sobre sua viagem? Sabendo que seu carro faz 12km com um livro, digite agora seu tempo de viagem : ";
    cin>>temp;

    cout<<"\n Agora digite sua velocidade m�dia : ";
    cin>>velMedia;

    distPer = ( temp * velMedia );
    litUsad = ( distPer/12 );

    cout<<"\n Sua velocidade m�dia � de "<<velMedia<<"km, seu tempo de viagem foi de "<<temp<<"h, sua dist�ncia percorrida foi "<<distPer<<"km, e a quantidade de litros utilizados na viagem foi de "<<litUsad<<"l.";
    cout<<"\n \n \n";


}
