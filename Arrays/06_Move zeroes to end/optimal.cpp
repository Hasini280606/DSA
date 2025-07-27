// 🚀 Problem: Move zeroes to end
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given an integer array nums, move all the 0's to the end of the array. The relative order of the other elements must remain the same.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/move-zeroes/description/
//
// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(n+count_zeroes)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &arr){
    int n = arr.size();
    int count_zeroes = 0;
    int index = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[index] = arr[i];
            index++;
        }
        else if(arr[i]==0){
            count_zeroes++;
        }
    }

    for(int j=n-1;j>=n-count_zeroes;j--){
        arr[j] = 0;
    }

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

    moveZeroes(nums);

    cout << "Array after moving zeroes to end: ";
    for(auto it:nums){
        cout << it << " ";
    }
    

    return 0;
}
