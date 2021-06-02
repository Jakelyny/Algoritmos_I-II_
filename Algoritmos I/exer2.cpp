#include<iostream>
using namespace std;

int contas[10];
float saldos[10];

void deposito(int codigo, int valor){
    int conta = 0;
    for(int c = 0; c < 10; c++){
        if(codigo == contas[c]){
            saldos[c] += valor;
            conta = 1;
            cout<<"Depósito efetuado.\n";
        }
    }
    if(conta == 0){
        cout<<"Conta não encontrada.\n";
    }
}

void saque(int codigo, int valor){
    int conta = 0;
    for(int c = 0; c < 10; c++){
        if(codigo == contas[c]){
            if(valor > saldos[c]){
                cout<<"Saldo insuficiente.\n";
                conta = 1;
                break;
            }
            saldos[c] -= valor;
            conta = 1;
            cout<<"Saque efetuado.\n";
        }
    }
    if(conta == 0){
        cout<<"Conta não encontrada.\n";
    }
}

void ativoBancario(int codigo, int valor){
    int total = 0;
    for(int c = 0; c < 10; c++){
        total += saldos[c];
    }
    cout<<"\n\nValor do ativo bancário de R$"<<total;
}

main(){

    setlocale (LC_ALL,"portuguese");

    for(int c = 0; c <10; c++){
        cout<<"Digite o número da conta bancária: ";
        cin>>contas[c];
        for(int e = 0; e < c; e++){
            if(contas[c] == contas[e]){
                cout<<"Essa conta já existe, tente de novo.\n";
                c--;
                break;
            }
        }
    }
    for(int c = 0; c < 10; c++){
        cout<<"Digite o saldo da conta "<<contas[c]<<": R$";
        cin>>saldos[c];
    }
    int opcao=0;
    while(opcao != 4){
        int codigo, valor;
        cout<<"\n\n ---------- MENU ---------- ";
        cout<<"\n1. Efetuar depósito";
        cout<<"\n2. Efetuar saque";
        cout<<"\n3. Consultar ativo bancário";
        cout<<"\n4. Finalizar o programa\n -------------------------- \n";
        cout<<"Para prosseguir selecione uma das opções: ";
        cin>>opcao;
        switch(opcao){
        case 1:
            cout<<"\n\nDigite o código da conta que deseja realizar o depósito: ";
            cin>>codigo;
            cout<<"Agora o valor do depósito: R$";
            cin>>valor;
            deposito(codigo, valor);
            break;
        case 2:
            cout<<"\n\nDigite o código da conta para efetuar o saque: ";
            cin>>codigo;
            cout<<"Agora o valor de saque: R$";
            cin>>valor;
            saque(codigo, valor);
            break;
        case 3:
            for (int c = 0; c < 10; c++){
            cout<<"\nConta "<<contas[c]<<"\nSaldo: R$"<<saldos[c];
            }
            ativoBancario(codigo, valor);
            break;
        case 4:
            cout<<"\nPrograma finalizado, volte sempre.\n";
            break;
        }
    }
    cout<<"\n\n";
}





