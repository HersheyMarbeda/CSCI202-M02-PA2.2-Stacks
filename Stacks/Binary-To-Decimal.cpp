/*
    Assignment Name: M02 Programming Assignment 2.2-Binary to Decimal Conversion using Stack
    
    Programmer: Hershey Marbeda
    Instructor: Dr. Steven Carver
    Course: CSCI 202-Data Structures and Algorithms
    College: Ivy Tech Community College
    Date: 11.04.2024
 
    Progam Description:
    Last Date Updated: 11.04.2024
 */

#include <iostream>
#include <stack>
#include <cmath>

using namespace std;

// Function to convert binary to decimal using stack
int BinaryToDecimal(const string& binary)
{
    // Declaration of Variables
    stack<int> binaryStack; // stack to store the binary number
    int decimal = 0;        // variable to store the decimal number
    int power = 1;          // variable to store the power of 2
    
    // Push the binary digits onto the stack
    for (size_t i = 0; i < binary.length(); ++i)
    {
        binaryStack.push(binary[i] - '0'); // Convert char to int and push to stack
    }

    // Poping the binary number from stack and converting to decimal
    while (!binaryStack.empty())
    {
        int number = binaryStack.top(); // getting the top element of stack
        binaryStack.pop();          // poping the top element of stack
        
        // Formula to convert binary to decimal
        decimal += number * power;      // converting binary to decimal
        power *= 2;                    // incrementing the power of 2
    }
    
    return decimal;
}


int main()
{
    // Table Heading
    cout << string(100, '*') << endl
         << "\t\t\t\t\t\t\t\tM02-Programming #2.2: Stacks\n"
         << "\t\t\t\tProgramming Exercise #1: Binary to Decimal Conversion using Stack\n"
         << string(100, '*') << endl
         << "Welcome to Binary to Decimal Conversion!\n";
    
    
    // Declaration of Variables
    string userBinary;
    int decimal;
    
    do
    {
        if (userBinary == "exit")
        {
            cout << "\nThank you for using the program!\n"
                 << "Submitted by: Hershey Marbeda\n\n\n";
            break;
        }
        
        cout << "\nEnter a binary number (enter 'exit' to exit the program): ";
        cin >> userBinary;
        
        // Input validation
        while ((userBinary < "0") || (cin.fail()))
        {
            cin.clear();
            cin.ignore();
            cout << "Invalid input. Please enter a positive binary number: ";
            cin >> userBinary;
        }
        
        // to call the function and store the result to decimal
        decimal = BinaryToDecimal(userBinary);
        cout << "\nDecimal Value: " << decimal << endl
             << "Binary Value: "    << userBinary << endl;
        
    } while (true);
        
    // To make it readable to screen
    return 0;
}
