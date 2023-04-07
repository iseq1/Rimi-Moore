#include <iostream>
using namespace std;

// Функция, высчитывающая Y(n)
double func(int n){
    // Пока n>1 рекурсивно возвращаем функцию
    if(n>1){
        return 1/(n + func(n-1)) ;
    }
    // Если n=1 возвращаем конечный элемент рекурсии
    if(n==1){
        return 1/(1 + 0.5);
    }
}


int main() {
    cout<< "Enter \"n\" "<<endl;
    int n;
    cin >> n;
    cout<<"Y("<<n<<") = "<<func(n);
    return 0;
}
