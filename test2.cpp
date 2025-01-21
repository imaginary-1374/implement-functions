#include <iostream>
#include <vector>
#include <string>
using namespace std;

int text(const vector <string>& letters)   
//int and not string because we want to return count number whiche is int ==> (res1)
{
    string count_text;
    cout <<"Put the text you want to count here: ";
    cin >> count_text;
    cout << "\n==============\n";
    int res1 = 0 ;

    for (const string& t : letters)
    {
        if (t == count_text)     {++res1;}
    }

    cout << "The count of text \"" << count_text << "\" is: " << res1;

     cout << "\n==============\n";


    return res1;
}


int main()
{
  vector<string> texts {"hello", "world", "hello", "test", "example", "hello"};


   while (true)

    { text(texts);

     char choice;
     cout << "Do you want to count another number? (y/n): ";
     cin >> choice;

        if (choice != 'y') { break; } 
        
     cout << "\n";}
   
    return 0;
}