

#include <iostream>
#include<cstring>

using namespace std;

int main()
{
  int a[2]= {2,5} ;
  int b[3]= {1,4,5} ;
  int index=1;
  int  c[6];
  for ( int i = 1; i <=2; i++ )
  {
    c[i] = a[i];
    index++;
  }
  for (int i =1; i <= 3; i++)
  {
    c[index]= b[i];
    index++;
  }

  for ( int i =1; i < 6;i++ )
  {
     cout << c[i];
  }
  
 int tg;
    for(int i = 0; i <  5; i++){
        for(int j = i + 1; j < 6; j++){
            if(c[i] > c[j]){
                // Hoan vi 2 so a[i] va a[j]
                tg = c[i];
                c[i] = c[j];
                c[j] = tg;        
            }
        }
    }
  
  for ( int i = 0; i <= 5; i++ )
    cout << c[i];
  return 0;
}
