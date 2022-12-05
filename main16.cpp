#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void month_name(int &n) 
{
switch(n)
   {
        case 1:
           cout << "   January - thang 1";
           break;
        case 2:
           cout << "   February - thang 2";
           break;
        case 3:
           cout << "   March - thang 3";
           break;
        case 4:
           cout << "   April - thang 4";
           break;
        case 5:
           cout << "   May - thang 5";
           break;
        case 6:
           cout << "   June - thang 6";
           break;
        case 7:
           cout << "   July - thang 7";
           break;
        case 8:
           cout << "   August - thang 8";
           break;
        case 9:
           cout << "   September - thang 9";
           break;
        case 10:
           cout << "   October - thang 10";
           break;
        case 11:
           cout << "   November - thang 11";
           break;
        case 12:
           cout << "   December - thang 12";
           break;
        default:
           cout << "   Thang vua nhap khong hop le";
           break;
    }
}

int main()
{
 
   int thang;
   cout << "Nhap thang bang so: ";
   cin >> thang;
   month_name(thang);
   return 0;
}
