// 🚀 Problem: Left array by K places
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/rotate-array/description/(right rotate this is)
//
// 🎯 Approach: Brute
// 🕒 Time Complexity: O(2n)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>&arr,int k){
    int n = arr.size();
    if(k>=n) k=k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
}



int main(){
    vector <int> nums;
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int k;
    cout << "Enter k: ";
    cin >> k;

    nums.resize(n);


    for(int i=0;i<n;i++){
        cout << "Enter element" << i+1 << ": ";
        cin >> nums[i];
    }

    cout << "Array: ";
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }
    cout << endl;

    
    leftRotate(nums,k);

    cout << "Array after left rotating by " << k << " places: ";
    for(int i=0;i<n;i++){
        cout << nums[i] << " ";
    }

    return 0;
}
