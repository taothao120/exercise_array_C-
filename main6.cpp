
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
  for ( int i = 0; i <n; i++ )
  { 
    for ( int j = 0; j < n; j++ )
      if ( max < a[i][j] ) max = a[i][j]; 
  }
  cout << " MAx cua ma tran= "<< max<< endl;

  
  return 0;
}
