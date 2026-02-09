#include <iostream>
#include <random>

// Description:

// When the user chooses “Play”, generate a random number between 1 and 100 (use rand() — we’ll cover proper random later; for now #include <cstdlib> and srand(time(NULL)); if you want, or just hardcode a secret number for simplicity)

// Use a while loop to let the user guess until they get it right. Give hints (“Too high” / “Too low”)

// Use nested loops or break/continue where it makes sense (e.g., limit guesses to 10 max with break)

// Track the number of guesses and print it when they win

// After winning or quitting, return to the main menu (do-while)


// Requirements:

// Proper includes (<iostream>, and <cstdlib> + <ctime> if using real random)

// Clean prompts and output

// Use variables, conditionals, and loops together

// Keep it reasonable length (~40–60 lines)


int main() {

    // Declare variables
    int choice;
    int guess = 0;
    bool playing;
    int tries = 0;

    // Obtain a random seed from hardware to initialize the generator
    std::random_device rd;
    
    // Initialize the Mersenne Twister engine with the seed
    std::mt19937 gen(rd());

    // Define the range [min, max] (inclusive)
    std::uniform_int_distribution<> distr(1, 100);

    // Generate a random number
    int secret_number = distr(gen);
    std::cout << secret_number << std::endl;

    do {
        std::cout << "Your choices are:\n1. Play Game\n2. Quit\nChoise: ";
        std::cin >> choice;

        if (choice == 1) {
            playing = true;
            // Play Game
            while (playing) {
                tries ++;
                std::cout << "Guese a number between 1 and 100: ";
                std::cin >> guess;

                // Logic after guess
                if (guess == secret_number) {
                    std::cout << "";

                } else if (guess > secret_number) {

                } else if (guess < secret_number) {

                } else if (tries == 10) {
                    std::cout << "It appears you have reached and end. Whether you play again or not depends on your DETERMINATION" << std::endl;
                }

            }

        } else if (choice != 2) {
            // Invalid choice
            std::cout << "Not a valid choice!\n";
            continue; //Skip back to menu
        }

    } while(choice != 2);

    return 0;
}