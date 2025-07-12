#include <iostream>
using namespace std;

int main() {
    //Patterns
    //Square Pattern Easy with numbers n = 4
    // * * * *
    // * * * *
    // * * * *
    // * * * *
    int n = 4;
    for(int i=0; i<=n-1; i++) {
        for (int j=0; j<=n-1; j++) {
            cout << "*" << " ";  
        }
        cout << endl;
    }

    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    int n = 4;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            cout << j << " ";
        }
        cout << endl;
    } 

    // A B C D
    // A B C D
    // A B C D
    // A B C D
    int n = 4; //6
    for (int i=0; i<n; i++) {// outer loop
        char ch = 'A';
        for (int j=0; j<n; j++) { // inner loop = line start
            cout << ch << " ";
            ch = ch + 1; // char + int
        }
        cout << endl;
    }

    // 1 2 3
    // 4 5 6
    // 7 8 9
    int n = 3;
    int num = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    cout << "After pattern: " << num << endl; //10

    //Homework ques
    //A B C
    //D E F
    //G H I
    int n = 3;
    char ch = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    //Triangle Pattern Easy with stars n = 4
    // *
    // * *
    // * * *
    // * * * *
    int n = 4;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    //1
    //2 2
    //3 3 3
    //4 4 4 4
    int n = 4;
    int num = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout << i+1 << " ";
            num++;
        }
        cout << endl;
    }

    //Homework ques
    //A
    //B B
    //C C C
    //D D D D
    //E E E E E
    int n = 5;
    char ch = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << ch << " ";
        }
        cout << endl;
        ch = ch + 1;
    }

    //1
    //1 2
    //1 2 3
    //1 2 3 4
    int n = 4;
    for (int i=0; i<n; i++) {
        for (int j=1; j<=i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    //Reverse Triangle Pattern
    //1
    //2 1
    //3 2 1
    //4 3 2 1
    int n = 4;
    for (int i=0; i<n; i++) {
        for (int j=i+1; j>0; j--) {
            cout << j << " ";
        }
        cout << endl;
    }

    //A
    //B A
    //C B A
    //D C B A
    int n = 4;
    for (int i=0; i<n; i++) {
        char ch = 'A' + i;
        for (int j=0; j<=i; j++) {
            cout << ch << " ";
            ch--;
        }
        cout << endl;
    }

    //Floyd's Triangle Pattern with number n = 4
    //1
    //2 3
    //4 5 6
    //7 8 9 10
    int n = 4;
    int num = 1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    //Homework ques
    //A
    //B C
    //D E F
    //G H I J
    int n = 4;
    char ch = 'A';
    for (int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    //Inverted Triangle Pattern reverse numbers n = 4
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4
    int n = 4;

    int num = 1;
    for (int i=0; i<n; i++) {
        //space
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        //nums
        for (int j=0; j<n-i; j++) {
            cout << (i+1);
        }
        cout << endl;
    }

    //Homework ques
    //A A A A
    //  B B B
    //    C C
    //      D
    int n = 4;
    char ch = 'A';
    for (int i=0; i<n; i++) {
        //space
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        //Char
        for (int j=0; j<n-i; j++) {
            cout << ch;
        }
        cout << endl;
        ch++;
    }

    //Pyramid Pattern
    //         1
    //      1  2  1
    //   1   2  3  2  1
    // 1   2   3  4  3  2  1   
    int n = 4;
    for (int i=0; i<n; i++) {
        //spaces ; n-i-1
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        //num1 = i+1
        for (int j=1; j<=i+1; j++) {
            cout << j ;
        }
        //num2
        for (int j=i; j>=1; j--) {
            cout << j ;
        }
        cout << endl;
    }

    //Hollow Diamond Pattern n = 4
    int n = 4;
    // //top
    for (int i=0; i<n; i++) {
        // spaces
        for(int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        cout << "*";
        if(i!=0) {
            //spaces
            for(int j=0; j<2*i-1; j++) {
            cout << " ";
        }
        cout << "*";
        }
        cout << endl;
    }
    // //bottom
    for (int i=0; i<n-1; i++) {
        //spaces
        for (int j=0; j<i+1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != n-2) {
            //spaces
            for(int j=0; j<2*(n-i)-5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    //Homework ques
    //Butterfly Pattern

    int n = 5;
    // // Upper Half
    for (int i = 1; i <= n; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // // Lower Half
    for (int i = n; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
    //     // Spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
    //     // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
