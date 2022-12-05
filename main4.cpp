#include <iostream>
using namespace std;
 
void intput(int n, int m, int a[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
void output(int n, int m, int a[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            cout<<a[i][j]<<"   ";
        }
        printf("\n");
    }
}
 
void Sort(int n, int m, int a[][100]){
     
    int i, j, k;
    for(i = 0;i<m;i++){
        for(j = 0; j<n; j++){
            for(k = j+1; k<n; k++){
                if(a[j][i] < a[k][i]){
                    int temp = a[j][i];
                    a[j][i] = a[k][i];
                    a[k][i] = temp;
                }
            }
        }
    }
     
    output(n,m,a);
}
 
 
 
int main()
{
    int n, m;
    cout<<"Nhap n, m lan luot: ";
    cin>>n>>m;
     
    int a[100][100];
 
    //Nhap mang
    cout<<"\n------Nhap mang-----\n";
    intput(n,m,a);
    cout<<"\n------xuat mang-----\n";
    output(n,m,a);
    cout<<"\n------Mang giam dan-----\n";
    Sort(n,m,a);
     
}
