#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
    setlocale(LC_ALL,"portuguese");
    float sal, per, salFinal,inss;
    string nomeFunc;

    cout<<"Informe o nome do funcionário : ";
    cin>>nomeFunc;
    cout<<"\n Informe Salário : ";
    cin>> sal;
    cout<<"\n Informe percentual de aumento ";
    cin>>per;

    salFinal = sal + (per * sal)/100;
    if ((salFinal > 5000) or (per > 20))
        inss = (salFinal * 10)/100;
    else
        inss = (salFinal * 5)/100;


    cout<< "\n Seu salário com aumento "<<salFinal;
    salFinal = salFinal - inss;
    cout<< "\n Seu salário Final com desconto INSS "<<salFinal;
    cout<<"\n\n\n";
    system("Pause");

}
