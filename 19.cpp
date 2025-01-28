#include <iostream>
#include <vector>
using namespace std;

vector<string> fill_vec( const string& st, const int& num){

vector <string> res (num);

for (int i = 0; i < num; ++i)
{
    res[i] = st;
}

 return res;
}

int main(){

vector <string> names = fill_vec("ZYDOM", 5);

for (int i = 0; i < names.size(); ++i)
{   
    cout << names[i] << endl;
}


    return 0;
}