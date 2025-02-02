#include <iostream>
#include <vector>
using namespace std;
/*
replace string in vector
{"Osama", "Ali", "Zyd", "Ali"} -> "Ali"=> ZYDOM
*/
vector <string> replace(vector <string> st, const string& old, const string& nw, int count = 1){

for (int i = 0; count !=0; ++i)
{
    if (st.at(i) == old)  
    {
    st.at(i) = nw;
    --count;
    }
    if (i == st.size()-1)
    {
        count =0;           //to break if user set a large count.
    }
    
}
return st;
}

int main(){

 vector <string> vec =  replace({"Osama", "Ali", "Zyd", "Ali"}, "Ali", "ZYDOM", 3);

 for (string s : vec)
    {cout << s << endl;}
    return 0;
}