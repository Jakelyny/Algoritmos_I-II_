#include <iostream>
#include <ctime>
using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");
    int quant;
    double soma = 0.0;

    cout<<" Defina o n�mero de alunos: ";
    cin>>quant;
    cout<<"_______________________________\n";

    double *vet = new double[quant];
    for(int i = 0; i < quant; i++){
        cout<<"Digite a nota do "<<i+1<<"� aluno: ";
        cin>>vet[i];
        soma += vet[i];
    }
    cout<<"\n-------- NOTAS ---------\n";
    for(int i = 0; i < quant; i++){
        cout<<i+1<<"� aluno: "<<vet[i]<<endl;
    }
    delete[] vet;
    cout<<"------------------------\n";
    cout<<" M�dia: "<<soma/quant<<endl;
}

