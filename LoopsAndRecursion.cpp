#include <iostream>
#include <string>
using namespace std;

// Function with 2 inputs
int multiplyNumbers(int a, int b)
{
    return a * b;
}

// Recursion: Sum of n and all smaller numbers
int recursiveFunc(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + recursiveFunc(n - 1);
}

// Split String: There are several ways
int splitString(string inputStr)
{
    // 1. strtok() 
    /* split string into pieces by delimiter 
    - only print the first part before the first delimiter if many */
    // char str[100]; // declare the size of string
    // cout << " Enter a string: " << endl;
    // cin.getline(str, 100); // use getline() function to read a string from input stream
    char *ptr;              // declare a ptr pointer
    ptr = strtok(inputStr, ","); // use strtok() function to separate string using comma (,) delimiter.
    cout << " \n Split string using strtok() function: " << ptr << " ... " << strtok(NULL, ",") << endl;
    // use while loop to check ptr is not null
    // while (ptr != NULL)
    // {
    //     cout << ptr << endl; // print the string token
    //     ptr = strtok(NULL, ",");
    // }
    return 0;
    // 2. split()
    // 3. std::getline()
    // 4. find()
    // 5. substr()
}
// In C++, we have 3 types of loops: While, For and Do ... while SIMILAR to Java
int main()
{
    int a = 0;

    // While loop
    // SYNTAX: while(condition) {statement(s);}
    while (a < 10)
    {
        a++;
    }
    cout << "value of while_loop: " << a << endl;

    // For loop
    /* SYNTAX:  for ( init; condition; increment ) {
                    statement(s);
                } */
    string initial = "";
    for (int b = 10; b < 20; b++)
    {
        initial += to_string(b) + " ";
    }
    cout << "value of for_loop: " << initial << endl;

    // Do... while
    /* SYNTAX:  do {
                    statement(s);
                }
                while( condition ); */
    int c = 3;
    do
    {
        cout << "run do_while at least once" << endl;
    } while (c < 2);

    // Call function 2 input
    cout << "value of multiplication: " << multiplyNumbers(23, 3) << endl;

    // Recursive function
    cout << "value of recursion: " << recursiveFunc(4) << endl;

    // Split string
    splitString("HMM, wewegw");
}