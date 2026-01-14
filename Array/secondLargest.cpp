#include<iostream>
using namespace std;
int slar(int arr[], int n){
    int max=INT_MIN;
    int smax=INT_MIN;
    if(n<2){
        return -1;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]!=max){
            max=arr[i];
        }

    }
    if (smax==INT_MIN){
        return -1;
    }
    return smax;

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    if (slar(arr,n)==-1) {
        cout<<"Second largest is not exist.";
    }
    else {
        cout<<" second largest number is: "<<slar(arr,n);

    }
}