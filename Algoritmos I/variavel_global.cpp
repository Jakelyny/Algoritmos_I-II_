#include<iostream>
using namespace std;
char funcValidaSenha();
string senha;
main()
{


    cout << "Informe senha: ";
    cin >> senha;
    if ( funcValidaSenha() == 'S')
    {
        cout << "\nSenha OK ";
    }
    else
    {
        cout << " Senha invalida ";
    }

}


char funcValidaSenha()
{

    if ( senha == "183")
    {
        return ( 'S');
    }
    else
    {
        return ( 'N');
    }
}
