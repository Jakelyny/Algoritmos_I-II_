#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;

main(){
    int *pv;
    int v = 10;
    pv = &v;

    cout<<" v :"<<v<<endl;
    cout<<" &v :"<<&v<<endl;
    cout<<" pv :"<<pv<<endl;
    cout<<" *pv :"<<*pv<<endl;
    cout<<" &pv :"<<&pv<<endl;

    cout<<" (*pv + 10) / 2   ="<<(*pv + 10) / 2<<endl;
}
