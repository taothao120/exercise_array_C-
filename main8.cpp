
#include <iostream>
#include <cstring>
using namespace std;

char* delete_space(char *str,char *result) {
  int pos = 0;
 
  const int len = strlen(str); /*Tìm độ dài chuỗi ban đầu*/
  for(int i = 0; i < len; i++) {
      char chr = str[i];

      /*Nếu ký tự lấy ra là ký tự trắng thì bỏ qua*/
      if (chr == '\r' || chr == '\n' || chr == ' ') {
        continue;
      }

      /*Thêm ký tự lấy ra vào kết quả*/
      result[pos++] = chr;
  }
  return result;
}

int main() {
    char str[] = "   Hello World     "; 
    cout << "before: ["<< str<<"]\n";
    char result[100];
    cout << "after : ["<< delete_space(str,result)<<"]\n";
}

