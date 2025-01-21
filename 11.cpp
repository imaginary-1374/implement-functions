#include <iostream>
#include <string>
using namespace std;

string substring(const string& st,int start,int end,bool inc_end=true,bool count_space = false){


string res;

for (int j = start; inc_end? j<=end : j<end; ++j) {
    
    if (!count_space&&st[j]==' '){++end;}
    

     res += st[j]; }


return res;

}
int main(){

   cout << substring("zydom web school",0,9,true,true); //اوعى الكرييتف ابداع في اختيار ال سترينج
   // substring();
   // substring();

    return 0;
}