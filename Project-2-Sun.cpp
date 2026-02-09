#include <iostream>
#include <random>

int main() {

    // Declare variables
    int choice;
    int guess = 1;
    bool playing = false;

    // Obtain a random seed from hardware to initialize the generator
    std::random_device rd;
    
    // Initialize the Mersenne Twister engine with the seed
    std::mt19937 gen(rd());

    // Define the range [min, max] (inclusive)
    std::uniform_int_distribution<> distr(1, 100);

    do {

        int tries = 1;

        // Generate a random number
        int secret_number = distr(gen);
        std::cout << secret_number << std::endl;

        // Choices prompt
        std::cout << "Your choices are:\n1. Play Game\n2. Quit\nChoise: ";
        std::cin >> choice;

        // Play Game
        if (choice == 1) {
            playing = true;
            while (playing) {
                
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
                    if (tries == 10) {
                            std::cout << "It appears you have reached and end. Whether you play again or not depends on your DETERMINATION" << std::endl;
                            break;
                        }

                } else if (guess < secret_number) {
                    std::cout << "Your guess is too low." << std::endl;

                     // Prints if player took too many tries
                    if (tries == 10) {
                            std::cout << "It appears you have reached and end. Whether you play again or not depends on your DETERMINATION" << std::endl;
                            break;
                        }
                }

                // Increase tries counter
                tries ++;
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