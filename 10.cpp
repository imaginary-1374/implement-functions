#include <iostream>
#include <string>
using namespace std;

string trim(string st, const string &trimming = "all", char ch = ' ') {
    
    
    int start = 0 ;

    while (start< st.length() && st[start] == ch )  {start++;}

    int end = st.length()-1 ;

    while (end >= 0 && st[end] == ch )  {end--;}

/*==========================================================================*/

if (trimming == "left") {

    string res;
    
    for (int i = start; i < st.length(); ++i)   {res += st[i];}

    cout << res;}
    
/*==========================================================================*/

else if (trimming == "right") {

    string res;

    for (int i = 0; i <= end ; ++i)   {res += st[i];}
    
    cout << res;}

/*==========================================================================*/

else if (trimming == "all") {

    string res;
    
    for (int i = start; i <= end; ++i)   {res += st[i];}

    cout << res;}
    
/*==========================================================================*/



    return "\nT-T\n";}


int main() {
    cout << trim("###zydom##", "right", '#') << endl;
    cout << trim("###zydom####", "left", '#') << endl;
    cout << trim("######zydom###", "all", '#') << endl;
    return 0;
}
