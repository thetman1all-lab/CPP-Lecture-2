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
    -skips the rest of the current iteration and goes to the next. Great for input validation or early termination when debugging

- Nested Loops:
  - Inner loops always finish before outer loops