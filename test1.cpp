#include <iostream>
#include <vector>
#include <string>
using namespace std;

int fun(const vector <int>& nums)
{
    
    int count_num;
    cout << "Add the number you want to count here: \n";
    cin >> count_num;
    cout << "===================\n";

    int res1 = 0;

    for (const int& n : nums)
    {
        if (n == count_num)     {++res1;}
    }

    cout << "The count of number " << count_num << " is: " << res1;
    cout << "\n===================\n";

    return res1; 

}
 
int main()
{
vector<int> numbers {1, 5, 45, 25, 5, 8, 8, 12, 1, 8, 3};

    while (true)

    { fun(numbers);

     char choice;
     cout << "Do you want to count another number? (y/n): ";
     cin >> choice;

        if (choice != 'y') { break; } }
    return 0;
}

