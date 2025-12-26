#include<iostream>
#include <vector>
using namespace std;
int slar(vector<int> &arr,int n) {
    int max=arr[0];
    int smax=-1;
    if (n<2) {
        return -1;
    }
    for(int i=0;i<n;i++) {
        if (arr[i]>max) {
            max=arr[i];
        }
        else if (arr[i]<smax && arr[i]!=max) {
            smax=arr[i];
        }
    }
    if (smax==INT_MIN) {
        return -1;
    }
    return smax;
}
int smal(vector<int> &a,int n) {
    int min=a[0];
    int smin=INT_MAX;
    for (int i=0;i<n;i++) {
        if (a[i]<min) {
            min=a[i];
        }
        else if (a[i]<smin && a[i]!=min) {
            smin=a[i];
        }
    }
    if (smin==INT_MAX) {
        return -1;
    }
    return smin;
}


int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int smax=slar(arr,n);
    int smal1=smal(arr,n);
    cout<<smax<<" "<<smal1<<endl;


}