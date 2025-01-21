#include <iostream>
#include <vector>
using namespace std; 

float calc(const vector<int>& nums, const char& op) {

float res= (op== '*')? 1 : 0 ;

   for (int n:nums)
   {
    switch (op)
    {
    case '+':
       res += n;
        break;
        case '-':
       res -= n;
        break;
        case '*':
       res *= n;
        break;

        case '/':
        res = nums.at(0);
        for (int i = 1; i < nums.size(); ++i)

        {res /= nums.at(i);}
        
        break;
    }
   }
   return res;
}

int main()
{
    vector <int> nums {4, 3, 42, 10};

    cout << calc(nums,'+');
    return 0;
}