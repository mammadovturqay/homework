#include<iostream>
#include<Windows.h>
#include<iomanip>

using namespace std;

//1) matrixi x oxu uzre qatlayin ve ust uste dushen
//elementleri vurun

//int** reserveArray(int row, int col) {
//    auto temp = new int* [row] {};
//    for (size_t i = 0; i < row; i++)
//    {
//        temp[i] = new int[col] {};
//    }
//    return temp;
//}
//void initArray(int** arr, int row, int col) {
//    int random = 0;
//    int min = 1;
//    int max = 10;
//    srand(time(0));
//    for (size_t i = 0; i < row; i++)
//    {
//        for (size_t k = 0; k < col; k++)
//        {
//            random = min + rand() % (max - min + 1);
//            arr[i][k] = random;
//        }
//    }
//}
//void PrintArray(int** arr, int row, int col) {
//    for (size_t i = 0; i < row; i++)
//    {
//        for (size_t k = 0; k < col; k++)
//        {
//            cout << setw(4) << arr[i][k] << " ";
//        }cout << endl;
//    }cout << endl;
//}
//void UpdateArray(int**& arr, int& row, int& col) {
//    auto temp = new int* [row / 2] {};
//    for (size_t i = 0; i < row / 2; i++)
//    {
//        temp[i] = new int[col] {};
//        for (size_t k = 0; k < col; k++)
//        {
//            temp[i][k] = arr[i][k] * arr[row - i - 1][k];
//        }
//    }
//    arr = temp;
//    temp = nullptr;
//    row = row / 2;
//}
//void main() {
//    int row = 4;
//    int col = 4;
//    auto arr = reserveArray(row, col);
//    initArray(arr, row, col);
//    PrintArray(arr, row, col);
//    UpdateArray(arr, row, col);
//    PrintArray(arr, row, col);
//}

//2) matrixi y oxu uzre qatlayin ve ust uste elementleri toplayin

//int** reserveArray(int row, int col) {
//    auto temp = new int* [row] {};
//    for (size_t i = 0; i < row; i++)
//    {
//        temp[i] = new int[col] {};
//    }
//    return temp;
//}
//void initArray(int** arr, int row, int col) {
//    int random = 0;
//    int min = 1;
//    int max = 10;
//    srand(time(0));
//    for (size_t i = 0; i < row; i++)
//    {
//        for (size_t k = 0; k < col; k++)
//        {
//            random = min + rand() % (max - min + 1);
//            arr[i][k] = random;
//        }
//    }
//}
//void PrintArray(int** arr, int row, int col) {
//    for (size_t i = 0; i < row; i++)
//    {
//        for (size_t k = 0; k < col; k++)
//        {
//            cout << setw(4) << arr[i][k] << " ";
//        }cout << endl;
//    }cout << endl;
//}
//void UpdateArray(int**& arr, int& row, int& col) {
//    auto temp = new int* [row / 2] {};
//    for (size_t i = 0; i < row / 2; i++)
//    {
//        temp[i] = new int[col] {};
//        for (size_t k = 0; k < col; k++)
//        {
//            temp[i][k] = arr[i][k] + arr[row - i - 1][k];
//        }
//    }
//    arr = temp;
//    temp = nullptr;
//    row = row / 2;
//}
//void main() {
//    int row = 4;
//    int col = 4;
//    auto arr = reserveArray(row, col);
//    initArray(arr, row, col);
//    PrintArray(arr, row, col);
//    UpdateArray(arr, row, col);
//    PrintArray(arr, row, col);
//}