#include <iostream>
#include <string>
#include <algorithm> 

int main() {
    std::string input;
    std::cout << "\n\n\n\n\nI bet you 500 bucks i can spell whatever you say backwards:";
    std::getline(std::cin, input);
    std::reverse(input.begin(), input.end());
    std::cout << "Reversed string: " << input << std::endl;
    std::cout << "Thats right! Gimme that 500 bucks! \n\n\n\n\n" << std::endl;
    return 0;
}
