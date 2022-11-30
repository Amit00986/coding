// Linear Search
// T.C = 0(n);

#include<bits/stdc++.h>
using namespace std;

int linearSearch(int *arr, int n , int k) {
    for(int i=0;i<n;i++ y g) {
        if(arr[i] == k) {
            return 1;
           // break;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    int k;
    cin >> k;

    if(linearSearch(arr, n , k)) {
        cout << "Element  Found " << endl;
    }
    else{
        cout << "Element Not  Found " << endl; 
    }

   return 0;
}
