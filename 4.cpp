#include <iostream>
using namespace std;


void inputArray(int* array, int size) {
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
}


void distributeArray(const int* array, int size) {
    
    int posCount = 0;
    int negCount = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) ++posCount;
        else if (array[i] < 0) ++negCount;
    }

 
    int* positiveArray = new int[posCount];
    int* negativeArray = new int[negCount];

  
    int posIndex = 0;
    int negIndex = 0;
    for (int i = 0; i < size; ++i) {
        if (array[i] > 0) positiveArray[posIndex++] = array[i];
        else if (array[i] < 0) negativeArray[negIndex++] = array[i];
    }

 
    cout << "Positive numbers: ";
    for (int i = 0; i < posCount; ++i) {
        cout << positiveArray[i] << ' ';
    }
    cout << endl;

   
    cout << "Negative numbers: ";
    for (int i = 0; i < negCount; ++i) {
        cout << negativeArray[i] << ' ';
    }
    cout << endl;

    delete[] positiveArray;
    delete[] negativeArray;
}

int main() {
    const int SIZE = 10; 
    int array[SIZE];

   
    inputArray(array, SIZE);

   
    distributeArray(array, SIZE);

    return 0;
}
