#include <iostream> 
#include <iomanip>
using namespace std;
 
int main() {
   int even[5] = {0, 2, 4, 6, 8};
   int odd[6]  = {1, 3, 5, 7, 9, 11};
    
   int i, index;
   int eSize = 5;
   int oSize = 6;
    
   // khoi tao mang moi
   int arr[eSize + oSize];
    
   index = 0;
  
   // them mang even vao mang arr
   for(i = 0; i < eSize; i++) {
      arr[index] = even[i];
      index++;
   }
   // them mang odd vao mang arr 
   for(i = 0; i < oSize; i++) {
      arr[index] = odd[i];
      index++;
   }
 
   cout << "Tron hai mang thanh mot mang:\n";
   cout << "\nMang a: ";
   for(i = 0; i < eSize; i++)
      cout << even[i] << " ";
 
   cout << "\nMang b: ";
   for(i = 0; i < oSize; i++)
      cout << odd[i] << " ";
 
   cout << "\nMang sau khi tron: ";
   for(i = 0; i < 10; i++)
      cout << arr[i] << " ";
   cout << endl;
   
   for(int i=0;i<9;i++)
        for(int j=i;j<10;j++){
            if(arr[i]>arr[j]){
                swap(arr[i], arr[j]);
            }
        }
   cout << " mang sap xep :";
  for ( int i = 0; i < 10 ; i++ )
  {
     cout << arr[i];
  }
   return 0;
}
