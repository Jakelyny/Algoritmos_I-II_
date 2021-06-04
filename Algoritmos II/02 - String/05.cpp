#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<ctype.h>
using namespace std;

/*Escreva um programa que leia 3 strings quaisquer em seguida verifique, em relação ao
número de caracteres, qual é a maior string, a menor string e a do meio, apresente as
string em ordem crescente em relação ao número de caracteres que possuem e com todos os
 caracteres em maiúsculo.*/

int main(){

    setlocale(LC_ALL, "Portuguese");
    string primeira, segunda, terceira;

    cout<<" Descubra qual é a maior palavra ou frase!\n  Digite a primeira: ";
    getline(cin, primeira);
    cout<<"  Digite a segunda: ";
    getline(cin, segunda);
    cout<<"  Digite a terceira: ";
    getline(cin, terceira);
    cout<<"\n\n---------------------------------------------\n";
    for(int i = 0; i < primeira.size(); i++)
    {
        primeira[i] = toupper(primeira[i]);
    }
    for(int i = 0; i < segunda.size(); i++)
    {
        segunda[i] = toupper(segunda[i]);
    }
    for(int i = 0; i < terceira.size(); i++)
    {
        terceira[i] = toupper(terceira[i]);
    }

    if((primeira.size() > segunda.size()) && (primeira.size() > terceira.size())){
        if(segunda.size() > terceira.size()){
            cout<<"  O maior: "<<primeira<<endl;
            cout<<"  O do meio: "<<segunda<<endl;
            cout<<"  O menor: "<<terceira<<endl;
        }else{
            cout<<"  O maior: "<<primeira<<endl;
            cout<<"  O do meio: "<<terceira<<endl;
            cout<<"  O menor: "<<segunda<<endl;
        }
    }
    if((segunda.size() > primeira.size()) && (segunda.size() > terceira.size())){
        if(primeira.size() > terceira.size()){
            cout<<"  O maior: "<<segunda<<endl;
            cout<<"  O do meio: "<<primeira<<endl;
            cout<<"  O menor: "<<terceira<<endl;
        }else{
            cout<<"  O maior: "<<segunda<<endl;
            cout<<"  O do meio: "<<terceira<<endl;
            cout<<"  O menor: "<<primeira<<endl;
        }
    }
    if((terceira.size() > primeira.size()) && (terceira.size() > segunda.size())){
        if(primeira.size() > segunda.size()){
            cout<<"  O maior: "<<terceira<<endl;
            cout<<"  O do meio: "<<primeira<<endl;
            cout<<"  O menor: "<<segunda<<endl;
        }else{
            cout<<"  O maior: "<<terceira<<endl;
            cout<<"  O do meio: "<<segunda<<endl;
            cout<<"  O menor: "<<primeira<<endl;
        }
    }
    cout<<"---------------------------------------------\n\n";

    getchar();
    return 0;
}
