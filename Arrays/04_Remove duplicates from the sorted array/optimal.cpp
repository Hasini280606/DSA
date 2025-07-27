// 🚀 Problem: Remove duplicates from the sorted array
// 📌 Category: Arrays
// 📝 Problem Statement:
   /*Given an integer array nums sorted in non-decreasing order, remove all duplicates in-place so that each unique element appears only once. Return the number of unique elements in the array.If the number of unique elements be k, then,

    Change the array nums such that the first k elements of nums contain the unique values in the order that they were present originally.
    The remaining elements, as well as the size of the array does not matter in terms of correctness.


    An array sorted in non-decreasing order is an array where every element to the right of an element is either equal to or greater in value than that element.*/

// 🔗 Problem Link (if on LeetCode/GFG):
//     https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
//
// 🎯 Approach: Brute
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;


int removeDuplicates_Unique_ele(vector<int> arr){
    int n = arr.size();
    int i=0;
    for(int j=i;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
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

    cout << removeDuplicates_Unique_ele(nums);
    

    return 0;
}
