#include <iostream>

int getAnIntFromTheUser() {
    int num;
    std::cout << "\n\n\n\n\nEnter an integer: ";
    std::cin >> num;
    return num;
}

int compareTwoInts(int a, int b) {
    return (a > b) ? a : b;
}

int sumTwoInts(int a, int b) {
    return a + b;
}

int main() {
    int num1 = getAnIntFromTheUser();
    int num2 = getAnIntFromTheUser();
    std::cout << "Larger integer: " << compareTwoInts(num1, num2) << std::endl;
    std::cout << "Sum of integers: " << sumTwoInts(num1, num2) << std::endl;
    std::cout << "Proffessor if you are reading this I skipped some sleep for this\n\n\n\n\n" << std::endl;
    return 0;
}
