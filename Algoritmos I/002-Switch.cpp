#include <iostream>
using namespace std;

/* Leia um n�mero inteiro que representa um c�digo de DDD para discagem interurbana. Em seguida, informe � qual cidade o DDD pertence, considerando a tabela
abaixo, se a entrada for qualquer outro DDD que n�o esteja presente na tabela acima, o programa dever� informar: DDD n�o cadastrado. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int DDD, num;

    cout<<"  Digite seu DDD: " ;
    cin>>DDD;
    cout<<"  Digite seu n�mero: ";
    cin>>num;

    switch(DDD)
    {
        case 61:
            cout<<"\nSua chamada para o n�mero (61) "<<num<<" est� sendo encaminhada para Brasilia..\n\n";
            break;
        case 71:
            cout<<"\nSua chamada para o n�mero (71) "<<num<<" est� sendo encaminhada para Salvador..\n\n";
            break;
        case 11:
            cout<<"\nSua chamada para o n�mero (11) "<<num<<" est� sendo encaminhada para S�o Paulo..\n\n";
            break;
        case 21:
            cout<<"\nSua chamada para o n�mero (21) "<<num<<" est� sendo encaminhada para Rio de Janeiro..\n\n";
            break;
        case 32:
            cout<<"\nSua chamada para o n�mero (32) "<<num<<" est� sendo encaminhada para Juiz de Fora..\n\n";
            break;
        case 19:
            cout<<"\nSua chamada para o n�mero (19) "<<num<<" est� sendo encaminhada para Campinas..\n\n";
            break;
        case 27:
            cout<<"\nSua chamada para o n�mero (27) "<<num<<" est� sendo encaminhada para Vitoria..\n\n";
            break;
        case 31:
            cout<<"\nSua chamada para o n�mero (31) "<<num<<" est� sendo encaminhada para Belo Horizonte..\n\n";
            break;
        default:
            cout<<"\n\t Op��o de DDD inv�lida...\n\n";
    }


    system("PAUSE");
    return 0;
}
