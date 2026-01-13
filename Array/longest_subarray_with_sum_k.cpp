#include<bits/stdc++.h>
using namespace std;
// int main() {
//     int n;
//     cout<<"Enter Number of Elements: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter Array Elements: ";
//     for(int i=0;i<n;i++)
//         cin>>arr[i];
//     int k;
//     cout<<"Enter target value";
//     cin>>k;
//
//     int sum=0;
//     int count=0;
//     unordered_map<int,int>mpp;
//     mpp[0]=1;
//     for (int i=0;i<n;i++) {
//         sum+=arr[i];
//         int more=sum-k;
//         if (mpp.find(more)!=mpp.end()) {
//             count+=mpp[more];
//         }
//         mpp[sum]++;
//     }
//     cout<<"Largest Subarray will be: "<<count<<endl;
//
//
// }
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];

    }
    int k;
    cin >> k;
    int sum=0;
    int maxLen=0;
    map<int, int> mpp;
    for (int i=0;i<n;i++) {
        sum+=arr[i];
        if (sum==k) {
            maxLen=max(maxLen,i+1);
        }
        int more=sum-k;
        if (mpp.find(more)!=mpp.end()) {
            int len=i-mpp[more];
            maxLen=max(maxLen,len);
        }
        if (mpp.find(sum)==mpp.end()) {
            mpp[sum]=i;
        }

    }
    cout<<maxLen<<endl;
}