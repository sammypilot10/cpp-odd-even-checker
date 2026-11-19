#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string userInput;

    while (true) {
        std::cout << "Enter an integer (or q to quit): ";
        if (!(std::cin >> userInput)) {
            // Stop cleanly if the input stream closes (for example, end-of-file).
            std::cout << "\nGoodbye!\n";
            break;
        }

        if (userInput == "q" || userInput == "Q") {
            std::cout << "Goodbye!\n";
            break;
        }

        // Parse the text as an integer and reject extra characters like "7abc".
        std::stringstream inputStream(userInput);
        long long number;
        char extraCharacter;

        if (!(inputStream >> number) || (inputStream >> extraCharacter)) {
            std::cout << "Error: please enter a whole integer.\n";
            // The token was read as text, so cin is still usable; clear it just
            // in case a previous stream operation set an error state.
            std::cin.clear();
            continue;
        }

        // A remainder of zero means the number is evenly divisible by 2.
        if (number % 2 == 0) {
            std::cout << number << " is Even.\n";
        } else {
            std::cout << number << " is Odd.\n";
        }
    }

    return 0;
}
