#include <iostream>
using namespace std;

int main() {
  char ch;
  cin>>ch;
  int y = (int)ch;
  if(y>=65 && y<=90 || y>=97 && y<=122){
      cout<<"the character is an alphabet";
  }
  else{
      cout<<"the character is NOT an alphabet";
  }

return 0;
}
