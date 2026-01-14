//
// Created by harya on 10-12-2025.
//

#include<iostream>
using namespace std;
void merge(int *arr,int low,int mid,int high){
	int temp[high];
	int left=low;
	int right=mid+1;
	while(arr[left]<=arr[right){
		int i=0;
		if(arr[left]<=arr[mid]
		temp[i++]=arr[left++];
	}



}
void merge_sort(int arr[],int low,int high) {
	if(arr[low]>=arr[high]) return;
	int mid=low+(high-low)/2;
	merge_sort(arr,low,mid);
	merge_sort(arr,mid+1,high);
	merge(arr,low,mid,high);

}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    merge_sort(arr,n);


}