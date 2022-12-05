#include  <iostream>
#include <cmath>

using namespace std;

void Nhap( int &x,int&y,int&z,int&c )
{
  cout << " nhap vao vector thu nhat a(x,y)=" ;
  cin >> x >> y;
  cout << " nhap vao vector thu hai a2(x,y)=";
  cin >> z >> c;
}

void Tong(int& x,int& y, int& z,int& c)
{
  int a = z +x;
  int b = c+y;
  cout << " Tong 2 vector= (" <<a << "," <<")" <<endl;
}

void Tich( int &x,int& y,int& z, int& c )
{
   cout <<" Tich vo huong 2 vector= "<< sqrt(x*z) + sqrt(y*c);
}
int main()
{
  int n;
  float x; float y; float z; float c;
  cout << " Nhap vao 2 vector "<< endl;
  Nhap(x,y,z,c);
  Tong(x,y,z,c);
  Tich(x,y,z,c);
}
