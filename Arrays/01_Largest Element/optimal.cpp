// 🚀 Problem: Find the Largest Element in an Array
// 📌 Category: Arrays
// 📝 Problem Statement:
//     Given an array of N integers, find and return the largest element.
//
// 🔗 Problem Link (if on LeetCode/GFG):
//     https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array&utm_source=youtube
//
// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;


int largestEle(vector<int> arr){
    int n = arr.size();
    int largest = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
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

    int ans = largestEle(nums);
    cout << "Largest Element: " << ans << endl;

    return 0;
}
