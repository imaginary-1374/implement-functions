#include <iostream>
using namespace std;

//floor(12.8) ==> 12
//ceil(12.005) ==> 13
//round(12.6) ==> 13

//round (12.5) ==> 13
//12.5 - 1*12 = .5
//

double nums( double num, const string& st) {

    if (num < 0) { num*= -1; } 

    else if (num == 0) { return 0; } 

    double n = num;

if (st == "ceil"){

    while (n > 0)       {--n;}

        num -= n;
        
    return num;     }

  if (st == "floor"){

     while (n > 0)      {--n;}

        num -= n;

    return num;     }

    // في طريقة كان ممكن اعملها تخلص في سطرين كود بس ضميري مريحنيش 
    // int n = num; return n;
  
   if (st == "round"){

    while (n > 0)       {--n;}

    if (n >= -0.5) {
        
        num -= n;

        return num;}

   else {return num;}}

}

int main(){

    cout << nums( -3.000,"ceil") << endl;
    cout << nums( 7.00001,"ceil") << endl;
    cout << nums( 0      ,"ceil") << endl;
    cout << nums( 2.157  ,"ceil") << endl;

    cout << nums( -3.0008,"floor") << endl;
    cout << nums( -6.999,"floor") << endl;
    cout << nums( 0      ,"floor") << endl;
    cout << nums( 2.157  ,"floor") << endl;

    cout << nums( -12.5  ,"round") << endl;
    cout << nums( 0      ,"round") << endl;
    cout << nums( 10.49   ,"round") << endl;
    cout << nums( 1.09   ,"round") << endl;

    return 0;
}

//😂 الزيرو حل بالطريقة اللي مكنتش مريحة ضميري هيخو هيخو 