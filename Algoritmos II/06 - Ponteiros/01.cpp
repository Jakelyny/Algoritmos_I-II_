#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
main()
{

    int i=3, j=5;
    int *p, *q;
    p = &i;
    q = &j;

    cout<<" valor: p  = "<<p<<endl;
    cout<<" valor: *p  = "<<*p<<endl;
    cout<<" valor: q  = "<<q<<endl;
    cout<<" valor: *q  = "<<*q<<endl;
    cout<<" valor: *i  = "<<i<<endl;
    cout<<" valor: *j  = "<<j<<endl;
    cout<<" valor: &i  = "<<&i<<endl;
    cout<<" valor: &j  = "<<&j<<endl;
    cout<<"\n\n *p - *q : "<<*p-*q<<endl;
    cout<<"\n\n **&p: "<<**&p<<endl;
    cout<<"\n\n 3 * - ((*q + 7) / *p): "<<3 * - ((*q + 7) / *p)<<endl;

    if(p == &i){
        cout<<"\n\ntrue"<<endl;
    }else{
        cout<<"\nfalse"<<endl;
    }
}
