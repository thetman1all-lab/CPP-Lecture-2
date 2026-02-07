#include <iostream>
#include <iomanip>
#include <string>

// - Uses a for loop to prompt N times for integers, sum them (store in int total = 0; add each input)

// - After, use a while loop to print the sum repeatedly until it hits 0 (subtract 1 each time—silly but practices while)

// - Bonus (optional for mastery): Wrap in do-while—ask if repeat (y/n), loop whole thing if 'y'

int main() {

    // Decalring variables
    int N;

    
    // Prompt user to input N
    std::cout << "Input how many times to loop:" << std::endl;
    std::cin >> N;

    // Declare empty array of size N that will be used to store input values
    int number_inputs[N];

    // for loop to prompt user to input N amount of integers
    for (int i = 0; i < N; i++) {
        std::cout << "Enter a number:" << std::endl;
        std::cin >> number_inputs[i];
    }

    return 0;
}