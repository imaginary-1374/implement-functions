#include <iostream>
using namespace std;

int count_words(const string& st){

     bool in_word;
     int count = 0 ;
    
    for (char c : st){

        if (c == ' '){

            if(in_word){

            ++count;
            in_word = false;}

            }

        else {in_word = true;}

    }
    if (in_word)

    {count++;}
    

    return count;
}

int main(){

    cout << count_words("abc def g ") << endl;
    cout << count_words("abc    def g ") << endl;
    cout << count_words("abc   def   g   ") << endl;
    
    return 0;
}

    /*
    flag ==> بتحدد حالة صح او خطأ و بناءا عليه تستخدمها بعدين في الكود بشكل معين

    bool احمد_غادر_المتجر;
    if( المتجر فارغ ){       //تخيل المتجر فارغ د عبارة عن ميثود بتشوف الفيكتور فاضي ولا لا و احمد د رقم
                            // فلو الفيكتور فاضي يبقى المتجر فارغ ترو و بالتالي احمد غادر تبقى ترو  
    احمد_غادر_المتجر = true ;  // يعني لو مفيش حد في المتجر يبقى احمد غادر ==> aka logic
    }
    
    if (احمد_غادر_المتجر == false){cout << " مع السلامة \n";}

    else{
    cout << " اطلع برا 😂\n";}

    // نظرا لعبقريتي في ضرب الامثلة اظنك فهمت لو مفهمتش روح دور بقا مع نفسك و اعرف ان مستوى ذكاءك في الحضيض يا نجم 
    // و ماستخدمتش نحو او صرف عن قصد عشان اوفر وقت بضيعه حاليا في كتابة السطر د
    // peace
    */