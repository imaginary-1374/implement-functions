#include <iostream>
#include <vector>
using namespace std;



vector <string> push(vector <string> st, vector <string> add){

// used vectors to add strings as we want not jst 1.

int n = add.size();

vector <string> temp (st.size()+n);

for (int i = 0; i < st.size(); ++i)
{
    temp.at(i)= st.at(i);
}
for (int i = 0; i < n; ++i)
{
        temp.at(i+st.size()) = add.at(i) ;
}


return temp;
}
int main(){

vector<string> test = push({"Zydom","Web"},{"School","of","the","wolf"});

for (string word : test)
{
    cout << word << endl;
}

    return 0;
}