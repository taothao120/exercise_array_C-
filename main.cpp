

//1.	Viết chương trình nhập vào dãy số với n phần tử, sau đó xuất ra màn hình.
//Bài giải
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

void Nhap(int a[100], int &n)
{
  for ( int i = 0; i < n;i++ )
  {
    cout << "a["<< i<<"]= " ;
    cin >> a[i]; cout << endl;
  }
}

void Xuat( int a[100], int n )
{
  for ( int i =0; i< n;i++ )
  {
    cout << a[i] << " " ;
  }
}

int main()
{
  int a[100];
  int n;
  cout << "Nhap vao so phan tu:";
  cin >> n;
  cout << "Nhap vao day so:";
  Nhap(a,n);
  cout <<" Day so sau khi nhap la:";
  Xuat(a,n);

  system("pause");
  return 0;
}
