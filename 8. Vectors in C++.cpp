#include <iostream>
#include <vector> //header file
#include <algorithm> // Required for reverse()
using namespace std;
//Vectors in c++

int singleNumber(vector<int>& nums){
    int ans = 0;

    for(int val: nums) {
        ans ^= val;
    }
    return ans;
}

int linearSearch(vector<int>& arr, int target) {

    for (int val: arr) {
        if (arr[val] == target) {
            return val;
        }
    }
    return -1;
}

void reverseVector(vector<int>& vec) {
    reverse(vec.begin(), vec.end());
}

int main() {
    vector <int> vec; //size = 0
    cout << vec[0];

    vector<int> vec = {1, 2, 3}; //3
    cout << vec[0] << endl;

    vector<int> vec (5,0);
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;

    //Special type of loops in vector (for each loop)
    vector <int> vec (5,0);

    for(int i : vec) {
        cout << i << endl;
    }

    vector <char> vec = {'a', 'b', 'c', 'd', 'e'};

    for(char val : vec) { //for each loop
        cout << val << endl;
    }

    //Vectors Function
    //1.size
    vector <char> vec = {'a', 'b', 'c', 'd', 'e'};
    cout << "size = " << vec.size() << endl;

    //2.push_back
    vector <int> vec;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "size = " << vec.size() << endl;
    for (int val : vec) {
        cout << val << endl;
    }

    //3.pop_back
    vec.pop_back(); //45
    cout << "size = " << vec.size() << endl;
    for (int val : vec) {
        cout << val << endl;
    }

    //4.front
    cout << vec.front() << endl;

    //5.back
    cout << vec.back() << endl;

    //6.at
    cout << vec.at(0) << endl;
    cout << vec.at(1) << endl;
    cout << vec.at(2) << endl;

    //Static vs Dynamic Alloction
    vector <int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    //Question SINGLE NUMBER
    vector <int> nums = {4, 1, 2, 1, 2};

    cout << "Single Number: " << singleNumber(nums);
    
    //Question LINEAR SEARCH
    vector <int> arr = {1, 2, 3, 4, 5};
    int target = 5;

    cout << "Linear Search at Index: " << linearSearch(arr, target);

    //Question REVERSE AN VECTOR
    vector <int> vec = {1, 2, 3, 4, 5};

    cout << "Original vector: ";
    for (int val : vec) {
        cout << val << " ";
    }

    reverseVector(vec);

    cout << "\nReversed vector: ";
    for (int val : vec) {
        cout << val << " ";
    }
    return 0;
}
