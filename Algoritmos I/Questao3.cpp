#include<iostream>
#include<math.h>
using namespace std;

/*Escrever um algoritmo que l� 3 valores a,b,c. Por meio da formula apresentada a baixo encontre
 o maior destes 3 valores e o escreva com a mesagem � � O MAIOR�. Maior = a + b | a � b / 2
 | significa valor absoluto no c++ usamos fabs( a - b).Para usar o fabs() precisamos do #include<math.h>*/

main ()
{
    setlocale (LC_ALL, "portuguese");
    double a, b, c, maior, maiorTodos;

    cout<<"\n Informe o primeiro n�mero : ";
    cin>>a;

    cout<<"\n Informe o segundo n�mero : ";
    cin>>b;

    cout<<"\n Agora informe o terceiro n�mero : ";
    cin>>c;

    maior = ((a + b) + fabs (a - b))/2;
    maiorTodos = ((maior + c) + fabs (maior - c))/2;

    cout<<"\n O "<<maiorTodos<<" � O MAIOR!.";

    cout<<"\n \n \n";
}
