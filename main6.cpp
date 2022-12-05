#include "iostream"
#include "conio.h"
#include "string.h"
using namespace std;
int main()
{
    int i,flag=1;
    char str[100];
    printf("nhap chuoi : ");
    gets(str);
    for(i=0;i<=strlen(str)/2;i++)
        if (str[i]!=str[strlen(str)-i-1]) {flag=0;break;}
    if (flag) cout<<"palind";
    else cout<<"not";
    getch();
} 
