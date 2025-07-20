#include <iostream>
using namespace std;

//Homework
//1.Figure out how to find if a number is power of 2 
bool isPower2(int n) {
    if (n <= 0) {
         return false;
    }

    while (n % 2 == 0) {
        n = n / 2;
    }
    return n == 1;
}

bool isPower2(int n) {
    return n > 0 && (n & (n-1)) == 0;
}

//2.WAF to reverse an integer n
int reverseNum(int n) {
    int reversed = 0;

    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }
    return reversed;
}

int main () {
    //Bitwise Operators

    //1.AND Bitwise Operator
    int a = 3, b = 7;
    cout << (a & b) << endl;

    //2.OR Bitwise Operator
    cout << (a | b) << endl;

    //3.XOR Exclusive OR
    cout << (a ^ b) << endl;

    //4.Left Shift Operator
    cout << (4 << 1) << endl;
    cout << (10 << 2) << endl;

    //5.Right Shift Operator
    cout << (10 >> 1) << endl;
    cout << (8 >> 2) << endl;

    //6.Operator Precendence
    cout << (5 - (2 * 6)) << endl;

    cout << ((5 - 2 )* 6) << endl; // to overwrite the rules 

    cout << (4 * 5 % 2) << endl; // associativity rules

    //7.Data Type Modifiers
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;

    unsigned int x = -10;
    cout << x << endl;

    int num;
    cout << "Enter the number: ";
    cin >> num;

    if (num/2)

    int num;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Power od 2: " << isPower2(num) << endl;

    cout << "Reversed Integer: " << reverseNum(num) << endl;
    return 0;
}