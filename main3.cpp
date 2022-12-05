
#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void Nhap(int x[100], int n);
void Xuat(int x[100], int n);
void DaoMang(int x[100], int n);

 int main()
 { int n;
       int a[100];
       cout << "Nhap vao day so ";
       cin >> n;
       Nhap(a,n);
       printf("Day so sau khi nhap");
       Xuat(a,n);
       cout<<"\n";
       printf("Mang sau khi dao");
       DaoMang(a,n);
       Xuat(a,n);
       return 0;
       }
void Nhap(int x[100], int n)
{
 int i;
 for(i=0; i<n; i++)
 {
  cout <<("x=",i);
  cin >> x[i];        
 }
}
 void Xuat(int x[100], int n)
 {int i;
      for(i=0; i<n;i++) cout << x[i];
  }
  void DaoMang(int x[100], int n)
  { int tam,i;
    for(i=0; i<n/2;i++)
     {tam =x[i];
      x[i]=x[n-i-1];
      x[n-i-1]=tam;
            }
      }       
