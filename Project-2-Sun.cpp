#include <iostream>
#include <random>
#include <limits>

int main() {

    // Declare variables
    int choice;
    int guess;
    bool playing = false;

    // Obtain a random seed from hardware to initialize the generator
    std::random_device rd;
    
    // Initialize the Mersenne Twister engine with the seed
    std::mt19937 gen(rd());

    // Define the range [min, max] (inclusive)
    std::uniform_int_distribution<> distr(1, 100);

    do {

        // tries inrements by 1 after each incorrect guess
        int tries = 0;

        // Generate a random number
        int secret_number = distr(gen);

        // Choices prompt
        std::cout << "\nYour choices are:\n1. Play Game\n2. Quit\nChoice: ";
        // std::cin >> choice;

        // Error handling shoice input
        if (!(std::cin >> choice)) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore bad input
            std::cout << "Invalid input! Please enter an integer.\n";
            continue; // Skip without incrementing tries
        }

        // Play Game
        if (choice == 1) {
            playing = true;
            while (playing) {
                
                // Prompt the user to guess a number
                std::cout << "Guess a number between 1 and 100: ";

                // Error handling guess input
                if (!(std::cin >> guess)) {
                    std::cin.clear(); // Clear error flag
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore bad input
                    std::cout << "Invalid input! Please enter an integer.\n";
                    continue; // Skip without incrementing tries
                }

                // A guess has been made, therefore tries increments by one
                tries ++;

                // Correct guess statement
                if (guess == secret_number) {
                    if (tries == 1) {
                        std::cout << "\nHoly shit you got it on the first try! Interesting, very interesting. But your EXP and LV did not increase. You will need to try something else to increase those.\nTotal guesses: " << tries << std::endl;
                        break;
                    }
                    std::cout << "\nYou guessed the right number! But your EXP and LV did not increase. You will need to try something else to increase those.\nTotal guesses: " << tries << std::endl;
                    break;

                // Too large guessmstatement
                } else if (guess > secret_number) {
                    std::cout << "Your guess is too high." << std::endl;

                // Too small guess statement
                } else if (guess < secret_number) {
                    std::cout << "Your guess is too low." << std::endl;
                }

                // Prints if player took too many tries
                if (tries == 10) {
                        std::cout << "\nIt appears you have reached and end. Whether you play again or not depends on your DETERMINATION" << std::endl;
                        break;
                    }
            }

            // Game loop ended, therefore playing is false
            playing = false;
           
        // Quit Game
        } else if (choice != 2) {
            // Invalid choice
            std::cout << "Not a valid choice!\n";
            continue; //Skip back to menu
        }

    } while(choice != 2);

    return 0;
}