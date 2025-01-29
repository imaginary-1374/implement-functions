#include <iostream>
#include <string>
using namespace std;

//100 ==> 100
//1000 ==> 1,000
//1000 ==> 10,000
//100000 ==> 100,000
//1000000 ==>1,000,000

string int_To_String(int num){

    string str;
    bool isNegative = false;

    if (num < 0) {
        isNegative = true;
        num = -num;
    }
    do {
        char digit = '0' + (num % 10);   // 1234 % 10 ==> 4
        str = digit + str;
        num /= 10;                       // 1234 / 10 ==> 123
    } while (num > 0);
    if (isNegative) {
        str = '-' + str;
    }
    return str;
}
string money(int n){

string st = int_To_String(n);
string res;
int count =0;

// for (int i = 0; i = INT_MAX; ++i)
// {
//     if ( n > 0)
//     {++count;}
//     else
//     {break;}
//     n/=10;
// }
for (int i = st.length()-1; i >= 0; --i)
{
    res= st[i] + res;
    count ++;
    if (count == 3 && i !=0) // count % 3 ==0 || count ==3
    {
        res = ","+ res;
        count =0;           // X(count =0;)   || count =0;
    }
    
}


// for (int i = 0; i < st.length(); i++)
// {
//     --count;
//     res+=st[i];
//     if (count%3==0)
//     {
//         if (i == st.length()-1)
//         {
//             break;
//         }
        
//         res += ",";
//     }
// }

return res;
}

int main(){

cout << money(100)<< endl;
cout << money(1000)<< endl;
cout << money(10000)<< endl;
cout << money(100000)<< endl;
cout << money(1000000)<< endl;
cout << money(10000000)<< endl;
cout << money(100000000)<< endl;
cout << money(1000000000)<< endl;

    return 0;
}