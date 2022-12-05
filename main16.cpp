
#include <iostream>
#include <conio.h>
#define MAX  1000

using namespace std;

int main()
{
int A[2000];
 int i,j;
  for (i = 0; i <= MAX; i++) A[i] = 1;
   for (i = 2; i <= MAX/2; i++)
   for ( j= 2; j <= MAX/i; j++)
     A[i*j] = 0;
  for (i = 2; i < MAX; i++) if (A[i]) cout << i;
 
  getch();
}
