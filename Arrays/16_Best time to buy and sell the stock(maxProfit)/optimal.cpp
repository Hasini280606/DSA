// 🚀 Problem: Best time to buy and sell the stock
// 📌 Category: Arrays
// 📝 Problem Statement:
//  Given an array arr of n integers, where arr[i] represents price of the stock on the ith day. Determine the maximum profit achievable by buying and selling the stock at most once. 



// The stock should be purchased before selling it, and both actions cannot occur on the same day.


// 🔗 Problem Link (if on LeetCode/GFG):
//    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(N)
// 🛢️ Space Complexity: O(1)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-29


// KADANE'S ALGORITHM
#include <bits/stdc++.h>
using namespace std;

int maxProfit(int arr[],int n){
    int maxProfit = 0;
    int mini = arr[0];
    
    for(int i=1;i<n;i++){
        int cost = arr[i] - mini;
        maxProfit = max(cost,maxProfit);
        mini = min(mini,arr[i]);
    }
    return maxProfit;
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
    
    cout << "Maximum profit: " << maxProfit(arr,n);
   
    return 0;
}

