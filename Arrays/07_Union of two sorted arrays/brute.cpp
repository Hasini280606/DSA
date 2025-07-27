// 🚀 Problem: Union of Two  sorted arrays
// 📌 Category: Arrays
// 📝 Problem Statement:
//   Given two sorted arrays nums1 and nums2, return an array that contains the union of these two arrays. The elements in the union must be in ascending order.



// The union of two arrays is an array where all values are distinct and are present in either the first array, the second array, or both.

// 🔗 Problem Link (if on LeetCode/GFG):
//    https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays&utm_source=youtube
//
// 🎯 Approach: Brute
// 🕒 Time Complexity: O(nlogn+mlogm) + O(n+m)
// 🛢️ Space Complexity: O(n+m)
//
// ✍️ Author: Shakkara Hasini
// 📅 Date: 2025-07-27


#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> &a,vector <int>&b){
    int n = a.size();
    int m = b.size();

    set <int> s1;
    

    for(int i=0;i<n;i++){
        s1.insert(a[i]); //O(nlogn)
    }

    for(int i=0;i<m;i++){
        s1.insert(b[i]); // O(mlogm)
    }

    vector<int> unionArray;
    int i=0;
    for(auto it : s1){
        unionArray.push_back(it);
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
