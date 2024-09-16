#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void fillArray(double* array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = static_cast<double>(rand()) / RAND_MAX * 100.0;
    }
}

void displayArray(const double* array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
    cout << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); 

    while (true) {
        int size;
        cout << "Enter the size of the array: ";
        cin >> size;

        if (size <= 0) {
            cout << "Size of array must be a positive number!" << endl;
            continue;
        }

        double* array = new double[size];

        fillArray(array, size);

        cout << "Array: ";
        displayArray(array, size);

        delete[] array;

        char choice;
        cout << "Want to continue (y/n)? ";
        cin >> choice;

        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    return 0;
}
