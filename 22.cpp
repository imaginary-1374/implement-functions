#include <iostream>
using namespace std;

bool start(string st, string check, char sep = ' ', bool identical = false){

if (check.length() > st.length())   {return false;}
if (!identical) {
    for (int i = 0; i < check.length(); ++i) {
            if (check[i] >= 'a' && check[i] <= 'z') {check[i] -= 32;}
            if (st[i] >= 'a' && st[i] <= 'z') {st[i] -= 32;}
    }}

for (int i = 0; i < check.length(); ++i) {if (st[i] != check[i]) {return false;}}

if (check.length() < st.length() && st[check.length()] != sep) {return false;}

return true;
}
int main(){
    cout << boolalpha;
    cout << start("ZydoM WEB SCHOOL","zydom",' ',true)  << endl; 
    cout << start("Zydom WEB SCHOOL","ZYDOM",' ',true) << endl; 
    cout << start("ZyDoM WEB SCHOOL","zYdOm",' ',false) << endl; 
    cout << start("zydoM WEB SCHOOL","zydom",' ',false)<< endl;
    return 0;}
// الكود كان واصل 50 سطر و كنت عامل فلاج و حاجات كتير جدا بس لما خلصته لقيت مكلكع ففضلت اظبط فيه و ضيعت وقت اكتر من وقت كتابة الكود
// فلو كا فيه حاجات مكلكعة في التكليفات اللي قبل كدة اسف 
// بهزر اولع