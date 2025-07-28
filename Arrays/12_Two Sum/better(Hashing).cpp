// 🚀 Problem: Two Sum
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/two-sum/description/

// 🎯 Approach: better(Hashing)
// 🕒 Time Complexity: O(nlogn)
// 🛢️ Space Complexity: O(n)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[],int n,int target){
    unordered_map <int,int> mpp;
    for(int i=0;i<n;i++){
        int a = arr[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more],i};
        }
        mpp[a] = i;
    }
    return {-1,-1};
}


int main() {
    int n;
    cout << "Enter the size of array:  ";
    cin >> n;

    int target;
    cout << "Enter the value of target: ";
    cin >> target;

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
    
    vector<int> sol = twoSum(arr,n,target);
    for(auto it:sol){
        cout << it << " ";
    }
    return 0;
}
