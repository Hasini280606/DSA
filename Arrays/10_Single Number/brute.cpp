// 🚀 Problem: Num appearing once and other numbers twice
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array of nums of n integers. Every integer in the array appears twice except one integer. Find the number that appeared once in the array.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/single-number/description/

// 🎯 Approach: brute
// 🕒 Time Complexity: O(n^2)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

int singleNum(int arr[],int n){
    for(int i=0;i<n;i++){
        int num = arr[i];
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j] == num){
                count++;
            }
        }
        if(count==1) return num;
    }

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
