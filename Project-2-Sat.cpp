#include <iostream>

int main() {

    //Declare repeating variable
    char repeat_input;
    int repeat;

    do {
    // Decalring variables
    int N;
    int total = 0;
    
    // Prompt user to input N
    std::cout << "Input how many times to loop:" << std::endl;
    std::cin >> N;

    // Declare empty array of size N that will be used to store input values
    int number_inputs[N];

    // for loop to prompt user to input N amount of integers
    for (int i = 0; i < N; i++) {
        std::cout << "Enter a number:" << std::endl;
        std::cin >> number_inputs[i];

        // Add inputs together and print output at end
        total = total + number_inputs[i];
        if (i==N-1) {
            std::cout << "Total sum = " << total << std::endl;
        }
    }

    // While loop to count down the total sum
    std::cout << "Counting Down:" << std::endl;
    while (total >= 0) {
        std::cout << total << std::endl;
        total = total - 1;
    }

    // Ask to repeat
    std::cout << "Do you want to repeat? (y/n):" << std::endl;
    std::cin >> repeat_input;
    repeat = (repeat_input == 'y');

    } while (repeat == 1);

    return 0;
}