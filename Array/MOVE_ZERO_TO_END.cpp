#include<bits/stdc++.h>
using namespace std;
// Brute solution
// Option solution available after the main function

// int main() {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int count=0;
//     for (int i=0;i<n;i++) {
//         if (arr[i]==0) count++;
//     }
//     int j=0;
//     for (int i=0;i<n;i++) {
//         if (arr[i]!=0) {
//             swap(arr[i],arr[j++]);
//         }
//     }
//     for (int k=0;k<n;k++) {
//         cout<<arr[k]<<" ";
//     }
// }


// Optimal Solution
void move_zero(vector<int> &arr) {
    int j=0;
    int n=arr.size();
    cout<<"After moved: ";
    for (int i=0;i<n;i++) {
        if (arr[i]!=0) {
            swap(arr[i],arr[j++]);
        }
    }

}
int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for (int i=0;i<n;i++) {
        cin>>arr[i];

    }
    cout<<"Before Moved: ";
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    move_zero(arr);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }

}
