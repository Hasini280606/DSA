// 🚀 Problem: Check if the array is sorted
// 📌 Category: Arrays
// 📝 Problem Statement:
//     Given an array nums of n integers, return true if the array nums is sorted in non-decreasing order or else false.
//
// 🔗 Problem Link (if on LeetCode/GFG):
//     https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?utm_medium=collab_striver_ytdescription&utm_campaign=check-if-an-array-is-sorted&utm_source=youtube
//
// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;


bool isSorted(vector<int>&arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]) return false;
    }
    return true;
}


int main(){
    vector <int> nums;
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

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

    bool result = isSorted(nums);
    if(result==0) cout << "false";
    else cout << "true";
    

    return 0;
}
