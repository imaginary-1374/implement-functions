#include <iostream>
#include <string>
using namespace std;
// code didn't include reverse or step till watched the video
string substring(const string& st, const int& start, int end, const int& step = 1, bool inc_end=true,bool count_space = false, bool rev = false){


string res;
string temp;

for (int j = start; inc_end? j<=end : j<end; j += step) {
    
    if (!count_space&&st[j]==' '){++end;}
    if (rev)
    {
        res = st[j] + res;
        continue;
    }
    

     res += st[j]; }

// if (rev) {
// for (int i = res.length()-1;; --i)
// {
//      temp += res[i];
// if(i == 0){return temp;}
// }
// }



return res;

}
int main(){

   cout << substring("zydom web school",0,9,1,true,true,true); //اوعى الكرييتف ابداع في اختيار ال سترينج
   // substring();
   // substring();

    return 0;
}
