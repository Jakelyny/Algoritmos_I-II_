#include<iostream>
using namespace std;

void verificaSignos(int pd, int pm); /// sem retorno

string verificaSignosII(int pd, int pm); /// com retorno;

void funcMostraMSG();
void funcMostraFIM();

main()
{
    int d, m;
    char resp;
    string recebeRetorno;

    setlocale(LC_ALL, "portuguese");

    do
    {
        cout<<"\n\nDigite Dia e Mês ";
        cin>>d;
        cin>>m;


        cout<<"\nChamando função I verificaSignos : ";
        verificaSignos(d,m);

        cout<<"\nChamando função II verificaSignosII : ";
        cout<<verificaSignosII(d,m);


        recebeRetorno = verificaSignosII(d,m);
        cout<<" \n Mostrando o que voltou da função " <<recebeRetorno;


        do
        {
            cout<<"\n\nInformar outra data S/N ?";
            cin>>resp;
            resp=toupper(resp);
            if (resp != 'S' and resp != 'N')
            {
                funcMostraMSG();
            }
        }
        while(resp != 'S' and resp != 'N');

    } while(resp=='S');
     funcMostraFIM();
}

void verificaSignos(int pd, int pm)
{
    string signo;
    switch(pm)
    {
     case 1:
        if(pd<21) signo="Capricornio";
        else  signo = "Aquario";
        break;
     case 2:
        if(pd<20)  signo = "Aquario";
        else  signo = "Peixes";
        break;
     case 3:
        if(pd<20)  signo = "Peixes";
        else  signo = "Aries";
        break;
     case 4:
        if(pd<20)  signo = "Aries";
        else  signo = "Touro";
        break;
     case 5:
        if(pd<20)  signo = "Touro";
        else  signo = "Gemeos";
        break;
     case 6:
        if(pd<20)  signo = "Gemeos";
        else  signo = "Cancer";
        break;
    case 7:
        if(pd<20)  signo = "Cancer";
        else  signo = "Leao";
        break;
     case 8:
        if(pd<21)  signo = "Leao";
        else  signo = "Virgem";
        break;
    case 9:
        if(pd<21)  signo = "Virgem";
        else  signo = "Libra";
        break;
    case 10:
        if(pd<21)  signo = "Libra";
        else  signo = "Escorpião";
        break;
    case 11:
        if(pd<21)  signo = "Escorpião";
        else  signo = "Sagitario";
        break;
    case 12:
        if(pd<21)  signo = "Sagitario";
        else  signo = "Capriconio";
        break;
    default:
        signo="Não Identificado";
    }

    cout<<"\n O signo para a data e "<<signo;

}

string verificaSignosII(int pd, int pm)
{
    string signo;

    switch(pm)
    {
    case 1:
        if(pd<21) signo="Capricornio";
        else  signo = "Aquario";
        break;

    case 2:
        if(pd<20)  signo = "Aquario";
        else  signo = "Peixes";
        break;
    case 3:
        if(pd<20)  signo = "Peixes";
        else  signo = "Aries";
        break;
    case 4:
        if(pd<20)  signo = "Aries";
        else  signo = "Touro";
        break;
    case 5:
        if(pd<20)  signo = "Touro";
        else  signo = "Gemeos";
        break;
    case 6:
        if(pd<20)  signo = "Gemeos";
        else  signo = "Cancer";
        break;
    case 7:
        if(pd<20)  signo = "Cancer";
        else  signo = "Leao";
        break;
    case 8:
        if(pd<21)  signo = "Leao";
        else  signo = "Virgem";
        break;
    case 9:
        if(pd<21)  signo = "Virgem";
        else  signo = "Libra";
        break;
    case 10:
        if(pd<21)  signo = "Libra";
        else  signo = "Escorpião";
        break;
    case 11:
        if(pd<21)  signo = "Escorpi�o";
        else  signo = "Sagitario";
        break;
    case 12:
        if(pd<21)  signo = "Sagitario";
        else  signo = "Capriconio";
        break;
    default:
        signo="Não Identificado";
    }

    return signo;

}

void funcMostraMSG()
{
    cout<<"\n ************************************ \n";
    cout<<"\n *  Preste atenção nos enunciados   * \n";
    cout<<"\n ************************************ \n";
}

void funcMostraFIM()
{
    cout<<"\n ************************************ \n";
    cout<<"\n *         FIM DO PROGRAMA          * \n";
    cout<<"\n ************************************ \n";
}
