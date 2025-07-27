// 🚀 Problem: Find missing number
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.


// 🔗 Problem Link (if on LeetCode/GFG):
//    Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// 🎯 Approach: optimal_2
// 🕒 Time Complexity: O(n)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int missingNum(int arr[], int n) {
    int XOR1 = 0;
    for(int i=1;i<=n;i++){
        XOR1 ^= i;
    }
    int XOR2 = 0;
    for(int i=0;i<n-1;i++){
        XOR2 ^= arr[i];
    }
    return XOR1^XOR2;
}

//MORE BETTER
int missingNum(int arr[],int n){
    int XOR1 = 0;
    int XOR2 = 0;
    for(int i=0;i<n-1;i++){
        XOR2 ^= arr[i];
        XOR1 ^= (i+1);
    }
    XOR1 ^= n;
    return XOR1^XOR2;
}

int main() {
    int n;
    cout << "Enter the max number (range is 0 to n): ";
    cin >> n;

    int arr[n]; 
    cout << "Enter " << n << " elements from range 0 to " << n << " (one missing):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = missingNum(arr, n);
    cout << "The missing number is: " << missing << endl;
}
