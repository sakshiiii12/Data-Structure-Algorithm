#include <iostream>
using namespace std;

int main() {
    //1. Conditional statements

    int n = -45;

    if(n >= 0) {
        cout << "n is positive";
    } else {
        cout << "n is negative";
    }

    int age;
    cout << "Enter the age of a person: ";
    cin >> age;

    if(age >= 18) {
        cout << "The person can vote";
    } else {
        cout << "The person can't vote";
    }

    int number;
    cout << "Enter the number: ";
    cin >> number;

    if(number%2==0) {
        cout << "The number is even";
    } else {
        cout << "The number is odd";
    }

    int marks;
    cout << "Enter the marks: ";
    cin >> marks;

    if (marks >= 90) {
        cout << "A grade";
    } else if (marks >=80 && marks < 90) {
        cout << "B garde";
    } else {
        cout << "C garde";
    }

    //Question Find character lowercase or uppercase
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if(ch >= 'a' && ch <= 'z') {
        cout << "Lowercase character";
    } else {
        cout << "Uppercase character";
    }

    //OR
    if(ch >= 65 && ch <= 90) {
        cout << "uppercase";
    } else {
        cout << "lowercase";
    }

    //2. Ternary Statement
    int n = 45;

    cout << (n >= 0 ? "Positive" : "Neagtive") << endl;

    //Ques:- write a program to find the largest among three numbers. 
    int num1, num2, num3;
    cout << "Enter the number 1:";
    cin >> num1;

    cout << "Enter the number 2:";
    cin >> num2;

    cout << "Enter the number 3:";
    cin >> num3;

    if ((num1 > num2) && (num1 > num3)) {
        cout << "Number 1 is larger:" << num1;
    } else if ((num1 < num2) && (num2 > num3)) {
        cout << "Number 2 is larger:" << num2;
    } else if ((num3 > num1) && (num3 > num2)){
        cout << "Number 3 is larger:" << num3;
    } else {
        cout << "There is s tie among the numbers";
    }

    //3. Loop
    //i.While Loop
    int count = 1;
    while (count <= 5) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    int n = 20;
    int count = 1;
    while (count <= n) {
        cout << count << " ";
        count++;
    }
    cout << endl;

    //ii.For Loop
    int n = 3;

    for(int i=1; i<=n; i++) {
        cout << i << " ";
    }
    cout << endl;

    //Ques. Sum of numbers from 1 to n
    int num = 10; //using for loop
    int sum = 0;

    for(int i=1; i<=num; i++) {
        sum += i;
    }
    cout << "Sum = " << sum << endl;

    int num = 10; //using while loop
    int sum = 0;
    int i = 1;

    while (i <= num) {
        sum += i;
        i++;
    }
    cout << "Sum = " << sum << endl;

    //5.Break 
    int num = 10; //using for loop
    int sum = 0;

    for(int i=1; i<=num; i++) {
        sum += i;
        if (i==5) {
            break;
        }
    }
    cout << "Sum = " << sum << endl;

    //Ques.Sum of all Odd Numbers from 1 to N
    int num = 10;
    int sum = 0;
    int i = 1;

    for (int i=1; i<=num; i++) {
        if (i%2!=0) {
            sum+=i;
        }
    }
    cout << "Sum Of Odd Number Using For Loop: " << sum << endl;

    while (i <= num) {
        if (i % 2 != 0) {
            sum = sum + i;
       
        } i++;
    }
    cout <<"Sum of Odd Number Using For Loop:" << sum << endl;
    
    //Homework Ques.Sum of all Even Numbers from 1 to N
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum = 0;
    int i = 1;

    while (i <= num) {
        if (i % 2 == 0) {
            sum = sum + i;

        }i++;
    }
    cout << "Sum of all even numbers using while loop: " << sum << endl;

    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    cout << "Sum of all even numbers using For loop: " << sum << endl;

    //6. do-while loop
    do {
        cout << "hello world!\n";
    }while (3 > 5);

    int n = 10;
    int i = 1;

    do {
        cout << i << " ";
        i++;
    } while (i <=n);
    cout << endl;

    //Ques. Check if a number is prime or not
    int num = 7;
    bool isPrime = true;

    for (int i = 2; i <= num -1; i++) { //i * i <= num
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "Prime number";
    } else {
        cout << "Non Prime number";
    }

    int num;
    cout << "Enter the number:";
    cin >> num;

    bool isPrime = true;
    int i = 2;

    while (i*i<=num) {
        if (num%i==0) {
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime==true) {
        cout << "Prime Number";
    }else {
        cout << "Non Prime Number";
    }

    //7. Nested Loops :- Loop inside loop
    int n = 5;
    for (int i = 1; i <= n; i++) {
        int m = 10;
        for (int j = 1; j <= m; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;
    
    //Homework
    //1.Sum of all numbers from 1 to N which are divisible by 3
    int num;
    cout << "Enter the number:";
    cin >> num;

    int sum = 0;
    int i = 1;

    while (i<=num) {
        if (i%3==0) {
            sum = sum + i;
        }
        i++;
    }
    cout <<"Sum of number divisible by 3 is = " << sum << endl;

    int sum = 0;
    for (int i=1; i<=num; i++) {
        if (i%3==0) {
            sum = sum + i;
        }
    }
    cout <<"Sum of number divisible by 3 is = " << sum << endl;

    //2. Print the factorial of a number N
    int num;
    cout << "Enter the number:";
    cin >> num;

    int fact = 1;
    int i = 1;

    while (i<=num) {
        fact = fact * i;
        i++;
    }
    cout << "Factorial of n number is = " << fact << endl;

    for (int i=1; i<=num; i++) {
        fact = fact * i;
    }
    cout << "Factorial of n number is = " << fact << endl;

    //3. Write a program that reads an integer and prints its multiplication table.
    int table = 5;
    int i = 1;

    while (i<=10) {
        cout << table << " x " << i << " =" << (table*i) << endl;
        i++;
    }

    int table = 5;

    for (int i=1; i<=10; i++) {
        cout << table << " x " << i << " =" << (table*i) << endl;
    }

    //4. Write a Python program to print all prime numbers between 1 and 100.
    for (int i=2; i<=100; i++) {
        bool isPrime = true;

        for (int j=2; j<=i/2; j++) {
            if(i%j==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime) {
            cout << i << endl;
    }
    }

    //5.Write a Python program to print all prime numbers between 1 and 100. 
    cout << "Prime Numbers Between 1 to 100 are : ";
    
    for (int i = 2; i <= 100; i++) {
        bool isPrime = true;
        
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    //6. Write a program to check if a year is a leap year.
    int year;
    cout << "Enter the year: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << "Leap Year";
    }else {
        cout << "Not a Leap Year";
    }

    //7. Write a Python program to find the greatest common divisor (GCD) of two numbers. 
    int a = 12, b = 18;
    int gcd = 1;

    for (int i = 1; i <= a; i++) {
        if ((a % i == 0) && (b % i == 0)) {
            gcd = i;
        }
    }
    cout << "GCD of two numbers: " << gcd << endl;

    //8. Write a Python program to print the sum of all numbers in a given range. 
    int start;
    cout << "Enter the starting range: ";
    cin >> start;

    int end;
    cout << "Enter the ending range: ";
    cin >> end;

    int sum = 0;

    for (int i = start; i <= end; i++) {
        sum = sum + i;
    }
    cout << "Sum of all numbers in a given range: " << sum << endl;

    //9. Write a program to find whether a given number is Armstrong or not.
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int temp = num;
    int total = 0;

    while (temp != 0) {
        int rem = temp % 10;
        total += rem * rem * rem;
        temp /= 10;
    }
    if (total == num) {
        cout << "Its an Armstrong Number" << endl;
    }else {
        cout << "Its not a Armstrong Number" << endl; 

    //10. Write a Python program to print all even numbers between 1 and 50.
    for (int i = 1; i<=50; i++) {
        if (i % 2 == 0) {
            cout << i << " " << endl;
        }
    }
    return 0;
}