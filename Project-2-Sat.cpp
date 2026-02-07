#include <iostream>

int main() {

    //Declare repeating variable
    char repeat_input;
    bool repeat;

    do {
    // Decalring variables
    int N;
    int total = 0;
    
    
    // Prompt user to input N
    std::cout << "Input how many times to loop:";
    std::cin >> N;

    // for loop to prompt user to input N amount of integers
    for (int i = 0; i < N; i++) {
        // Declare number inside for loop to refresh each itteration
        int number;
        std::cout << "Enter a number: ";
        std::cin >> number;

        // Add inputs together and print output at end
        total += number;
    }

    std::cout << "Total sum: " << total << "\n" << std::endl;

    // While loop to count down the total sum
    while (total >= 0) {
        // Clears the line ABOVE the current cursor position using ANSI Escape Codes
        std::cout << "\x1b[1A" << "\x1b[2K\r" << std::flush;
        std::cout << "Counting Down: " << total << std::endl;
        total --;
    }

    // Ask to repeat
    std::cout << "Do you want to repeat? (y/n): ";
    std::cin >> repeat_input;
    repeat = (repeat_input == 'y');

    } while (repeat);

    return 0;
}