#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArr(int arr[], int n)
{ 
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arre[] = {5, 3, 0, 1, 2, 6, 5, 7, 9};
    int n = sizeof(arre)/sizeof(arre[0]);
    selectionSort(arre, n);
    printArr(arre, n);
    
    
    return 0;
}