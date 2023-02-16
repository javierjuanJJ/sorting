#include <iostream>

void mergeSort(int pInt[], int number);

void mergeSort(int arr[], int startNumber, int endNumber);

void combine(int arr[], int startNumber, int middleIndex, int endNumber);

void display(int arr[], int number);

int main() {
    std::cout << "Hello, World!" << std::endl;
    int  arr[] = {1,5,2,6,9,8,7,4,12,5,4,5,5,5,2,5,5,52};
    int number = sizeof(arr) /  sizeof(int );
    display(arr, number);
    mergeSort(arr, number);
    display(arr, number);
    return 0;
}

void display(int arr[], int number) {
    int i = 0;
    while (i < number){
        std::cout << arr[i] << " ,";
        i++;
    }
    std::cout << std::endl;
}

void mergeSort(int pInt[], int number) {
    mergeSort(pInt, 0, number-1);
}

void mergeSort(int arr[], int startNumber, int endNumber) {
    if (startNumber >= endNumber){
        return;
    }
    int m = (startNumber + endNumber) / 2;

    mergeSort(arr, startNumber, m);
    mergeSort(arr, m + 1, endNumber);
    combine(arr, startNumber, m, endNumber);

}

void combine(int arr[], int startNumber, int middleIndex, int endNumber) {

    int* buffer = new int [endNumber + 1]; //for the total size of the merged array

    int k = startNumber;
    while(k <= endNumber)
    {
        buffer[k] = arr[k];
        k = k+1;
    }

    int i = startNumber;
    int j = middleIndex + 1;
    k = startNumber;

    while(i <= middleIndex && j <= endNumber)
    {
        if(buffer[i] <= buffer[j])
        {
            arr[k] = buffer[i];
            i = i+1;
        }
        else
        {
            arr[k] = buffer[j];
            j = j+1;
        }
        k = k+1;
    }

    while(i <= middleIndex)
    {
        arr[k] = buffer[i];
        i = i+1;
        k = k+1;
    }

    while(j <= endNumber)
    {
        arr[k] = buffer[j];
        j = j+1;
        k = k+1;
    }

    delete[] buffer;

}
