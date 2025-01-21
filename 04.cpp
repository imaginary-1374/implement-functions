#include <iostream>
#include <string>

using namespace std;

void generateletters (char start, char end){

if (start < end)
{
    for (int i = start; i <= end; ++i)
        {cout << char(i) << "  |  " << i << endl;}  }
else{

    for (int i = start; i >= end; --i)
        {cout << char(i) << "  |  " << i << endl;}  }
}


int main(){

    generateletters('0','z');

}