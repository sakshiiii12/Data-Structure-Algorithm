#include <iostream>
using namespace std;

//This is the starting point of execution
int main() {
    //1. My First Program

    cout << "HelloWorld" << endl;
    cout << "Hello World\nHello India" << endl;

    //2. Variables and Data Type 
    //Variables:- Containers to store data

    int age = 20;
    char grade = 'A';
    float pi = 3.14f;
    bool isSafe = true;
    double price = 100.99;

    cout << age << endl; //count << sizeof (age) << endl;
    cout << grade << endl; 
    cout << pi << endl; 
    cout << isSafe << endl; //true = 1 and false = 0
    cout << price << endl; 

    //3.Type Conversion [Conversion, Implicit]
    char grade = 'A'; //65

    int value = grade;
    cout << value << endl;

    //Casting [Explicit]
    double price = 100.99;

    int newPrice = (int)price;
    cout << newPrice << endl;


    //4. Input in c++
    int age;

    cout << "Enter the age:";
    cin >> age;

    cout << "Your age is:" << age << endl;

    //5. Arithmetic Operators
    int a = 10, b = 5;
     
    cout << (5/2) << endl;
    cout << (5/(double)2) << endl;
    cout << "Sum = " << (a+b) << endl;
    cout << "Difference = " << (a-b) << endl;
    cout << "Product = " << (a*b) << endl;
    cout << "Division = " << (a/b) << endl;
    cout << "Modulo = " << (a%b) << endl;

    //6. Relational Operators

    cout << (3 < 5) << endl; //True - 1
    cout << (3 > 5) << endl; //False - 0
    cout << (3 <= 3) << endl; //True - 1
    cout << (3 >= 5) << endl; //False - 0
    cout << (3 == 3) << endl; //True - 1
    cout << (3 != 5) << endl; //True - 1

    //7. Logical Operators

    cout << !(3 > 1) << endl; //NOT operator
    cout << ( (3 > 1) || (5 < 3) )<< endl; //OR operator
    cout << ( (3 > 1) && (5 < 3) )<< endl; //AND operator

    //Let's Practice 
    //Sum of 2 Numbers:
    int a, b;

    cout << "Enter the a:";
    cin >> a;

    cout << "Enter the b:";
    cin >> b;

    int sum = a + b;
    cout << "Sum = " << sum << endl;

    //8. Unary Operators
    //i. Increment
    int a = 10;

    int b = a++; //kamm ; update
    cout << "b = " << b << endl; //10
    cout << "a = " <<a << endl; //11

    int b = ++a; //kamm ; update
    cout << "b = " << b << endl; //11
    cout << "a = " <<a << endl; //11

    //ii. Decrement
    int a = 10;

    int b = --a; //kamm ; update
    cout << "b = " << b << endl; //9
    cout << "a = " <<a << endl; //9

    int b = a--; //kamm ; update
    cout << "b = " << b << endl; //10
    cout << "a = " <<a << endl; //9
    
    //Homework:
    int a;
    cout << "Enter the number a:";
    cin >> a;

    int b;
    cout << "Enter the number b:";
    cin >> b;

    cout << "Difference = " << (a-b) << endl;
    cout << "Multiply = " << (a*b) << endl;
    cout << "Division = " << (a/b) << endl;
    cout << "Modulo = " << (a%b) << endl;

    //Lets Practice Question
    //1.Write a Python program to print "Hello, World!"
    cout << "Hello, World!" << endl;

    //2.Write a Python program to take two integers as input and print their sum.
    int num1;
    cout << "Enter the number 1 = ";
    cin >> num1;

    int num2;
    cout << "Enter the number 2 = ";
    cin >> num2;

    cout << "Sum of two integers is = " << (num1+num2) << endl;

    //3.Write a program to calculate the area of a rectangle.
    int length;
    cout << "Enter the length of a rectangle: ";
    cin >> length;

    int width;
    cout << "Enter the width of a rectangle: ";
    cin >> width;

    cout << "Area of a rectangle = " << (length * width) << endl;

    //4.Write a Python program to convert temperature from Celsius to Fahrenheit.
    float celsius = 0;
    float fahrenheit = celsius * (9.0f/5.0f) + 32;

    cout << "Fahrenheit = " << fahrenheit << endl;

    float fahrenheit = 32;
    float celsius = (fahrenheit - 32) * (5.0f/9.0f);

    cout << "Celsius = " << celsius << endl;

    //5.Write a Python program to find the length of a string.
    string str;
    cout << "Enter the string:";
    cin >> str;

    cout << "Length of the string is:" << str.length() << endl;

    //6. Write a Python program to swap two variables without using a temporary variable. 
    int a = 5;
    int b = 10;

    cout << "Before swapping:\na = " << a << "\nb = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping:\na = " << a << "\nb = " << b << endl;
    return 0;
}