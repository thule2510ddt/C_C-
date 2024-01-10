#include <iostream>
#include <string>

void swap(std::string& a, std::string& b){
    a = a + b;
    b = a.at(0);
    a = a.at(1);
}

int main() {
    std::string a = "4";
    std::string b = "5";

    swap(a, b);
    // Display the modified string
    std::cout << a << b << std::endl;

    return 0;
}
