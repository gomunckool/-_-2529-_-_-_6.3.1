#include <iostream>
#include <iomanip>
using namespace std;

void PrintArray(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

template <typename T>
void PrintArrayT(const T arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

void FillArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter arr[" << i << "]: ";
        cin >> arr[i];
    }
}

void IncrementArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 1;
    }
}

template <typename T>
void IncrementArrayT(T arr[], int size, T value = 1) {
    for (int i = 0; i < size; i++) {
        arr[i] += value;
    }
}

int main() {
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int* arr = new int[n];  

    cout << "\nFilling array:" << endl;
    FillArray(arr, n);

    cout << "\nArray before modification (regular function):" << endl;
    PrintArray(arr, n);

    IncrementArray(arr, n);

    cout << "\nArray after modification (regular function):" << endl;
    PrintArray(arr, n);

    cout << "\nArray after adding 2 (template function):" << endl;
    IncrementArrayT(arr, n, 2);
    PrintArrayT(arr, n);

    delete[] arr;  
    return 0;
}
