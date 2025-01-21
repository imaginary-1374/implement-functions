#include <iostream>
#include <vector>

using namespace std;

void min_max ( vector <int> num) {

int bound = num.size();
int min = INT_MAX;
int max = INT_MIN;

// عشان لو الكونتينر مكون من عنصر واحد(فكرة كوبيلت)
if (num.size()== 1)
{
    min = num.at(0);
    max = num.at(0);
}


for (int i = 0; i < bound; ++i)
{
    if (num.at(i)> max)

        { max = num.at(i) ; }

     if (num.at(i) < min)

        { min = num.at(i) ; }
}

cout << min << "  |  " << max << endl;

}

int main(){

vector <int> con {1};

 min_max(con);
    return 0;
}