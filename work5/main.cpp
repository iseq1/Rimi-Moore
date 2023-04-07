#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, M;
    cout << "Enter the number of rows and columns (NхM): ";
    cin >> N >> M;

    // Динамическое выделение памяти для матрицы
    int **mat = new int*[N];
    for(int i=0; i<N; i++) {
        mat[i] = new int[M];
    }

    // Ввод элементов матрицы от пользователя
    cout << "Enter the matrix elements: " << endl;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cin >> mat[i][j];
        }
    }

    // Вывод исходной матрицы
    cout << "The matrix is: " << endl;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Перестраиваем матрицу так, чтобы максимальное количество диагональных элементов находилось на главной диагонали.
    for(int i=0; i<N; i++) {
        int max_val = mat[i][i];
        int max_row = i;

        // Находим строку с максимальным диагональным элементом для текущего столбца
        for(int j=i+1; j<M; j++) {
            if(abs(mat[j][j]) > abs(max_val)) {
                max_val = mat[j][j];
                max_row = j;
            }
        }

        // Если строка с максимальным диагональным элементом не является текущей строкой, меняем строки местами
        if(max_row != i) {
            for(int j=0; j<M; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[max_row][j];
                mat[max_row][j] = temp;
            }
        }
    }

    // Выводим переставленную матрицу
    cout << "The rearranged matrix is: " << endl;
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождаем выделенную память для матрицу
    for(int i=0; i<N; i++) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}