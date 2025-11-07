#include<iostream>    // Include the input/output stream library

// Using declarations to avoid writing std:: before cout, endl, and cin
using std::cout;     // Use cout for output
using std::endl;     // Use endl for new line
using std::cin;      // Use cin for input

int main()          // Main function - program execution starts here
{
    cout<<"calculator"<<endl;    // Display the calculator title
    
    char operations;    // Variable to store the arithmetic operation (+, -, *, /)
    int n1, n2;        // Variables to store the two numbers for calculation
    
    cout<<"enter any two numbers"<<endl;    // Prompt user to enter two numbers
    cin>>n1>>n2;                           // Read the two numbers from user input
    
    cout<<"select any given operation (+, -, *, /) "<<endl;    // Prompt user to choose an operation
    cin>>operations;                                           // Read the operation from user input
    
    switch (operations)    // Switch statement to perform the selected operation
    {
        case '+':    // If user selected addition
        cout<<"addition of "<<n1<<" and "<<n2<<"is : "<<n1+n2<<endl;    // Add numbers and display result
        break;       // Exit the switch statement
        
        case '*':    // If user selected multiplication
        cout<<"multiplication of "<<n1<<" and "<<n2<<" is : "<<n1*n2<<endl;    // Multiply numbers and display result
        break;       // Exit the switch statement
        
        case '/':    // If user selected division
        cout<<"division of "<<n1<<" and "<<n2<<"is : "<<n1/n2<<endl;    // Divide numbers and display result
        break;       // Exit the switch statement
        
        case '-':    // If user selected subtraction
        cout<<"subtraction of "<<n1<<" and "<<n2<<" is : "<<n1-n2<<endl;    // Subtract numbers and display result
        break;       // Exit the switch statement
        
        default:     // If user entered an invalid operation
        cout<<"please enter a valid operation as shown above"<<endl;    // Display error message
        break;       // Exit the switch statement
    }
    
    return 0;    // End the program and return success status
}