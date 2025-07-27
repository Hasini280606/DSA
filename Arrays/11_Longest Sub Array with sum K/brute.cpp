// 🚀 Problem: Longest Subarray with sum K(positives)
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

// 🔗 Problem Link (if on LeetCode/GFG):
//    

// 🎯 Approach: brute
// 🕒 Time Complexity: O(n^2)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[],int n,int k){
    int len = 0;
    
    for(int i=0;i<n;i++){
        int s = 0;
        for(int j=i;j<n;j++){
            s += arr[j];
            if(s==k){
                len = max(len,j-i+1);
            }
        }
    }
    return len;
}


int main() {
    int n;
    cout << "Enter the size of array:  ";
    cin >> n;

    int k;
    cout << "Enter the value of k: ";
    cin >> k;

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
    cout << "length of longest subarray with sum k: " << longestSubarray(arr,n,k);
    return 0;
}
