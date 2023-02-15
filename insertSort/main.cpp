#include <iostream>

void insertith(int *pInt, int n, int i);

void insertSort(int a[], int n){
    int i = 1;
    while (i < n){
        insertith(a,n,i);
        i++;
    }
}

void display(int a[], int n){
    int i = 0;
    while (i < n){
        std::cout << a[i] << " ,";
        i++;
    }
    std::cout << std::endl;
}

void insertith(int pInt[], int n, int i) {
    int key = pInt[i];
    int j = i-1;
    while (j>=0 && pInt[j]>key){
        pInt[j+1]=pInt[j];
        j=j-1;
    }
    pInt[j+1]= key;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int  arr[] = {1,5,2,6,9,8,7,4,12,5,4,5,5,5,2,5,5,52};
    int number = sizeof(arr) /  sizeof(int );
    display(arr,number);
    insertSort(arr,number);
    display(arr,number);
    return 0;
}
