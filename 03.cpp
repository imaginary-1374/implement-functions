#include <iostream>
#include <string>

using namespace std;

string reverse(string st)   {

string temp;

for (int i = 0; i < st.size(); ++i)  {

    temp += st.at(st.size() - 1 - i);
}

    return temp;
}

int main()  {
   
    cout << reverse("ABC DEF");

    return 0;
}
