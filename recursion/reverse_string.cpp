#include <iostream>
#include <string>

std::string reverse_string(std::string s) {
    // Base Case: An empty string or single character is already reversed
    if (s.length() <= 1) {
        return s;
    }
    
    // Recursive Step: Reverse the rest of the string, then tack the first char to the end
    return reverse_string(s.substr(1)) + s[0];
}

int main() {
    std::string test = "hello";
    std::cout << "Original: " << test << std::endl;
    std::cout << "Reversed: " << reverse_string(test) << std::endl;
    return 0;
}