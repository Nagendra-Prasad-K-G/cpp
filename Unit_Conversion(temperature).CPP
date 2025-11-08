#include<iostream> // include the input/output stream header for cin, cout, etc.

using std::cout; // bring cout into the current scope so we can write output without std:: prefix
using std::cin;  // bring cin into the current scope so we can read input without std:: prefix
using std::endl; // bring endl into the current scope (inserts newline and flushes output)

int main() // program entry point: execution starts here
{
    char unit;           // variable to store the unit choice ('c' or 'f')
    double t1, t2;       // t1: the input temperature, t2: the converted temperature
    cout<<"* Temperature Converter *"<<endl; // display the program title/header
    cout<<" please choose the unit to convert : c = celsius and f = fahrenheit"<<endl; // instruct user which unit option to choose
    cout<<"if you choose c, the value will be converted to celsius "<<endl; // explain what 'c' does
    cout<<"if you choose f, the value will be converted to fahrenheit "<<endl; // explain what 'f' does
    cin >> unit; // read the unit choice from the user
    cout<<"enter the temperature value to be converted"<<endl; // prompt the user for the temperature value
    cin>>t1; // read the numeric temperature value into t1

    if (unit=='c' || unit=='C') // check if user chose 'c' (case-insensitive) to convert to celsius
    {
        t2 = (t1 - 32) * 0.556; // convert Fahrenheit to Celsius using approximate factor (note: exact factor is 5.0/9.0)
        cout<<"The temperature in degree celsius is "<<t2<<endl; // print the converted Celsius temperature
    }
    else if (unit =='f' || unit =='F') // otherwise check if user chose 'f' to convert to fahrenheit
    {
        t2 = (t1 * 1.8) + 32; // convert Celsius to Fahrenheit using factor 1.8
        cout<<"The temperature in degree fahrenheit is "<<t2<<endl; // print the converted Fahrenheit temperature
    }
    else { // if neither 'c' nor 'f' was entered
        cout<<"please enter only above mentioned values to convert temperature unit"<<endl; // tell the user the input was invalid
    }
    
    return 0; // return 0 to indicate the program finished successfully
}