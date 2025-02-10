#include <iostream>
//probably the hardest thing i coded in c++ so far i wanted to have some fun with this one.

void sortArray(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        // If nothing changes in the inner loop, then stop the outer loop 
        if (!swapped)
            break;
    }
}

int main() {
    int numbers[3];
    std::cout << "\n\n\n\n\nEnter three integers: ";
    std::cin >> numbers[0] >> numbers[1] >> numbers[2];

    // Sorting the numbers
    sortArray(numbers, 3);

    std::cout << "The smallest to largest order is: ";
    for (int i = 0; i < 3; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "The largest number is " << numbers[2] << std::endl;
    std::cout << "Have a great day!\n\n\n\n\n" << std::endl;
    return 0;
}
