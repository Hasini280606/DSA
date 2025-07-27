// 🚀 Problem: Num appearing once and other numbers twice
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/single-number/description/

// 🎯 Approach: brute
// 🕒 Time Complexity: O(nlogn)+O(n/2+1)
// 🛢️ Space Complexity: O(n/2+1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int singleNum(int arr[],int n){
    unordered_map <int,int> mpp;
    int singleNumber;
    for(int i=0;i<n;i++){ 
        mpp[arr[i]]++;
    }

    for(auto it:mpp){
        if(it.second==1){
            singleNumber = it.first;
        }
    }
    return singleNumber;

}


int main() {
    int n;
    cout << "Enter the size of array:  ";
    cin >> n;

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
    cout << "Single number: " << singleNum(arr,n);
    return 0;
}
