///*
// Assignment Name: M02 Programming Assignment 2.2-Infix to Postfix Conversion using Stack
// 
// Programmer: Hershey Marbeda
// Instructor: Dr. Steven Carver
// Course: CSCI 202-Data Structures and Algorithms
// College: Ivy Tech Community College
// Date: 11.04.2024
// 
// Progam Description:
// Last Date Updated: 11.04.2024
// */
//
//#include <iostream>
//#include <stack>
//#include <string>
//
//using namespace std;
//
//class UserInputConversion
//{
//  private:
//    string infix, postfix;
//    
//    // Function to check the precedence of operators
//    int precedence(char ch)
//    {
//        if (ch == '+' || ch == '-')
//        {
//            return 1;
//        }
//        else if (ch == '*' || ch == '/')
//        {
//            return 2;
//        }
//        else if (ch == '^')
//        {
//            return 3;
//        }
//        else
//        {
//            return -1;
//        }
//    }
//    
//  public:
//    UserInputConversion(): infix(""), postfix("") {} // Default Constructor
//    
//    void getInfix(const string& expression)
//    {
//        infix = expression;
//    }
//    
//    void outputInfix()
//    {
//        cout << "Infix Expression: " << infix << endl;
//    }
//    
//    void outputPostfix()
//    {
//        cout << "Postfix Expression: " << postfix << endl;
//    }
//    
//    
//    // Formula to convert infix to postfix
//    void infixToPostfix()
//    {
//        stack<char> userStack;
//        postfix.clear();
//        
//        for (char ch : infix)
//        {
//            if (isalnum(ch))
//            {
//                postfix += ch;
//            }
//            else if (ch == '(')
//            {
//                userStack.push(ch);
//            }
//            
//            else if (ch == ')')
//            {
//                while (!userStack.empty() && userStack.top() != '(')
//                {
//                    postfix += userStack.top();
//                    userStack.pop();
//                }
//                userStack.pop();
//            }
//            
//            else
//            {
//                while (!userStack.empty() && userStack.top() != '(' && precedence(ch) <= precedence(userStack.top()))
//                {
//                    postfix += userStack.top();
//                    userStack.pop();
//                }
//                userStack.push(ch);
//            }
//        }
//        
//        
//        while (!userStack.empty())
//        {
//            postfix += userStack.top();
//            userStack.pop();
//        }
//    }
//    
//    
//    ~UserInputConversion() {} // Destructor
//    
//};
//
//
//
//int main()
//{
//    // Table Heading
//    cout << string(100, '*') << endl
//        << "\t\t\t\t\t\t\t\tM02-Programming #2.2: Stacks\n"
//        << "\t\t\t\tProgramming Exercise #2: Infix to Postfix Conversion using Stack\n"
//        << string(100, '*') << endl
//        << "Welcome to Infix to Postfix Conversion!\n";
//    
//    
//    // Declaration of Variables
//    UserInputConversion user;
//    string infix;
//    
//    do
//    {
//        cout << "\nEnter an infix expression (enter 'exit' to end the program): ";
//        getline(cin, infix);
//        
//        if (infix == "exit")
//        {
//            cout << "\nThank you for using the program. Goodbye!\n"
//                 << "Submitted by: Hershey Marbeda\n";
//            break;
//        }
//        
//        user.getInfix(infix);
//        user.outputInfix();
//        user.infixToPostfix();
//        user.outputPostfix();
//        
//    } while (infix != "exit");
//    
//    // to make it readble to the screen
//    cout << endl << endl;
//    return 0;
//}
