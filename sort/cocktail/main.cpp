#include <iostream>
#include <cmath>

using namespace std;

void cocktailSort(int array[], int size) {
    int j = 0;
    bool t;
    
    do {
        j = j + 1;
        t = false;
        
        for (int i = 0; i < size - j; i++) {
            if (array[i] > array[i+1]) {
                int temp = array[i+1];
                array[i+1] = array[i];
                array[i] = temp;
                t = true;
            }
        }

        if (t == true) {
            t = false;
            for (int i = size - j; i >= 0; i--) {
                if (array[i] > array[i+1]) {
                    int temp = array[i+1];
                    array[i+1] = array[i];
                    array[i] = temp;
                    t = true;
                }
            }
        }
    } while (t == true);
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i];
        if (i == size - 1) {
            cout << endl;
        } else {
            cout << ' ';
        }
    }
}

void initializeArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        array[i] = size - i + 10;
    }
}

int main() {
    int size = 15;
    int array[size];

    initializeArray(array, size);
    printArray(array, size);
    cocktailSort(array, size);
    printArray(array, size);

    return 0;
}