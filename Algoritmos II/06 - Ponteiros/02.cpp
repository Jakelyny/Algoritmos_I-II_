#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
main()
{

    int *pnum, num=8;
    pnum = &num;


    cout<<" valor: num  = "<<num<<endl;
    cout<<" valor: pnum  = "<<pnum<<endl;
    cout<<" valor: *pnum  = "<<*pnum<<endl;
    cout<<" valor: &pnum  = "<<&pnum<<endl;
    cout<<" valor: &num  = "<<&num<<endl;

    if(num == *pnum){
        cout<<"\n\ntrue"<<endl;
    }else{
        cout<<"\nfalse"<<endl;
    }
    if(pnum == &num){
        cout<<"\n\ntrue"<<endl;
    }else{
        cout<<"\nfalse"<<endl;
    }
}

