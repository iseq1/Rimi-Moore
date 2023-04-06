#include <iostream>
using namespace std;

int main() {
    //Объявляем кол-во элементов массива
    int k;
    //Выводим сообщение о вводе длины массива
    cout << "Enter the size of the array: ";
    //Считываем, введенную с коавиатуры переменную
    cin >> k;
    
    //Создаем массив
    int* arr = new int[k];
    //Выводим сообщение о вводе элементов
    cout << "Enter " << k << " numbers: ";
    
    //Считываем элементы массива и заполняем массив 
    for(int i=0; i<k; i++) {
        cin >> arr[i];
    }
    
    //Переменная для подсчёта инверсий
    int inv_count = 0;
    
    //Пробегаемся по массиву дважды и сверяем каждый элемент со всеми последующими
    //Если нашлась инверсия, то увеличиваем переменную для подсчёта инверсий
    for(int i=0; i<k; i++) {
        for(int j=i+1; j<k; j++) {
            if(arr[j] < arr[i]) {
                inv_count++;
            }
        }
    }
    
    //Выводим результат
    cout << "Number of inversions: " << inv_count << endl;
    return 0;
}
