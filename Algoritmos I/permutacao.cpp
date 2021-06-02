#include <iostream>
#include <cmath>

using namespace std;

#define MAX 100

void le_vetor(int n, int v[])
{
   int i;

   i = 0;
   while (i < n)
   {
      cin >> v[i];
      i = i + 1;
   }
}

void escreve_vetor(int n, int v[])
{
   int i;

   i = 0;
   while (i < n)
   {
      cout << v[i] << " ";
      i = i + 1;
   }
   cout << endl;
}

int permutacao(int na, int A[], int nb, int B[])
{
   int ia, ib, i;
   int AUX[MAX];

   if (na != nb)
      return 0;

   i = 0;
   while (i < na)
   {
      AUX[i] = -1;
      i = i + 1;
   }   

   ia = 0;
   while (ia < na)
   {
      // testar se A[ia] esta em B
      ib = 0;
      while ((ib < nb) and ((A[ia] != B[ib]) or (AUX[ib] != -1)))
      {        
         ib = ib + 1;
      }
      if (ib >= nb)
         return 0;
      AUX[ib] = ia;
      ia = ia + 1;
   }
   escreve_vetor(na,AUX);

   ib = 0;
   while (ib < nb)
   {
      cout << A[AUX[ib]] << " "; 
      ib = ib + 1;
   }
   cout << endl;


   return 1;
}

int main()
{
   int tamA, tamB;
   int A[MAX], B[MAX];

   cin >> tamA;
   le_vetor(tamA,A);
   cin >> tamB;
   le_vetor(tamB,B);

   escreve_vetor(tamA,A);
   escreve_vetor(tamB,B);

   if (permutacao(tamA,A,tamB,B))
      cout << "Permutacao" << endl;
   else
      cout << "Nao e permutacao" << endl;
   return 0;
}

