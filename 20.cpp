#include <iostream>
#include <vector>
using namespace std;

vector <int> range( int begin , const int& end, bool inc_end = true){

int size;
if (inc_end)
{
  size = (end - begin)+1;
}
else
{
  size = (end - begin);
}
 vector <int> res(size);
    for (int i = 0;i < size; ++i)
    {
       res[i] = begin++ ; // increment not preicreament so the range is correct
    }
    return res;
}
int main(){
    vector <int> numbers = range(2,10,false);
for (int n : numbers)
{
    cout << n << endl;
}
    return 0;
}
