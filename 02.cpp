
#include <iostream>
#include <string>
using namespace std;

int zfill(const int &num1, const int &num2, const int &num3, const string &showfront) {
    int count1=0; 
    int count2=0;
    int count3=0;

    int temp1 = num1;
    int temp2 = num2;
    int temp3 = num3;

if (temp1 == 0) {temp1=1;} // عشان لو الرقم صفر
if (temp2 == 0) {temp2=1;}
if (temp3 == 0) {temp3=1;}

if (temp1 < 0) {temp1 = -temp1;} // عشان لو الرقم سالب
if (temp2 < 0) {temp2 = -temp2;}
if (temp3 < 0) {temp3 = -temp3;}


// while (temp1 > 0) {
//         temp1 /= 10;
//         count1++;
//     }
//     while (temp2 > 0) {
//         temp2 /= 10;
//         count2++;
//     }
//     while (temp3 > 0) {
//         temp3 /= 10;
//         count3++;
//     }
//     //كدا احنا جبنا كل رقم مكون من كام خانة


    for (; temp1 > 0; temp1/=10)    {count1++; }

    for (; temp2 > 0; temp2/=10)    {count2++; }

    for (; temp3 > 0; temp3/=10)    {count3++; }


 int maxdigits;
 if      (count1>=count2 && count1>=count3)   {maxdigits = count1;}
 else if (count2>=count1 && count2>=count3)   {maxdigits = count2;}
 else                                         {maxdigits = count3;}
//   حددنا أكبر رقم من حيث عدد الخانات و العلامة >= عشان نغطي كل الاحتمالات

//  int maxdigits = max(count1, max(count2, count3)); ==> دالة بتختصر الكلام الللي فوق د 

 const int res1 = num1;
 const int res2 = num2;
 const int res3 = num3;

for (int i = 0; i < maxdigits-count1; ++i)      {cout<< showfront;} cout << res1 << endl;

for (int i = 0; i < maxdigits-count2; ++i)      {cout<< showfront;} cout << res2 << endl;

for (int i = 0; i < maxdigits-count3; ++i)      {cout<< showfront;} cout << res3 << endl;
    
    cout << "Max digits: " << maxdigits << endl;

 return maxdigits;
 
}


int main()
{
    zfill(0,10000,-1000,"@");
    
   return 0;
}