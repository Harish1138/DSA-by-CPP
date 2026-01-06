#include <algorithm>
#include<iostream>
using namespace std;
/* Brute solution
Time complexity O(k)
Space complexity O(d)
 */
void rotate(int arr[],int n,int k) {
    k=k%n;
    int temp[k];
    for (int i=0;i<k;i++) {
        temp[i]=arr[i];
    }
    for (int i=k;i<n;i++) {
        arr[i-k]=arr[i];
    }
    for (int i=n-k;i<n;i++) {
        arr[i]=temp[i-(n-k)];
    }
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
/*
 Optimal Solution
 Time Complexity O(n)
 Space Complexity O(1)
 */
void rev(int arr[],int s,int e,int n) {

    while (s<e) {
        swap(arr[s++],arr[e--]);
    }


}
void rotate1(int arr[],int n,int k) {
    k=k%n;
    rev(arr,0,n-1,n);
    rev(arr,0,k-1,n);
    rev(arr,k,n-1,n);




}
int main() {
    int n;
    cout<<"Enter Number of Elements in Array:  ";
    cin>>n;
    int arr[n];
    cout<<"Enter Elements in Array:  ";
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the target Element:  ";
    cin>>k;
    rotate1(arr,n,k);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}