#include <iostream>
using namespace std;

bool is_NAN(const string& st){
  int result = 0;
  for (char c : st) {
   if(c < '0' || c > '9'){ return true;}
}
    return false;
}

int main(){

cout << is_NAN ("a");

    return 0;
}