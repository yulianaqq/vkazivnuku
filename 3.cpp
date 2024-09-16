#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

void swapEvenOdd(int* array, int size) {
    for (int i = 0; i < size - 1; i += 2) {
      
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

void displayArray(const int* array, int size) {
    for (int i = 0; i < size; ++i) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Size of array must be a positive number!" << endl;
        return 1; 
    }

    
    int* array = new int[size];

 
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;
    }


    cout << "Initial array: ";
    displayArray(array, size);

   
    swapEvenOdd(array, size);


    cout << "Array after swapping even and odd indices: ";
    displayArray(array, size);

 
    delete[] array;

    return 0;
}
