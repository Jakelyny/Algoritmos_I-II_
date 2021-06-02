#include <iostream>
using namespace std;

/* Leia um número inteiro que representa um código de DDD para discagem interurbana. Em seguida, informe à qual cidade o DDD pertence, considerando a tabela
abaixo, se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar: DDD não cadastrado. */

int main(){

    setlocale(LC_ALL, "Portuguese");
    int DDD, num;

    cout<<"  Digite seu DDD: " ;
    cin>>DDD;
    cout<<"  Digite seu número: ";
    cin>>num;

    switch(DDD)
    {
        case 61:
            cout<<"\nSua chamada para o número (61) "<<num<<" está sendo encaminhada para Brasilia..\n\n";
            break;
        case 71:
            cout<<"\nSua chamada para o número (71) "<<num<<" está sendo encaminhada para Salvador..\n\n";
            break;
        case 11:
            cout<<"\nSua chamada para o número (11) "<<num<<" está sendo encaminhada para São Paulo..\n\n";
            break;
        case 21:
            cout<<"\nSua chamada para o número (21) "<<num<<" está sendo encaminhada para Rio de Janeiro..\n\n";
            break;
        case 32:
            cout<<"\nSua chamada para o número (32) "<<num<<" está sendo encaminhada para Juiz de Fora..\n\n";
            break;
        case 19:
            cout<<"\nSua chamada para o número (19) "<<num<<" está sendo encaminhada para Campinas..\n\n";
            break;
        case 27:
            cout<<"\nSua chamada para o número (27) "<<num<<" está sendo encaminhada para Vitoria..\n\n";
            break;
        case 31:
            cout<<"\nSua chamada para o número (31) "<<num<<" está sendo encaminhada para Belo Horizonte..\n\n";
            break;
        default:
            cout<<"\n\t Opção de DDD inválida...\n\n";
    }


    system("PAUSE");
    return 0;
}
