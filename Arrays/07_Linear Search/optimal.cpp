// 🚀 Problem: Linear Search
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given an array of integers nums and an integer target, find the smallest index (0 based indexing) where the target appears in the array. If the target is not found in the array, return -1

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win&utm_source=youtube
//
// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> arr,int target){
    int n = arr.size();
    int result = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            result = i;
            break;
        }
    }
    return result;
}


int main(){
    vector <int> nums;
    int n;
    cout << "Enter size of the array: ";
    cin >> n;

    int target;
    cout << "Enter the target: ";
    cin >> target;

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

    int index = linearSearch(nums,target);
    cout << "smallest index where the target appears : " << index;
    

    return 0;
}
