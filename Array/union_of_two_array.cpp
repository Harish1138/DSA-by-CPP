#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void union1(vector<int> &arr1,vector<int> &arr2) {
    vector<int> temp;
    int i=0;
    int j=0;
    int n=arr1.size();
    int m=arr2.size();
    while (i<n && j<m) {
        if (arr1[i]<arr2[j]) {
            if (temp.size()==0 || temp.back()!=arr1[i]) {
                temp.push_back(arr1[i]);
            }
            i++;
        }
        else {
            if (temp.size()==0 || temp.back()!=arr2[j]) {
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i<n) {
        if (temp.size()==0 || temp.back()!=arr1[i]) {
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while (j<m) {
        if (temp.size()==0 || temp.back()!=arr2[j]) {
            temp.push_back(arr2[j]);
        }
        j++;
    }
    int s=temp.size();
    for(int i=0;i<s;i++) {
        cout<<temp[i]<<" ";
    }

}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)

        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int m;
    cin >> m;
    vector<int> arr2(m);
    for (int i = 0; i < m; i++)
        cin >> arr2[i];
    sort(arr2.begin(), arr2.end());
    union1(arr,arr2);



}
