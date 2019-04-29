/* ----- 3334316 ----- Assignment 1 ----- */
     

#include<stdio.h>

int count, key, choice;
char letter;
char usertext1 [101];       //initialise string for user input to be stored as char in a string 


int main()
{
    
    printf("Please select an option: \n");
        printf("1) Encrypt message with Caesar cypher\n");
        printf("2) Decrypyt message with Caesar cypher\n");
        printf("3) Encrypt message using substitution cypher\n");
        printf("4) Decrypt message using substitution cypher\n");
        printf("Enter selection: ");
        scanf("%d", &choice);

        switch (choice) {                                           //switch to transfer input for choice in to corresponding functions for encryptions and decryptions
            case 1: {
                
                printf("Option 1: Caesar Encryption\nEnter text: "); //CAESAR ENCRYPTION
                
                scanf(" %[^\n]s", usertext1);                        //'&' not needed for storage in array -- "%[^\n]s" instead of just %s because 
                                                                     //%s will only read up to the first whitespace and then stop scanning
                printf("Enter key: ");  
                scanf("%d", &key);          
    
                for (count = 0; usertext1 [count] != '\0'; ++count){ //'!= \0' - \0 is the last character of a string - so repeat until it hits \0
                letter = usertext1 [count];                          // letter will move to next character in string once each character has been converted    
            
                if (letter >= 'A' && letter <= 'Z') {                //because ASCII values are different for Capitals and non-capitals we have to separate
                                                                     //them or else the drop in value can change capitals in to non-capitals and vice versa
                         letter = letter + key;                // this line applies key value to letter ASCII value
                
                         if (key > 26) { 
                             key = key % 26;                   //if the rotation goes around more than once, the rotation will reset - need the remainder if key > 26
                         }
                              if (letter < 'A')   {
                              letter = letter + 26;            //is the ASCII value drops below 'A', add 26 to bring it around full circle back to Z
                              }
                         else if (letter > 'Z') {              //if the ASCII value is above 'Z', subtract 26 to bring it back to the start of the circle
                            letter = letter - 26;
                         }
                usertext1 [count] = letter;                    //store 'letter' value in usertext [stringlocation] and then continue with count
                }
                }
                printf ("Your encrypted message is: %s", usertext1);
                break;
            }
            case 2: {
                
                 printf("Option 2: Caesar Decryption\nEnter text: ");   //CAESAR DECRYPTION
                
                scanf(" %[^\n]s", usertext1);                        //'&' not needed for storage in array -- "%[^\n]s" instead of just %s because 
                                                                     //%s will only read up to the first whitespace and then stop scanning
                printf("Enter key: ");  
                scanf("%d", &key);          
    
                for (count = 0; usertext1 [count] != '\0'; ++count){ //'!= \0' - \0 is the last character of a string - so repeat until it hits \0
                letter = usertext1 [count];                          // letter will move to next character in string once each character has been converted    
            
                if (letter >= 'A' && letter <= 'Z') {                //because ASCII values are different for Capitals and non-capitals we have to separate
                                                                     //them or else the drop in value can change capitals in to non-capitals and vice versa
                         letter = letter - key;                // this line applies key value to letter ASCII value
                
                         if (key > 26) { 
                             key = key % 26;                   //if the rotation goes around more than once, the rotation will reset - need the remainder if key > 26
                         }
                              if (letter < 'A')   {
                              letter = letter + 26;            //is the ASCII value drops below 'A', add 26 to bring it around full circle back to Z
                              }
                         else if (letter > 'Z') {              //if the ASCII value is above 'Z', subtract 26 to bring it back to the start of the circle
                            letter = letter - 26;
                         }
                usertext1 [count] = letter;                    //store 'letter' value in usertext [stringlocation] and then continue with count
                }
                }
                printf ("Your decrypted message is: %s", usertext1);
                break;
            }
            

            case 3: {
                printf("Option 3: Substitution encryption\n");
                printf("Unfortunately I could not get this to run...\n Sorry!");
                break;
            }

            case 4: {
                printf("option 4: Substitution decryption\n");
                printf("Unfortunately I could not get this to run...\n Sorry!");
                break;
            }
            default: {
                printf("invalid input... please try again!");
                return 0; 
            }
   
            }
            return 0;
            }
            