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

    // Initialize random number generator and make a random number
    srand(time(NULL));
    int secret_number = std::rand();

    do {
        std::cout << "1. Play Game\n2. Quit\nChoise: ";
        std::cin >> choice;
        if (choice == 1) {
            // Play Game
            

        } else if (choice != 2) {
            // Invalid choice
            std::cout << "Not a valid choice!\n";
            continue; //Skip back to menu
        }

    } while(choice != 2);

    return 0;
}