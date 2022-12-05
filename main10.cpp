#include <iostream>
#include<cstring>

using namespace std;

int main()
{
  int x,n, a[100];
  cout <<"Nhap vao so luong phan tu";
  cin >> n;
  for ( int i = 0; i< n ; i++ )
  {
    cout << "Nhap phan tu A[" << i <<"]= ";
    cin >> a[i];
  }
  cout <<" Nhap phan tu trong mang can xoa ";
  cin >> x;
  for ( int i = 0; i < n; i++ )
  {
    if ( x == a[i] ){
      a[i] = a[i+1];
      n--;
    }
  }

  for ( int i = 0; i < n;i++ )
    cout << a[i];

  return 0;
}
