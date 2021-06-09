#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int x, idade, m ,a;
main()
{
    x = 0;
    a = 0;
    while(x < 10)
    {
        cout<<"Digite a idade do aluno "<<x+1<<": ";
        cin>>idade;
        fflush(stdin);
        x++;
        a += idade;
    }
    m = (a/(x-1));
    cout<<"Resultado: "<<m<<endl;
    getchar();
}
