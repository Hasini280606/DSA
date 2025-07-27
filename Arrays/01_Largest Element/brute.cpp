// 🚀 Problem: Find the Largest Element in an Array
// 📌 Category: Arrays
// 📝 Problem Statement:
//     Given an array of N integers, find and return the largest element.
//
// 🔗 Problem Link (if on LeetCode/GFG):
//     https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array&utm_source=youtube
//
// 🎯 Approach: Brute Force
// 🕒 Time Complexity: O(NlogN)
// 🛢️ Space Complexity: O(1) (Quick Sort)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;


int partitionIndex(vector<int>&arr,int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while(i<j){
        while(arr[i]<=pivot && i<high){
        i++;
        }   
        while(arr[j]>pivot && j>low){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }   
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(vector<int>&nums,int low,int high){
    int size_nums = nums.size();
    if(low<high){
        int pIndex = partitionIndex(nums,low,high);
        quickSort(nums,low,pIndex-1);
        quickSort(nums,pIndex+1,high);
    }
}

int largestEle(vector<int>nums){
    int size_nums = nums.size();
    quickSort(nums,0,size_nums-1);
    int largestElement = nums[size_nums-1];
    return largestElement;
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

    int ans = largestEle(nums);
    cout << "Largest Element: " << ans << endl;

    return 0;
}
