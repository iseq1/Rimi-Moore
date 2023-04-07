#include <iostream>
using namespace std;

// Функция, высчитывающая Y(n)
double recurs(int n){
    // Пока n>1 рекурсивно возвращаем функцию
    if(n>1){
        return 1/(n + recurs(n-1)) ;
    }
    // Если n=1 возвращаем конечный элемент рекурсии
    if(n==1){
        return 1/(1 + 0.5);
    }
}

double func(int n){
    double result = 1/(1 + 0.5);
    if(n>=2){
        int i = 2;
        while (i<=n) {
            result = 1 / (i + result);
            i++;
        }
    }
    return result;
}



int main() {
    cout<< "Enter \"n\" "<<endl;
    int n;
    cin >> n;
    if(n<=0){
        cout<<"N must be greater than 0";
    }
    else {
        cout << "Y(" << n << ") = " << recurs(n) << endl;
        cout << "Y(" << n << ") = " << func(n);
    }
    return 0;
}
