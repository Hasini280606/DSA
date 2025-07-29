// 🚀 Problem: Maximum subarray sum(Kadane's Algo)
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an integer array nums, find the subarray with the largest sum and return the sum of the elements present in that subarray.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/maximum-subarray/

// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-28


// KADANE'S ALGORITHM
#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[],int n){
    int maxSum = INT_MIN;
    int sum = 0;
    int ansStart = -1;
    int ansEnd = -1;
    int start;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum=0) start = i;
        if(sum>maxSum){
            maxSum = sum;
            ansStart = start;
            ansEnd = i; // if in case we wanna print the subarray itself then this tracks the indices of the start and end of the subarray we need
        }

        if(sum<0){
            sum = 0;
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
