#include <iostream>
using namespace std;

/*
string parse_string(const string& st){ 

string temp1;
string temp2;
string temp3;

    for (char c : st) {

        temp1 += c;

        if (c == ' ')       {break;}
        
    }
 for (int i = temp1.length(); i < st.length(); ++i) {

    temp2 += st[i]; 

    if (st[i] == ' ')   {break;}}

    for (int j = (temp1.length() + temp2.length()); j < st.length(); ++j) {temp3+= st[j];}
 
    cout <<  "name: "  << temp1 << endl;
    cout <<  "age: "   << temp2 << endl;
    cout <<  "email: " << temp3 << endl;

    return temp1,temp2,temp3;
}
*/

string parse_string(const string& st){

string res;

for (int i = 0; i < st.length(); ++i) {

    if (st[i] == '=') {
        res+= ": ";
        continue;}
    
    if (st[i] == '&') {
        res+= "\n";
        continue;}
    
    res+=st[i];

    //"name=zydom&age=25&email=zydom@example.com&country=egypt"
    //name: zydom\nage: 25\nemail: zydom@example.com\ncountry: egypt
}





return res;

}

int main (){ cout << parse_string("name=zydom&age=25&email=zydom@example.com&country=egypt"); }
