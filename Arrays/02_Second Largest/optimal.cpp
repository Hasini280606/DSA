// 🚀 Problem: Find the Second Largest ELement in the Array
// 📌 Category: Arrays
// 📝 Problem Statement:
//     Given an array of N integers, find and return the second largest element in the array.if the second largest element does not exist then return -1.
//
// 🔗 Problem Link (if on LeetCode/GFG):
//     https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_medium=collab_striver_ytdescription&utm_campaign=second-largest&utm_source=youtube
//
// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;


int secLargest(vector <int> arr){
    int n = arr.size();
    int largest = arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    return slargest;
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
