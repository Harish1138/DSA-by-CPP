// Second largest element without sorting

#include "secondLargest.h"

#include<iostream>
using namespace std;
int secondLargest(int arr[], int size) {
    int max=INT_MIN;
    int smax=INT_MIN;
    if (size<2) {
        return -1;
    }
    for (int i=0;i<size;i++) {
        if (arr[i]>max) {
            smax=max;
            max=arr[i];
        }
        else if (arr[i]>smax && arr[i]!=max) {
            smax=arr[i];
        }
    }
    if (smax==INT_MIN) {
        return -1;
    }
    return smax;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<secondLargest(arr,n);
}