#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
using namespace std;

/*Escreva um programa que simule um caixa eletr�nico, sabendo que o caixa disp�e das seguintes notas: 2, 5, 10, 20, 50 e 100. O caixa deve
priorizar (sempre que poss�vel) a entrega das notas de maior valor, por exemplo:
Saque 75,00: uma nota de 50, uma nota de 20 e uma nota de 5
Saque 11,00: uma nota de 5, 3 notas de 2
Caso seja solicitado um valor inv�lido para saque dever� informar uma mensagem com tal informa��o e solicitar a leitura de outro valor.
Utilize fun��es para resolver este exerc�cio.*/

float valor;

int SaqueDois();
int SaqueCinco();
int SaqueDez();
int SaqueVinte();
int SaqueCinquenta();
int SaqueCem();
void Imprime();

int main(){

    setlocale(LC_ALL, "Portuguese");

    cout<<" --------------------C�DULAS DISPON�VEIS NO CAIXA--------------------"<<endl;
    cout<<"|  R$ 02,00 | R$ 05,00 | R$ 10,00 | R$ 20,00 | R$ 50,00 | R$ 100,00  |"<<endl;
    cout<<" --------------------------------------------------------------------"<<endl;
    cout<<"\n Quanto deseja sacar? R$ ";
    cin>>valor;
    if( valor >= 2){
        cout<<"\n------------SAQUE REALIZADO------------"<<endl;
        Imprime();
        cout<<"\n---------------------------------------"<<endl;
    }else{
        cout<<"\n\n\tINFORME UM VALOR V�LIDO!\n\n";
    }
    getchar();
    return 0;
}

int SaqueDois(){
    int dois = 0;
    while(valor >= 2){
        dois++;
        valor -= 2;
    }
    return dois;
}

int SaqueCinco(){
    int cinco = 0;
    while(valor >= 5){
        cinco++;
        valor -= 5;
    }
    return cinco;
}

int SaqueDez(){
    int dez = 0;
    while(valor >= 10){
        dez++;
        valor -= 10;
    }
    return dez;
}
int SaqueVinte(){
    int vinte = 0;
    while(valor >= 20){
        vinte++;
        valor -= 20;
    }
    return vinte;
}
int SaqueCinquenta(){
    int cinquenta = 0;
    while(valor >= 50){
        cinquenta++;
        valor -= 50;
    }
    return cinquenta;
}
int SaqueCem(){
    int cem = 0;
    while(valor >= 100){
        cem++;
        valor -= 100;
    }
    return cem;
}

void Imprime(){
    int cem = SaqueCem();
    int cinquenta = SaqueCinquenta();
    int vinte = SaqueVinte();
    int dez = SaqueDez();
    int cinco = SaqueCinco();
    int dois = SaqueDois();
    if(cem > 0){
        cout<<"\n "<<cem<<" c�dula(s) de R$100,00 ";
    }
    if(cinquenta > 0){
        cout<<"\n "<<cinquenta<<" c�dula(s) de R$50,00 ";
    }
    if(vinte > 0){
        cout<<"\n "<<vinte<<" c�dula(s) de R$20,00 ";
    }
    if(dez > 0){
        cout<<"\n "<<dez<<" c�dula(s) de R$10,00 ";
    }
    if(cinco > 0){
        cout<<"\n "<<cinco<<" c�dula(s) de R$05,00 ";
    }
    if(dois > 0){
        cout<<"\n "<<dois<<" c�dula(s) de R$02,00 ";
    }
    if(valor > 0){
        cout<<fixed<<setprecision(2)<<"\n\n O valor de R$"<<valor<<" n�o pode ser sacado.";
    }
}


