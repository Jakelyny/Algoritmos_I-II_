#include <iostream>
using namespace std;

/*Escreva um programa que receba a altura (h), o sexo de uma pessoa (M � Masculino, F � Feminino) e o seu peso atual, ap�s o sistema dever� calcular o peso ideal, utilizando as seguintes f�rmulas:
- Homens: (72.7 * h) - 58
- Mulheres: (62.1 * h) - 44.7
Considera-se que a pessoa est� no peso ideal se o seu peso atual encontra-se em uma margem de -3kg do peso ideal ou +3kg do peso ideal.
Ao Final o sistema dever� exibir se o usu�rio est� abaixo, dentro do peso ideal, ou acima do peso ideal.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    float altura = 0.0, peso = 0.0;
    int imc = 0;
    char resposta;

    cout<<"Digite qual o seu seu sexo ( M / F ):";
    cin>>resposta;

    switch(resposta)
    {
        case 'f':
        case 'F':
            cout<<"Digite sua altura: ";
            cin>>altura;
            cout<<"Digite seu peso: ";
            cin>>peso;
            imc = (62.1 * altura) - 44.7;
            if(peso > imc && (peso > (imc + 3)))
            {
                cout<<"\n\n Voc� est� acima do peso! \n\n";
            }
            if(peso < imc && (peso < (imc - 3)))
            {
                cout<<"\n\n Voc� est� abaixo do peso! \n\n";
            }
            if(peso < (imc + 3) && peso > (imc - 3))
            {
                cout<<"\n\n Voc� est� no peso ideal! \n\n";
            }
            break;

        case 'm':
        case 'M':
            cout<<"Digite sua altura: ";
            cin>>altura;
            cout<<"Digite seu peso: ";
            cin>>peso;
            imc = (72.7 * altura) - 58;
            if(peso > imc && (peso > (imc + 3)))
            {
                cout<<"\n\n Voc� est� acima do peso! \n\n";
            }
            if(peso < imc && (peso < (imc - 3)))
            {
                cout<<"\n\n Voc� est� abaixo do peso! \n\n";
            }
            if(peso < (imc + 3) && peso > (imc - 3))
            {
                cout<<"\n\n Voc� est� no peso ideal! \n\n";
            }
            break;

        default:
            cout<<"\n\t\tOp��o inv�lida!\n\n";
    }
    system("PAUSE");
    return 0;
}
