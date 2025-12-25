#include<iostream>
using namespace std;
int max1(int arr[],int n) {
    int max=arr[0];
    for(int i=1;i<n;i++) {

        if(arr[i]>max) {
            max=arr[i];
        }
    }
    return max;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    cout<<"Largest Element: "<<max1(arr,n);



}
// using quick sort
// int partition(int arr[],int low,int high) {
//     int i=low;
//     int j=high;
//     int pivot=arr[low];
//     while (i<j) {
//         while (arr[low]<=pivot && i<=high) {
//             i++;
//         }
//         while (arr[high]>pivot && j>low) {
//             j--;
//         }
//         if (i<j) {
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[low],arr[j]);
//     return j;
// }
// void qs(int arr[],int low,int high) {
//     if (low<high) {
//         int p=partition(arr,low,high);
//         qs(arr,low,p-1);
//         qs(arr,p+1,high);
//     }
//
// }
// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++) {
//         cin>>arr[i];
//
//     }
//     cout<<"Before Sort:"<<endl;
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl<<"After Sort:"<<endl;
//     qs(arr,0,n-1);
//     for(int i=0;i<n;i++) {
//         cout<<arr[i]<<" ";
//     }
//
//     cout<<endl<<"Largest number:"<<arr[n-1]<<endl;
// }