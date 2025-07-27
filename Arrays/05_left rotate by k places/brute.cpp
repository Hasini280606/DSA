// 🚀 Problem: Left array by K places
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/rotate-array/description/(right rotate this is)
//
// 🎯 Approach: Brute
// 🕒 Time Complexity: O(n+k)
// 🛢️ Space Complexity: O(k)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>&arr,int k){
    int n = arr.size();
    if (k>=n) k = k%n;
    vector<int> temp;
    for(int i =0;i<k;i++){
        temp.push_back(arr[i]);
    }

    //shifting the remaining ele
    for(int i=k;i<n;i++){
        arr[i-k] = arr[i];
    }

    //put back the ele's in temp
    for(int i=n-k;i<n;i++){
        arr[i] = temp[i-(n-k)];
    }
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
