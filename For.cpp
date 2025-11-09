#include<iostream>    // Include the input/output stream library for console operations

using std::cout;     // Allow using 'cout' instead of 'std::cout' for output
using std::endl;     // Allow using 'endl' instead of 'std::endl' for newline
using std::cin;      // Allow using 'cin' instead of 'std::cin' for input

int main()          // Main function - program execution starts here
{
    int n, m;       // Declare variables: n for number of rows, m for number of columns
    char p;         // Declare p to store the pattern character to be printed
    
    cout<<"enter number of rows:"<<endl;    // Prompt user to input the number of rows
    cin>>n;                                 // Read the number of rows from user input
    
    cout<<"enter number of columns:"<<endl;  // Prompt user to input the number of columns
    cin>>m;                                  // Read the number of columns from user input
    
    cout<<"enter pattern to be printed :"<<endl;  // Prompt user to input the pattern character
    cin>>p;                                       // Read the pattern character from user input
    
    for(int i=1; i<=n; i++)                // Outer loop: runs n times for each row
    {
        for (int j=1; j<=m; j++)           // Inner loop: runs m times for each column in current row
        {
            cout<< p;                       // Print the pattern character without newline
        }
        cout<< '\n';                       // After each row is complete, move to next line
    }

    return 0;                              // End program with success status code
}