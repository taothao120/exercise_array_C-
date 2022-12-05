

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
  int b = 0;
  for ( int i = 0; i <n; i++ )
  { 
    for ( int j = 0; j < n; j++ )
      if ( a[i][j] != a[j][i] ) 
      {
        b = 1;
        break;
      }
  }

  if ( b == 1  ) cout << " khong doi xung";
  else cout << "doi xung";

  //cout << " MAx cua ma tran= "<< max<< endl;

  
  return 0;
}
