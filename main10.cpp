#include <iostream>
#include <string.h>

using namespace std;
void chuhoa(char *s){s[0]=toupper(s[0]);for(int i=1;i<strlen(s);i++)//chua tim dc cach nao toiuu hon
  if(s[i]==' '){s[i+1]=toupper(s[i+1]);i++;}
  else{if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;}
  puts(s);
}

int main(){
    char S[300];

    cout <<"Nhap vao chuoi Input: ";
    fflush(stdin);
    fgets(S, 300, stdin);

    printf("Output: ");
    chuhoa(S);
    cout << S;
    return 0;
}
