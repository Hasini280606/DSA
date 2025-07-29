// 🚀 Problem: Maximum subarray sum(Kadane's Algo)
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/maximum-subarray/

// 🎯 Approach: Brute
// 🕒 Time Complexity: O(N^2)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-28


#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[],int n){
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            maxSum = max(maxSum,sum);
        }
    }
    return maxSum;
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
    
    cout << "Maximum sum of sub array: " << maxSubArray(arr,n);
   
    return 0;
}
