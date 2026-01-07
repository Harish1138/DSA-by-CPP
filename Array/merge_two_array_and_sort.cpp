#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m) {
    vector<int> arr;
    for (int i=0;i<n;i++) {
        arr.push_back(arr1[i]);
    }
    for (int i=0;i<m;i++) {
        arr.push_back(arr2[i]);
    }
    sort(arr.begin(),arr.end());
    for (int i=0;i<m+n;i++) {
        cout<<arr[i]<<" ";
    }



}

int main() {
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }


    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    merge(arr1,n,arr2,m);





}
