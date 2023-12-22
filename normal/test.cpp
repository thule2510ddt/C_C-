#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello";

    // Use push_back to add a character to the end of the string
    myString.push_back(' ');  // Adding a space
    myString.push_back('W');  // Adding 'W'
    myString.push_back('o');  // Adding 'o'
    myString.push_back('r');  // Adding 'r'
    myString.push_back('l');  // Adding 'l'
    myString.push_back('d');  // Adding 'd'

    // Display the modified string
    std::cout << myString << std::endl;

    return 0;
}
