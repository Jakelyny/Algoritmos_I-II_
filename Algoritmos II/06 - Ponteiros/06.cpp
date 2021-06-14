#include<iostream>
using namespace std;

void soma();

main(){
    soma();
}

void soma()
{
    int  j = 3,  *pj,  s = 0;
    pj = &j;
    s += *pj;
    cout<<s;
}
