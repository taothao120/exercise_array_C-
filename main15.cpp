

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  int a[100][100];
  int n;
  int max = a[0][0];
  cout << "Ban muon nhap ma tran cap may?" ;
  cin >> n;
  cout << " Hay nhap vao so hang cua ma tran";
  for ( int i = 0; i <n; i++ )
  {
    for ( int j = 0; j < n; j++ )
    {
       cout << "A["<< i<<"][" <<j <<"]= ";
       cin >> a[i][j];
    }
  }
  int c;
  cout <<"Nhap cot can xoa: ";
  cin >> c;
  for ( int i = 0; i <n; i++ )
  {
    for ( int j = c; j < n-1; j++ )
      a[i][j] = a[i][j+1];
      
     
  }
  n--;
  //cout << " MAx cua ma tran= "<< max<< endl;
    for ( int i = 0; i <n+1; i++ )
  {
    for ( int j = 0; j < n; j++ )
    {
      // cout << "A["<< i<<"][" <<j <<"]= ";
       cout<< a[i][j];
    }
  }
  
  return 0;
}

