#include <iostream>
using namespace std;

void changeArr(int arr[], int size) { //Pass by refernce
    cout << "in function\n";

    for (int i=0; i<size; i++) {
        arr [i] = 2 * arr[i];
    }
}

int linearSearch(int arr[], int size, int target) { //Linear search
    for (int i=0; i<size; i++) {
        if (arr[i] == target) { //FOUND
            return i;
        }
    }
    return -1; //Not Found
}

void reverseArray(int arr[], int size) { //reverse array
    int start = 0, end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

//Homework
int sumOfArray(int arr[], int size) { 
    int sum = 0;

    for (int i=0; i<size+1; i++) {
        sum += arr[i];
    }
    return sum;
}

int productOfArray(int arr[], int size) {
    int product = 1;

    for (int i=0; i<size+1; i++) {
        product *= arr[i];
    }
    return product;
}

void swapMaxMin(int arr[], int size) {
    int minIndex = 0;
    int maxIndex = 0;

    for (int i=1; i<size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    swap(arr[minIndex], arr[maxIndex]);

    cout << "Array after swapping min and max:" << endl;
    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printUnique (int arr[], int size) {
    for (int i=0; i<size; i++) {
        int count = 0;
        for (int j=0; j<size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void printIntersection(int arr1[], int size1, int arr2[], int size2) {
    cout << "Intersection of arrays: ";

    for (int i=0; i<size1; i++) {
        for (int j=0; j<size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                arr2[j] = -1;
                break;
            }
        }
    }
    cout << endl;
}

int main() {
    //Array Data Structure

    int marks [5] = {98,99,100,86,75};
    cout << marks[0] << endl;

    marks[0] = 97;
    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    double price [] = {98.99, 105.90, 30.00}; //3

    //0 to size-1
    cout << marks[-1] << endl;

    cout << sizeof(marks) << endl; //total bytes occupied by the array
    cout << sizeof(marks) / sizeof(int) << endl; //size of an array

    //Loops in array
    int marks[5] = {99, 100, 54, 36, 88};
    int size = 5;

    for (int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }

    //Input an array
    int size = 5; 
    int marks[size];

    for (int i=0; i<size; i++) {
        cin >> marks[i];
    }
    
    for (int i=0; i<size; i++) {
        cout << marks[i] << endl;
    }
    
    //Ques.Find the smallest / largest in array
    int arr[5] = {89,79,66,10,45};
    int size = 5;

    int smallest = INT16_MAX;
    int largest = INT16_MIN;

    for (int i=0; i<size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    cout << "Smallest Number In Array: " << smallest << endl;
    cout << "Largest Number In Array: " << largest << endl;

    //Homework
    //Find the index of largest and smallest

    int minIndex = -1;
    int maxIndex = -1;

    for (int i = 0; i < size; i++) {
        if(arr[i] < smallest) {
            smallest = arr[i];
            minIndex = i;
        }
        if (arr[i] > largest) {
            largest = arr[i];
            maxIndex = i;
        }
    }
    cout << "Smallest Number In Array Index: " << minIndex << endl;
    cout << "Largest Number In Array Index: " << maxIndex << endl;

    //Pass by Reference (It will change the original data)
    int arr [] = {1, 2, 3};

    changeArr(arr, 3);

    cout << "in main]-\n";
    for (int i=0; i<3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Linear Search Algoritum
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;
    int target = 5;

    cout << linearSearch(arr, size, target) << endl;

    //Reverse Array
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = 7;

    reverseArray(arr, size);

    for (int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    //Homework
    //1.WAF to calculate sum & product of all numbers in array.
    int arr[] = {1, 2, 3, 4, 5};
    int size = 4;

    cout << "Sum of Array: " << sumOfArray(arr, size) << endl;
    cout << "Product of Array: " << productOfArray(arr, size) << endl;

    //2.WAF to swap the max & min number of an array.
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    swapMaxMin(arr, size);

    //3.WAF to print all the unique values in an array
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = 7;

    cout << "Unique Values In Array: ";
    printUnique(arr, size);

    //4.WAF to print intersection of 2 arrays.
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size1 = 5;
    int size2 = 5;

    printIntersection(arr1, size1, arr2, size2);
    return 0;
}
