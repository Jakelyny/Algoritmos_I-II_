#include<iostream>
#include<math.h>
using namespace std;
main ()
{
    int count1=7, count2=3, trabY=5, varX=5;
    while(count1<10)
    {
        varX=varX+5;   //10,15
        cout<<"\n varX :"<<varX;
        count1=count1+2; //9,11
        cout<<"\n cout1: "<<count1;
        while(count2<10)
        {
            trabY=trabY+2; //7,9,11,13
            cout<<"\n\t trabY :"<<trabY;
            count2=count2+2; //5,7,9,11
            cout<<"\n\t cout2 : "<<count2;
        }
    }
    cout<<"\n traby: "<<trabY<<" \n varX: "<<varX;
}
