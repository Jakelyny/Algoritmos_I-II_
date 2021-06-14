#include <iostream>
using namespace std;
int *p, a;
main()
{
    p = &a;
    cout << "Digite um valor para A: ";
    cin >> a;
    fflush(stdin);
    *p = 3 * *p;
    a += *p + 2;
    cout << *p << endl;
    getchar();
}
