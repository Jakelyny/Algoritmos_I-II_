#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include <algorithm>
using namespace std;

/*Um pal�ndromo, � uma palavra ou um n�mero que se l� da mesma maneira nos dois sentidos - da esquerda para a direita ou ao
contr�rio, da direita para a esquerda.
Exemplos:
OVO, OSSO, R A D A R.
O mesmo se aplica �s frases, como exemplo:
SOCORRAM ME SUBI NO ONIBUS EM MARROCOS
O GALO AMA O LAGO
A TORRE DA DERROTA
Perante o crescente interesse pelo assunto, voc� foi convidado a escrever um programa que leia uma palavra ou frase qualquer e
verifique se forma um pal�ndromo, caso formar deve exibir uma mensagem, caso n�o formar deve exibir uma mensagem com tal informa��o.
OBS: os dados de entrada poder�o ser escritos com espa�os entre os caracteres ou palavras e letras mai�sculas e min�sculas. Utilize
aritm�tica de ponteiro para resolver este exerc�cio.*/

void leitura(char *p1, char *p2);
void verifica(char pont1[100], char pont2[100]);

main(){

    setlocale(LC_ALL, "Portuguese");
    char t1[100], t2[100], *ptexto1, *ptexto2;
    ptexto1 = t1;
    ptexto2 = t2;
    leitura(ptexto1, ptexto2);
    verifica(t1, t2);
}

void leitura(char *p1, char *p2){
    int i = 0;
    char txt[100], *ptxt;
    ptxt = txt;
    cout << "Digite alguma coisa para saber se � pal�ndromo: ";
    gets(txt);
    while(i <= strlen(txt)){
        if(!(isspace(*ptxt))){
            *p1 = toupper(*ptxt);
            *p2 = toupper(*ptxt);
            p1++;
            p2++;
        }
        ptxt++;
        i++;
    }
    p1 -= i;
    p2 -= i;
}

void verifica(char pont1[100], char pont2[100]){
    int i = 0;
    reverse(pont2, pont2+strlen(pont2));
    if((!strcmp(pont1, pont2))){
        cout<<"\n � um pal�ndromo!"<<endl;
    }else{
        cout<<"\n N�o � um pal�ndromo!"<<endl;
    }
    cout<<"\n NORMAL: "<<pont1<<endl;
    cout<<" INVERSO: "<<pont2<<endl;
}
