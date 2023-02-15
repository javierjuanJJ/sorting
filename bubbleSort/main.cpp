#include <iostream>

void bubbleSort(int arr[], int size);

void bubble(int arr[], int size);

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}


void display(int a[], int n){
    int i = 0;
    while (i < n){
        std::cout << a[i] << " ,";
        i++;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int  arr[] = {1,5,2,6,9,8,7,4,12,5,4,5,5,5,2,5,5,52};
    int size = sizeof(arr) /  sizeof(int );
    display(arr,size);
    bubbleSort(arr, size);
    display(arr,size);
    return 0;
}

void bubbleSort(int arr[], int size) {
    int i = size - 1;
    while (i > 0){
        bubble(arr, size);
//        if (arr[i] < arr[i - 1]){
//            swap(arr, i, i - 1);
//        }
        i--;
    }
}

void bubble(int arr[], int size) {
    int i = size-1;
    while(i>0)
    {
        if(arr[i]<arr[i-1])
        {
            swap(arr, i, i-1);
        }
        i--;
    }
}
