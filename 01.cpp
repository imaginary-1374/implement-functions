#include <iostream>
#include <string>
#include <vector>
using namespace std;

string rep(string tex, int n = 2, string sep = "", bool end = false )
{
string result;

for (int i = 0; i < n; ++i)
{
    result += tex ;
    if (i < n-1)
    {
            result += sep ;
    }   
}
    if (end)
    {
            result += sep ;
       
    }
 

    return result;
}

int main()
{

 cout << rep("ZYDOM", 3, "#\n", true);

    return 0;
}