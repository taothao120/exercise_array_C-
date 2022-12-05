#include <iostream>
#include<string.h>

using namespace std;

int main()
{
  char str[25];
  int i;
  cout << " nhap vao chuoi:";
  cin >> str;
  char a;
  for ( int i = 0; i< int(strlen(str)-1);i++ )
  {
     for (int j= 1; j< int(strlen(str));j++)
     {
       if ( str[i] > str[j] )
       {
         a = str[i];
         str[i] = str[j];
         str[j] =a;
       }
     }
  }
  int dem = 0;
  for (int i = 0 ; i < int(strlen(str)); i++)
  {
    if ( str[i] != str[i+1] )
    {
     dem++;
    }
  }
  
  cout << dem;
  return 0;
}

