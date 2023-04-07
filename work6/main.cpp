#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a sentence: ";
    // Считываем строку
    getline(cin, str);

    int k;
    cout << "Enter the position k: ";
    // Считываем позицию k
    cin >> k;

    int word_count = 0; // Порядковый номер необходимого слова
    string word = "";   // Вспомогательная строка
    bool found_word = false; // Флаг, по умолчанию = false, как найдём слово = true

    // Перебираем каждый символ в строке
    for(int i=0; i<str.length(); i++) {
        // Если обозреваемый символ строки - пробел
        if(str[i] == ' ') {
            // Если слово найдено, а k-я позиция еще не достигнута
            if(!word.empty() && !found_word) {
                word_count++;
            }
            // Если достигнута k-я позиция, вывести текущее количество слов и выйти из цикла
            if(i+1 >= k) {
                found_word = true;
                break;
            }
            // Сбросить строку слов
            word = "";
        }
        else // Если обозреваемый символ строки - не пробел
        {
            // Добавить текущий символ к текущему слову
            word += str[i];
        }
    }

    // Если k-я позиция еще не достигнута, вывести текущее количество слов
    if(!found_word) {
        word_count++;
    }

    if(k>0 && k<=str.length()){ // Если k-позииця попадает в строку
        cout << "The word covering position k is: " << word_count << endl;
    }
    else{ // Если k-позииця не попадает в строку
        cout << "Position k outside the string"; }


    return 0;
}
