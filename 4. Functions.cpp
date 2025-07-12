#include <iostream>
using namespace std;

//Functions Definition
int printHello() {
    cout << "hello\n";
    return 3;
}

//Sum of 2 number
int sum(int a, int b) {
    int s = a + b;
    return s;
}

//Min of 2 number
int minNum(int a, int b) { //Parameters
    if (a < b) {
        return a;
    }else {
        return b;
    }
}

//Ques Calculate the sum of numbers from 1 to n
int sumOfNum(int n) {
    int sum = 0;
    for (int i=1; i<=n; i++) {
        sum = sum + i;  
    }
    return sum;
}

//Ques Calculate N factorial
int factOfNum(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

//pass by values
int sum(int a, int b) {
          return a+b;
}

int changeX (int x) {
    x = 2*x;
    cout << "x = " << x << endl;
}

//Ques. Calculate sum of digits of a number.
int digitSum(int num) {
    int sum_of_digits = 0;
    int i = 1;
    while (num > 0) {
        int rem = num%10;
        num = num/10;
        sum_of_digits += rem;
    }
    return sum_of_digits;
}

//Ques. Calculate nCr binomial coefficient for n & r
int factOfNum(int n) {
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
   int fact_n = factOfNum(n);
   int fact_r = factOfNum(r); 
   int fact_nmr = factOfNum(n-r); 

   return fact_n/ (fact_r * fact_nmr);
}

//Homwork questions
//Que1. WAF to check if a number is prime or not
bool checkPrime(int num) {
    int count = 0;
    
    for (int i=1; i<=num; i++) {
        if (num%i==0) {
            count++;
        }
    }

    if (count == 2) {
        return true;
    } else {
        return false;
    }    

}

//Que2.WAF to print all prime numbers from 1 to N
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i=2; i*i<=num; i++) {
        if (num%i==0) {
            return false;
        }
        return true;
    }
}
void printPrimes(int N) {
    cout << "Prime numbers from 1 to " << N << " are: ";
    for (int i = 1; i <= N; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

//Que3.WAF to print nth fibonacci series.
int fibSeries(int n) {
    int a = 0, b = 1;

    cout << "Fibonacci series up to " << n << " terms:" << endl;

    for (int i=1; i<=n; i++) {
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
}

//4.Write a function to check if a number is a perfect square.
bool checkPerfectSquare (int num) {
    if (num < 0) {
        return false;
    }
    int i = 0;
    while (i * i <= num) {
        if (i * i == num) {
            return true;
        }
        i++;
    }
    return false;
}

//5.Write a function to convert a decimal number to binary.
void decimalToBinary(int num) {
    if (num == 0) {
        cout << "Binary: 0" << endl;
        return;
    }

    string binary = "";

    while (num > 0) {
        int rem = num % 2;
        binary = to_string(rem) + binary;
        num /= 2;
    }
    cout << "Binary: " << binary << endl;
}

int main() {
    //Function call / invoke

    cout << printHello() << endl;

    cout << "Sum of two numbers: " << sum(10,5) << endl;
    cout << sum(30,2) << endl; // arguments

    cout << "Minimum of two numbers: " << minNum(10,50) << endl;
    cout << "Minimum of two numbers: " << minNum(100,50) << endl;

    cout << "Sum of numbers: " << sumOfNum(10) << endl;

    cout << "Factorial of a number: " << factOfNum(5) << endl;

    int x = 5, y = 4;
    cout << sum(5,4) << endl;

    int x = 5;
    changeX(x);
    cout << "x = " << x << endl;

    cout << "Sum of the digits: " << digitSum(123) << endl;

    int n = 6, r = 3;
    cout << nCr(n,r) << endl;

    cout << "Is the number is prime: " << checkPrime(17) << endl;

    int n;
    cout << "Enter a number: ";
    cin >> n;   
    printPrimes(n);

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    fibSeries(n);

    int number;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (checkPerfectSquare(number)) {
        cout << number << " is a perfect square." << endl;
    } else {
        cout << number << " is not a perfect square." << endl;
    }

    int number;
    cout << "Enter a decimal number: ";
    cin >> number;

    decimalToBinary(number);
    
    return 0;
}