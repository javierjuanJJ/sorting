#include <iostream>

int lookForSmallest(int *pInt, int i, int i1);

void swap(int a[], int x, int y)
{
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}

void selSort(int a[], int n){
    int i = 0;
    while (i < n-1){
        int j = lookForSmallest(a, i , n-1);
        swap(a,i,j);
        i++;
    }
}

int lookForSmallest(int a[], int s, int e) {
    int i = s;
    int j = i;
    while (i <= e){
        if (a[i] < a[j]){
            j = i;
        }
        i++;
    }
    return j;
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
    int  arr[] = {1,5,2,6,9,8,7,4,12,5,4,5,5,5,2,5,5,52};
    int size = sizeof(arr) /  sizeof(int );
    display(arr,size);
    selSort(arr,size);
    display(arr,size);

    std::cout << "Hello, World!" << std::endl;
    return 0;
}
