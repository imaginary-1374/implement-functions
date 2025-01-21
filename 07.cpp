#include <iostream>
using namespace std;

string swap_words(const string& word) {

  string res;

 for (char l : word)
 {
    (l >='a' && l <= 'z')? l-=32 : l+=32;
       res+=l;
 }
 return res;
}
 int main()
 {

 string st = "zYDOm";

 cout << swap_words(st);

    return 0;
 }