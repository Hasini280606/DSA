// 🚀 Problem: Majority Element - 1
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an integer array nums of size n, return the majority element of the array.



// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/majority-element/description/

// 🎯 Approach: Better(Hashing)
// 🕒 Time Complexity: O(NlogN)+O(N)
// 🛢️ Space Complexity: O(N)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-28


#include <bits/stdc++.h>
using namespace std;

int majorityElement(int arr[],int n){
    unordered_map <int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        if(it.second>n/2){
            return it.first;
        }
    }
    return -1;
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
    
    cout << "Majority ele: " << majorityElement(arr,n);
   
    return 0;
}
