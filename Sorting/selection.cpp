#include<iostream>
using namespace std;
void selection_sort(int arr[],int n) {
    int count=0;
    for (int i=0;i<=n-2;i++) {
        int min=i;
        for (int j=i;j<=n-1;j++) {
            if (arr[j]<arr[min]) {
                min=j;
            }
        }
        swap(arr[i],arr[min]);

    }
}
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for (int i=0;i<n;i++) cin>>arr[i];
    selection_sort(arr,n);
    for (int i=0;i<n;i++) cout<<arr[i]<<" ";
}