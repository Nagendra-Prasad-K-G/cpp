#include<iostream> // include iostream for std::cout, std::cin, std::endl
#include<ctime>     // include ctime for time() used to seed RNG (srand)

int main() // program entry point
{
    int srand(time(0)); // incorrectly declares an int named 'srand' and initializes it with time(0); intended to seed RNG with srand(time(0))
    int n = rand() % 100; // generate a pseudo-random number in range 0..99 and store in n
   int g,t; // declare g for the user's guess and t for attempt count (uninitialized here)
   std::cout<<"*random number guessing game*"<<std::endl; // print game title
   std::cout<<"guess a number between 1 to 99"<<std::endl; // prompt user for the guess range
   std::cin>>g; // read the first guess into g
   t=1; // initialize attempt counter to 1 (counts the initial guess just read)
   do // start a loop that continues until the correct number is guessed
   {
    if(g>n) // if guess is greater than the secret number
    {
        std::cout<<"guess is too high"<<std::endl; // inform user the guess is too high
        std::cout<<"try again"<<std::endl; // prompt to try again
        std::cin>>g; // read a new guess
        ++t; // increment attempt counter because user made another guess
       
    }
    else if (g<n) // else if guess is less than the secret number
    {
        std::cout<<"guess is too low"<<std::endl; // inform user the guess is too low
        std::cout<<"try again"<<std::endl; // prompt to try again
        std::cin>>g; // read a new guess
        ++t; // increment attempt counter because user made another guess
    }
    else // else guess equals the secret number
    {
        std::cout<<"you guessed it right!"<<std::endl; // congratulate the user
    }
   } while (g!=n); // continue the loop while the guess is not equal to the secret number
   {
    std::cout<<"guessed the number in "<<t<<" attempts"<<std::endl; // after loop, print how many attempts were used
   }
   
   return 0; // exit program with success status
   
}