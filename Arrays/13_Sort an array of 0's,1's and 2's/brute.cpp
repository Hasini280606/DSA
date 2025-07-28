// 🚀 Problem: Sort an array of 
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order. The sorting must be done in-place, without making a copy of the original array.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/two-sum/description/

// 🎯 Approach: brute
// 🕒 Time Complexity: O(2n)
// 🛢️ Space Complexity: O(1) (as hash array is of fixed size)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-28


#include <bits/stdc++.h>
using namespace std;

void sortZeroOneTwo(int arr[],int n){
    int hash[2] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i = 0;i<hash[0];i++){
        arr[i] = 0;
    }
    for(int i = hash[0];i<hash[0]+hash[1];i++){
        arr[i] = 1;
    }
    for(int i = hash[0]+hash[1];i<n;i++){
        arr[i] = 2;
    }
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
    
    sortZeroOneTwo(arr,n);
    cout << "The sorted array: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
