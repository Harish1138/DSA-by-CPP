#include<bits/stdc++.h>
using namespace std;

/*
  Brute Force Solution: // TC: O(N^3), SC: O(1)
  Better Solution: // TC: O(N^2), SC: O(1)
  Optimal Solution: // TC: O(N), SC: O(1)
 */
void brute_force_subarray_sum(int arr[], int n) {
    int maxi=INT_MIN;
    for (int i=0;i<n;i++) {
        for (int j=i;j<n;j++) {
            int sum=0;
            for (int k=i;k<=j;k++) {
                sum+=arr[k];
            }
            maxi=max(sum,maxi);
        }
    }
    cout<<"by Brute Solution: "<<maxi<<endl;  // TC: O(N^3), SC: O(1)
}
void better_subarray_sum(int arr[], int n) {
    int maxi=INT_MIN;
    for (int i=0;i<n;i++) {
        int sum=0;
        for (int j=i;j<n;j++) {
            sum+=arr[j];
            maxi=max(sum,maxi);
        }


    }
    cout<<"by Better Solution: "<<maxi<<endl; // TC: O(N^2), SC: O(1)

}
void kadane_algorithm(int arr[],int n) {

    int maxi=INT_MIN;
    int sum=0;
    for (int i=0;i<n;i++) {

        sum+=arr[i];
        maxi=max(sum,maxi);
        if (sum<0) {
            sum=0;
        }
    }
    cout<<"by Optimal Solution: "<<maxi<<endl;  // TC: O(N), SC: O(1)
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    brute_force_subarray_sum(arr,n);
    better_subarray_sum(arr,n);
    kadane_algorithm(arr,n);
}