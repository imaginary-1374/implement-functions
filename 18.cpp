#include <iostream>
#include <vector>
using namespace std;

string join_element(vector <string> st, const string& sep = " "){

    string res;

    for (int i = 0; i < st.size(); ++i)

    {
        if (i ==0)  {res += st[i];}

        else    {res += sep + st[i];}
    }
    
 return res;
}

string split( const string& st, const char& split_ponit = '_', const string& sep = ", "){

string res = "{ ";

    for (int i = 0; i < st.length(); ++i)
    {
        if (st[i] == split_ponit)
        {
            res += sep;
            continue;
        }
        
       res += st[i];
    }

    res += " }";
    
 return res;
}

int main(){

cout << split("Zydom web school", ' ') << endl;

cout << join_element({ "Zydom", "Web", "school" }, " | ") << endl;

return 0;

}