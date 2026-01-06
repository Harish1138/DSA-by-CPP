#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int count=0;
    for (int i=0;i<n;i++) {
        if (arr[i]==0) count++;
    }
    int j=0;
    for (int i=0;i<n;i++) {
        if (arr[i]!=0) {
            swap(arr[i],arr[j++]);
        }
    }
    for (int k=0;k<n;k++) {
        cout<<arr[k]<<" ";
    }
}