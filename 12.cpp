#include <iostream>
using namespace std;

string clean_string(string st, bool inc_nums = false) {

string res;
 // كنت عاملها لوب عادية مش رينج لوب لحد ما شفت الفيديو
    for (char c : st) {
        
        if(inc_nums){

        if ( c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9'){
            
            res += c;}}

         else if (!inc_nums) {

            if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
                
                res += c;}}
         }

 return res;   
}
int main(){

cout << clean_string("abc#^$%@dE&f@*G1234",true);
return 0;
}