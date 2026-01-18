#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    // next_permutation(arr.begin(),arr.end());
    // for (int i=0;i<n;i++) {
    //     cout<<arr[i]<<" ";
    // }

    int idx=-1;
    for (int i=n-2;i>=0;i--) {
        if (arr[i]<arr[i+1]) {
            idx=i;
            break;
        }
    }
    if (idx==-1) {
        reverse(arr.begin(),arr.end());
        for (int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }
    }
    else {
        for (int i=n-1;i>idx;i--) {
            if (arr[i]>arr[idx]) {
                swap(arr[i],arr[idx]);
                break;
            }
        }
        reverse(arr.begin()+idx+1,arr.end());
        for (int i=0;i<n;i++) {
            cout<<arr[i]<<" ";
        }

    }
    return 0;
}