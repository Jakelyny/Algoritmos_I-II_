#include<iostream>
using namespace std;

/*Efetuar o cálculo da quantidade de litros de combustível gastos em uma viagem,
sabendo-se que o carro faz 12 km com um litro. Deverão ser fornecidos o tempo
gasto na viagem e a velocidade média.Utilizar as seguintes fórmulas: distância = tempo * velocidade.
litros usados = distância / 12.
algoritmo deverá apresentar os valores da velocidade média, tempo gasto
na viagem, distância percorrida e a quantidade de litros utilizados na viagem.*/

main()
{
    setlocale (LC_ALL, "portuguese");
    double temp, velMedia, distPer, litUsad;

    cout<<" Vamos descobrir sobre sua viagem? Sabendo que seu carro faz 12km com um livro, digite agora seu tempo de viagem : ";
    cin>>temp;

    cout<<"\n Agora digite sua velocidade média : ";
    cin>>velMedia;

    distPer = ( temp * velMedia );
    litUsad = ( distPer/12 );

    cout<<"\n Sua velocidade média é de "<<velMedia<<"km, seu tempo de viagem foi de "<<temp<<"h, sua distância percorrida foi "<<distPer<<"km, e a quantidade de litros utilizados na viagem foi de "<<litUsad<<"l.";
    cout<<"\n \n \n";


}
