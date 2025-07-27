// 🚀 Problem: Find the Second Largest ELement in the Array
// 📌 Category: Arrays
// 📝 Problem Statement:
//     Given an array of N integers, find and return the second largest element in the array.if the second largest element does not exist then return -1.
//
// 🔗 Problem Link (if on LeetCode/GFG):
//     https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_medium=collab_striver_ytdescription&utm_campaign=second-largest&utm_source=youtube
//
// 🎯 Approach: Brute
// 🕒 Time Complexity: O(NlogN +N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;


int secLargest(vector <int> nums){
    int n = nums.size();
    sort(nums.begin(),nums.end()); // Tc: O(nlogn)
    int largest  = nums[n-1];
    int sLargest;
    for(int i = n-2;i>0;i--){ // Tc : O(n) in worst case
        if(nums[i] != largest){
            sLargest = nums[i];
            break;
        }
    }
    return sLargest;
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

    int ans = secLargest(nums);
    cout << " Second Largest Element: " << ans << endl;

    return 0;
}
