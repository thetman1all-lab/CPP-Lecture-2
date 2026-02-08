#include <iostream>


int main() {
    int choice;
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