// 🚀 Problem: Majority Element - 1
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an integer array nums of size n, return the majority element of the array.



// The majority element of an array is an element that appears more than n/2 times in the array. The array is guaranteed to have a majority element.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/majority-element/description/

// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-28


#include <bits/stdc++.h>
using namespace std;

// Moore Voting's Algorithm
int majorityElement(int arr[],int n){
    int ele;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(cnt==0){
            cnt = 1;
            ele = arr[i];
        }
        else if(arr[i]==ele){
            cnt++;
        }
        else{
            cnt--;
        }
    }

    //verifying if ele is the majority ele
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            cnt1++;
        }
    }
    if(cnt1>n/2) return ele;
    else return -1;
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
    
    cout << "Majority ele: " << majorityElement(arr,n);
   
    return 0;
}
