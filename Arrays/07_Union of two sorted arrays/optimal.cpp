// 🚀 Problem: Union of Two  sorted arrays
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.



// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays&utm_source=youtube
//
// 🎯 Approach: Optimal
// 🕒 Time Complexity: O(n+m)
// 🛢️ Space Complexity: O(n+m)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a,vector <int>&b){
    // 2 pointer pattern
        int n = a.size();
        int m = b.size();
        vector <int> unionArray;
        
        int i = 0; // pointer 1
        int j = 0; // pointer 2
        
        while(i<n && j<m){
            if(a[i]<b[j]){
                if(unionArray.empty() || unionArray.back() != a[i]){
                    unionArray.push_back(a[i]);
                }
                i++;
            }
            else if(a[i]>b[j]){
                if(unionArray.empty() || unionArray.back() != b[j]){
                    unionArray.push_back(b[j]);
                }
                j++;
            }
            else if(a[i]==b[j]){
                if(unionArray.empty() || unionArray.back() != a[i]){
                    unionArray.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        
        //remaining elements in first array
        while(i<n){
            if(unionArray.empty() || unionArray.back() != a[i]){
                unionArray.push_back(a[i]);
            }
            i++;
        }
        
        //remaining elements in sec array
        while(j<m){
            if(unionArray.empty() || unionArray.back() != b[j]){
                unionArray.push_back(b[j]);
            }
            j++;
        }
        return unionArray;

    }

int main(){
    vector <int> a;
    vector<int> b;
    int n;
    cout << "Enter size of the array1: ";
    cin >> n;

    int m;
    cout << "Enter the size of array2: ";
    cin >> m;

    a.resize(n);
    b.resize(m);


    for(int i=0;i<n;i++){
        cout << "Enter element" << i+1 << ": ";
        cin >> a[i];
    }

    for(int i=0;i<m;i++){
        cout << "Enter element" << i+1 << ": ";
        cin >> b[i];
    }

    cout << "Array 1: ";
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    cout << "Array 2: ";
    for(int i=0;i<m;i++){
        cout << b[i] << " ";
    }
    cout << endl;

    vector<int> unionArray = findUnion(a,b);
    cout << "Union of both the arrays : ";
    for(auto it : unionArray){
        cout << it << " ";
    }

    return 0;
}
