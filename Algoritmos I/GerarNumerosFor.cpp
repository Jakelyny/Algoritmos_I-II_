#include<iostream>
#include<cstdio>
#include <cstdlib>
#include <ctime>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
    srand(time(NULL));

    int n,i;

    for (i = 1; i <=10; i++)
    {
        cout<<"\n Informe n�mero "<< i << " : ";
        n = rand() % 200;
        cout<< "  Numero Gerado "<< n;
        if( n % 2 == 0)
        {
            cout<<"... o numero � PAR";
        }
        else
        {
            cout<<"... o numero � IMPAR";
        }
    }

    cout<<" \n valor de i "<<i;

    cout<< "\n \n";
    system("Pause");




}


