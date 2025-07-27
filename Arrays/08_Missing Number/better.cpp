// 🚀 Problem: Find missing number
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given an integer array of size n containing distinct values in the range from 0 to n (inclusive), return the only number missing from the array within this range.


// 🔗 Problem Link (if on LeetCode/GFG):
//    Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

// 🎯 Approach: Better(Hashing)
// 🕒 Time Complexity: O(2n)
// 🛢️ Space Complexity: O(n)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int missingNum(int arr[],int n){
    int hash[n+1] = {0};
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }

    for(int i=0;i<n+1;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cout << "Enter the n: ";
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout << "Enter the element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array : ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int num = missingNum(arr,n);
    cout << "The missing num is : " << num;
}
   
