#include <iostream>
#define MAX 100
int main() {
    std::cout << "Hello, World!" << std::endl;
    int n = MAX / 2;
    int counter = 0;
    int arr[MAX];
    std::cout << "Enter a number N" << std::endl;

    for (counter = 0; counter < n; ++counter) {
        arr[counter] = rand();
    }

    for (counter = 0; counter < n; ++counter) {
        std::cout << arr[counter] << std::endl;

    }

    for (counter = 0; counter < n; ++counter) {
        for (int counter2 = counter+1; counter2 < n; ++counter2) {
            if (arr[counter2] < arr[counter]){
                int temp = arr[counter];
                arr[counter] = arr[counter2];
                arr[counter2] = temp;
            }
        }
    }
    std::cout << "Sorted" << std::endl;
    for (counter = 0; counter < n; ++counter) {
        std::cout << arr[counter] << std::endl;

    }

    return 0;
}
