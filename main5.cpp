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
  for ( int i = 1; i <n; i++ )
  {
      if ( max < a[i][i] ) max = a[i][i]; 
  }
  cout << " MAx cua duong cheo= "<< max<< endl;

  
  return 0;
}
