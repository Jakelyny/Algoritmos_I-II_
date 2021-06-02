#include <iostream>

using namespace std;

main(){

    int minuto, segundo, hora, segundos;
    char resposta;

    do{
        cout<<"\nDigite os segundos: ";
        cin>>segundo;

        hora = segundo / 3600;
        minuto = (segundo % 3600) / 60;
        segundos = (segundo % 3600) % 60;

        cout<<"\n O evento durou:\n \t"<<hora<<" : "<<minuto<<" : "<<segundos<<endl;
        cout<<"\n\tDeseja fazer novamente? ( S / N )? ";
        cin>>resposta;
    }while(resposta == 's' || resposta == 'S');
    cout<<"\n\n\t   Encerrando programa..."<<endl;

}
