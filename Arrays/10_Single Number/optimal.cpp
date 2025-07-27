// 🚀 Problem: Num appearing once and other numbers twice
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/single-number/description/

// 🎯 Approach: optimal
// 🕒 Time Complexity: O(n)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int singleNum(int arr[],int n){
    int XOR = 0;
    for(int i=0;i<n;i++){
        XOR ^= arr[i];
    }
    return XOR;
}


int main() {
    int n;
    cout << "Enter the size of array:  ";
    cin >> n;

    int arr[n]; 
    for(int i=0;i<n;i++){
        cout << "Enter the element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Single number: " << singleNum(arr,n);
    return 0;
}
