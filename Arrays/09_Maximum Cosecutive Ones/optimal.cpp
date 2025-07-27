// 🚀 Problem: Max Consecutive ones
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given a binary array nums, return the maximum number of consecutive 1's in the array.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/max-consecutive-ones/description/.

// 🎯 Approach: optimal
// 🕒 Time Complexity: O(n)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int maxConse_ones(int arr[],int n){
    int count = 0;
    int max_i = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            max_i = max(count,max_i);
        }
        else{
            count =0;
        }
    }
    return max_i;
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
        cout << arr[i];
    }
    cout << endl;
    cout << "Maximum consecutive 1's : " << maxConse_ones(arr,n);
    return 0;
}
