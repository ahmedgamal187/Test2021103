/*******************************************************************
 * ************* Author: Kerollos Emad  ****************************
 * ************* Version: 1.0           ****************************
 * ************* Application: Factorial ****************************
 *******************************************************************/

/* Including Standard liberary header file */
#include <stdio.h>

/*Main Function implementation*/
void main(void){
    /*Declare some useful variables*/
    int Local_u32main_Factorial =1; // "Local" for local variable in the "main" function, "u32" for type "int" as it unsigned integer with size of 32 bytes, and "factorial" indecates for the purpose.
                                    // initialized by (1) as it work as multiplicative identity
    int Local_u32main_EnteredValue; // To stor in it the Entered value by the user 
    
    char Local_u8main_iterations ;  // for "for" loop iterations, 


    while (1)
    {
        
        /*Request from the user to enter a number*/
        printf("\nPlease enter a number : ");
        scanf("%d",&Local_u32main_EnteredValue);

        /*An algurithm for calculating the Factorial of the entered value*/
        //Intetializing the Local_u8main_iterations by 2 to optmize the operation as Local_u32main_Factorial is already initialized by 1
        for(Local_u8main_iterations=2;Local_u8main_iterations<=Local_u32main_EnteredValue;Local_u8main_iterations++){
            Local_u32main_Factorial *= Local_u8main_iterations;
        }

        /*Printing the result */
        printf("The factorial of %d =%d\n" ,Local_u32main_EnteredValue, Local_u32main_Factorial);
        
        Local_u32main_Factorial=1; // return the Factorial container to 1 again
        
        /*Printing a hint for the user if he/she wants to Exit the app*/
        printf("\nPress CTRL+C to Exit\n");


    }  

}
