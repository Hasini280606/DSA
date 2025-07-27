// 🚀 Problem: Longest Subarray with sum K(positives)
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array nums of size n and an integer k, find the length of the longest sub-array that sums to k. If no such sub-array exists, return 0.

// 🔗 Problem Link (if on LeetCode/GFG):
//    

// 🎯 Approach: better(Hashing)
// 🕒 Time Complexity: O(nlogn) for map ; O(n) for unordered but if collisions are ther worst case which is rare is O(n^2)
// 🛢️ Space Complexity: O(n) 
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[],int n,int k){
    unordered_map <int,int> mpp;
    int len = 0;
    int prefixSum = 0;
    for(int i=0;i<n;i++){
        prefixSum += arr[i];
        if(prefixSum==k){
            len = max(len,i+1);
        }
        int rem = prefixSum - k;
        if(mpp.find(rem) != mpp.end()){ //O(logn)
            len = max(len,i - mpp[rem]);
        }
        if(mpp.find(prefixSum) == mpp.end()){ // O(logn)
                mpp[prefixSum] = i; // O(logn) // when looped with n becomes nlogn
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

