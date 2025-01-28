#include <iostream>
using namespace std;
 // if first letter capital in all words of the string returns 1 else 0

bool CAPITAL(const string& st){

    bool capital = true;

        
        for (int i = 0; i < st.length(); ++i)
        {

        if (i==0)
            
            {
                if(st[i] < 'A' || st[i] > 'Z')
                {
                    capital = false; 
                    break;
                }
            }
            
                else if ( st[i] == ' ' && st[i+1] != ' ' && (i+1) != st.length())

                        {
                         if(st[i+1] < 'A' || st[i+1] > 'Z')
                         {
                                capital =false;
                                break;
                         }
                        }

        }
    
    return capital;

}


int main(){

cout << CAPITAL("Hello elzero web school    ") << "\n";
cout << CAPITAL("hELLO  Elzero  Web School  ") << endl;
cout << CAPITAL("HELLO  Elzero  Web School  ") << endl;
cout << CAPITAL("hELLO  Elzero  1Web 23School   ") << endl;

    return 0;
}
//i+1 عشان د سترينج فلو احتوى على 10 حروف يكون طوله 11 عشان كدا لما عملت
//مطلعش ايرور اني طلعت برا حدود السترينج
//و طوله 11 عشان حاجة في تخزين الميموري ابقى شوفها على يوتيوب او الزيرو هيقولها في البروبلم غالبا