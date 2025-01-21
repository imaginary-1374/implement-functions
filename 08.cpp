#include <iostream>
using namespace std;

string parse_integer(const string& st ){
string digits;
 if (st.empty()) {cout << "ERROR 404 : st\nstring not found\n";
 return digits;
 }
  for (char c : st) {
   if(c >= '0' && c <= '9'){ digits += c;}
    }

    return digits; 
}

int main(){

 cout << parse_integer("z2ydo3sad1wad5zxc09m\n111");
return 0;
}


// حل الزيرو بيحول البيانات من سترينج ل انتجر
// digits = digits *10 + (c -'0');
//كود الزيرو

/*
int parse_integer(const string& st ){
int digits = 0;
 if (st.empty()) {cout << "ERROR 404 : st\nstring not found\n";
 return digits;
 }
  for (char c : st) {
   if(c >= '0' && c <= '9'){ digits = digits *10 + (c -'0');}
    }

    return digits; 
}
*/
/*
|Aspect|	            |Your Code|	                                | Mentor's Code|
|Output Type	        |Returns a string of digits.	            |Returns an integer value.
|Memory Efficiency	    |Uses more memory (to store a string).	    |More memory-efficient (stores a single int).
|Versatility	        |Easier to extend for non-integer parsing.	|Specific to numeric parsing.
|Beginner Friendliness	|Clearer and easier to understand initially.|Slightly more complex due to math operations.
|Use Case	            |Suitable if you need the digits as text.	|Suitable if you need the number directly.

SUMMARY: 
الزيرو أجمد
*/