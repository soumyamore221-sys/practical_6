#include <iostream>

int main() {
    int firstNumber, secondNumber, sum;
    
    // Request input from the user
    std::cout << "Enter two integers: ";
    std::cin >> firstNumber >> secondNumber;

    // Calculate the total
    sum = firstNumber + secondNumber;

    // Display the result
    std::cout << firstNumber << " + " << secondNumber << " = " << sum << std::endl;

    return 0;
}
