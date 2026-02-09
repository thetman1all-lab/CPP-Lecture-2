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
    int guess = 1;
    bool playing;
    

    // Obtain a random seed from hardware to initialize the generator
    std::random_device rd;
    
    // Initialize the Mersenne Twister engine with the seed
    std::mt19937 gen(rd());

    // Define the range [min, max] (inclusive)
    std::uniform_int_distribution<> distr(1, 100);

    do {

        int tries = 0;

        // Generate a random number
        int secret_number = distr(gen);
        std::cout << secret_number << std::endl;

        // Choices prompt
        std::cout << "Your choices are:\n1. Play Game\n2. Quit\nChoise: ";
        std::cin >> choice;

        // Play Game
        if (choice == 1) {
            
            while (tries != 11) {
                
                std::cout << "Guese a number between 1 and 100: ";
                std::cin >> guess;

                // Logic to determine guess
                if (guess == secret_number) {
                    if (tries == 1) {
                        std::cout << "Holy shit you got it on the first try! Interesting, very interesting"
                                  << std::endl;
                        break;
                    }
                    std::cout << "You guessed the right number! But your EXP and LV did not increase. You will need to try something else to increase those.\nTotal guesses: " << tries << std::endl;
                    break;

                } else if (guess > secret_number) {
                    std::cout << "Your guess is too high." << std::endl;

                     // Prints if player took too many tries
                    if (tries == 11) {
                            std::cout << "It appears you have reached and end. Whether you play again or not depends on your DETERMINATION" << std::endl;
                            break;
                        }

                } else if (guess < secret_number) {
                    std::cout << "Your guess is too low." << std::endl;
                    
                     // Prints if player took too many tries
                    if (tries == 11) {
                            std::cout << "It appears you have reached and end. Whether you play again or not depends on your DETERMINATION" << std::endl;
                            break;
                        }
                }

                // Increase tries counter
                tries ++;
            }

           

        // Quit Game
        } else if (choice != 2) {
            // Invalid choice
            std::cout << "Not a valid choice!\n";
            continue; //Skip back to menu
        }

    } while(choice != 2);

    return 0;
}