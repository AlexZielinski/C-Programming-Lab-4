# C-Programming-Lab-4

C programming lab 4 for COMP 2510

2 functions to implement

----------------------------------------------------------------------------------------
Function 1:
            int is_valid_name(const char s[]);
    
    Functions checks if a name is valid. Returns 1 if name is valid. A valid name will 
    consist of at least 2 characters but fewer than 20 characters. Each charatcter must 
    be either and alphabet or a hyphen but the name cannot start or end with a hyphen
    
    so Alex is valid but -Alex is not, neither is Alex-.
    
----------------------------------------------------------------------------------------
Function 2:
            int get_name(char firstname[], char lastnamep[]);
                
    Prompts user for a name and then reads the line of user input. The functions returns
    when one of the following happens:
        
        a) The user has input a valid name. Meaning it abides by the conditions stated in
           function 1. If the input is valid the first word is copied into the array
           firstname, and the second word is copied into the array lastname and the 
           functions returns 1.
           
        b) The user input a blank line or has pressed the end-of-file key (at the beginning
           of the line) when prompteed for a name. In this case the function returns 0 
           without storing anything into firstname or lastname.