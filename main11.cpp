#include <iostream>
using namespace std;
 
const char CHAR_55 = 55;
const char CHAR_48 = 48;
 
int convertNumber(int n, int b) {
    if (n < 0 || b < 2 || b > 16 ) {
        cout<<"He co so hoac gia tri chuyen doi khong hop le!";
        return 0;
    }
    int i;
    char arr[20];
    int count = 0;
    int m;
    int remainder = n;
    while (remainder > 0) {
        if (b > 10) {
            m = remainder % b;
            if (m >= 10) {
                arr[count] = (char) (m + CHAR_55);
                count++;
            } else {
                arr[count] = (char) (m + CHAR_48);
                count++;
            }
        } else {
            arr[count] = (char) ((remainder % b) + CHAR_48);
            count++;
        }
        remainder = remainder / b;
    }
    // hien thi he co so
    for (i = count - 1; i >= 0; i--) {
        cout<< arr[i];
    }
    return 1;
}
 
int main() {
    int n;
    cout << " nhap n:";
    cin >> n;
    cout <<"So trong he co so 2 = ";
    convertNumber(n, 2);
    cout <<"\nSo trong he co so 16 = ";
 convertNumber(n, 16);
    return 1;
}
