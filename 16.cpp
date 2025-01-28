#include <iostream>
#include <vector>
using namespace std;


bool in_vec( vector <int> vec, int check) {



for (int n : vec)
{
    if (n == check)
    {
         return true;
    }
    
}
    return false;

}

int main(){

    vector <int> nums1 {1, 2, 3, 4, 5};

    vector <int> nums2 {10, 21, 31, 41, 51};

    vector <int> nums3 {11, 13, 14, 15, 16};

    vector <int> nums4 {2, 4, 6, 8};

    cout << boolalpha;

    cout << in_vec(nums1 , 1) << endl;
    cout << in_vec(nums2 , 1) << endl;
    cout << in_vec(nums3 , 1) << endl;
    cout << in_vec(nums4 , 1) << endl;

    return 0;

}