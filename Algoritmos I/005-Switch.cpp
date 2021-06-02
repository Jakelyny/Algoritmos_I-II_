#include <iostream>
using namespace std;

/* Utilizando o comando switch escreva um algoritmo, que receba uma letra qualquer e verifique se a letra informada é uma vogal ou consoante,se for
vogal, indique a ordem dela no alfabeto, OBS:A entrada poderá ser em maiúsculo ou minúsculo e o algoritmo deve funcionar corretamente */

int main(){

    setlocale(LC_ALL, "Portuguese");
    char letra;

    cout<<" Digite uma letra para saber se é uma vogal: ";
    cin>>letra;

    switch(letra)
    {
        case 'a':
            cout<<"\n( A ) - É uma vogal e a primeira letra do alfabeto\n\n";
            break;
        case 'A':
            cout<<"\n( A ) - É uma vogal e a primeira letra do alfabeto\n\n";
            break;
        case 'e':
            cout<<"\n( E ) - É uma vogal e a quinta letra do alfabeto\n\n";
            break;
        case 'E':
            cout<<"\n( E ) - É uma vogal e a quinta letra do alfabeto\n\n";
            break;
        case 'i':
            cout<<"\n( I ) - É uma vogal e a nona letra do alfabeto\n\n";
            break;
        case 'I':
            cout<<"\n( I ) - É uma vogal e a nona letra do alfabeto\n\n";
            break;
        case 'o':
            cout<<"\n( O ) - É uma vogal e a décima quinta letra do alfabeto\n\n";
            break;
        case 'O':
            cout<<"\n( O ) - É uma vogal e a décima quinta letra do alfabeto\n\n";
            break;
        case 'u':
            cout<<"\n( U ) - É uma vogal e a vigésima primeira letra do alfabeto\n\n";
            break;
        case 'U':
            cout<<"\n( U ) - É uma vogal e a vigésima primeira letra do alfabeto\n\n";
            break;
        case 'h':
            cout<<"\nA letra ( H ) é uma letra diacrítica, sendo a segunda letra de um dígrafo\n\n";
            break;
        case 'H':
            cout<<"\nA letra ( H ) é uma letra diacrítica, sendo a segunda letra de um dígrafo\n\n";
            break;
        case 'b':
        case 'B':
        case 'c':
        case 'C':
        case 'd':
        case 'D':
        case 'f':
        case 'F':
        case 'g':
        case 'G':
        case 'j':
        case 'J':
        case 'k':
        case 'K':
        case 'l':
        case 'L':
        case 'm':
        case 'M':
        case 'n':
        case 'N':
        case 'p':
        case 'P':
        case 'q':
        case 'Q':
        case 'r':
        case 'R':
        case 's':
        case 'S':
        case 't':
        case 'T':
        case 'v':
        case 'V':
        case 'w':
        case 'W':
        case 'x':
        case 'X':
        case 'z':
        case 'Z':
            cout<<"\n A letra ( "<<letra<<" ) é uma consoante.\n\n";
            break;
        default:
            cout<<"\n\tOps.. Acho que essa opção não é uma vogal ou consoante...\n\n";
    }

    system("PAUSE");
    return 0;
}
