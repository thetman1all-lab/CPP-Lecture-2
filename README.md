# CPP-Lecture-2

- For Loop:  
  - General syntax:  
    for (init; condition; update) { ... }
    - Init: Set starting values (e.g., int i = 0;)
    - Condition: Bool check before each loop (e.g., i < 10;—runs while true)
    - Update: Runs after each iteration (e.g., i++)

- While Loop:
  - General Syntax:  
    while (condition) { ... }  
    - Condition: Bool (e.g., age < 0;—but update inside to avoid infinity)
   
- Do While Loop:
  - General Syntax:  
  do { ... } while (condition);
  - Note the semicolon at the end
 
- Tips:  
  - break;
    - Exits loop immediately
  - continue;  
    - skips the rest of the current iteration and goes to the next. Great for input validation or early termination when debugging

- Nested Loops:
  - Inner loops always finish before outer loops  

# SUNDAY PROJECT CODE EVALUATION
- Input Validation and Error Handling (High Priority - Safety):  
  - Reason: Cin can fail, leading to UB or infinite loops—critical in autonomy where bad sensor data must be handled gracefully (e.g., SpaceX flight computers reject invalid telemetry).  
  - Fix: After each cin, check if (!std::cin) { std::cin.clear(); std::cin.ignore(); /* re-prompt */ }.  
  - Example Refactor (for guess prompt):  
```
while (playing) {
    std::cout << "Guess a number between 1 and 100: ";
    if (!(std::cin >> guess)) {
        std::cin.clear(); // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore bad input
        std::cout << "Invalid input! Please enter an integer.\n";
        continue; // Skip without incrementing tries
    }
    // Rest of logic...
}
```  
(Add #include <limits> for numeric_limits.)
  - # NOTE:
    - The input is withing the error handling statement
    - No other cin statements should be found before or after this, this is the cin input statement  

- UB
  - Undefinded Behavior