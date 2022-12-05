#include<iostream>

#include<string.h>
using namespace std;

int XoaCH(char s[],char ch[]) {

            int i,j;

            if(ch[0] >='a' && ch[0] <= 'z')

            {

                        for(i=0; i<strlen(s); i++) {

                                    if(s[i] == ch[0] || s[i] == ch[0] - 32) {

                                                for(j=i;j<strlen(s);j++)

                                                            s[j] = s[j+1];

                                    }

                        }

            }

            if(ch[0] >='A' && ch[0] <= 'Z')

            {

                        for(i=0; i<strlen(s); i++) {

                                    if(s[i] == ch[0] || s[i] == ch[0] + 32) {

                                                for(j=i;j<strlen(s);j++)

                                                            s[j] = s[j+1];

                                    }

                        }

            }

            puts(s);

}

int main() {

            char s[100],ch[2];

            cout <<"Nhap chuoi ban dau: ";

            gets(s);

            fflush(stdin);

            cout <<"Nhap ky tu ch: ";

            gets(ch);

            XoaCH(s,ch);

            return 0;

}
