//NAME: wdb5u
//DUE DATE: August 29, 2018
//CLASS: Discrete Structures
//ASSIGNMENT: Program 1 primeNumbers
//INSTRUCTIONS: Write a Program in C++ that asks the user for a positive integer. Your program will print a message to the screen indicating
//                  whether or not the number is prime

#include <iostream>
#include "math.h"
using namespace std;

bool checkPrimality(int n){
    //Returning true means the number IS prime

    //Is the number > 1?
    if(n <= 1){
        return false;
    }

    //Is the number 2 or 3?
    else if( (n == 2) || (n == 3) ){
        return true;
    }

    //Is the number divisible by 2 or 3?
    else if( (n % 2 == 0) || (n % 3 == 0) ){
        return false;
    }

    //Determine largest integer to check by calculating the floor of the sqrt of n
    int k = sqrt(n);
    //Iteratively check all numbers up to the square root
    for(int i = 5; i <= k; i += 2){
        if(n % i == 0){
            return false;
        }
    }

    //The number is prime
    return true;

}//end checkPrimality

int main()
{
    //Get number from user
    cout << "Enter your integer (> 1 please): " << endl;
    int n;
    cin>>n;

    //Check Primality of number
    if(checkPrimality(n)){
        cout<<n<<" is prime."<<endl;
    }
    else{
        cout<<n<<" is NOT prime."<<endl;
    }

    return 0;
}//End main
