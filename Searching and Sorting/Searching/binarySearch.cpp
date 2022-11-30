// In this arrya must be sorted from decreasing to increasing
// Binary search takes time complexity 0(logn)
// It is best to use in sorted array
//<------------------------------------------------------------------>

#include<bits/stdc++.h>

using namespace std;

int binarySearch(int *arr, int n , int k) {
    int start = 0;
    int end = n-1;
    int mid = start +(end-start)/2; // bcz it will take any integer in their range

    while( start <= end ) {
        
        if(arr[mid] == k) {
            return mid;
        }

        if(k > arr[mid]) 
        {
            start = mid + 1;
        }
        else 
        {
            end = mid - 1 ;
        }
        mid = start +(end-start)/2;
    }

    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i <  n ; i++ ) cin >> arr[i];
    int target;
    cin >> target;

    if(binarySearch(arr, n , target)) {
        cout << "Element Found " << endl;
    }
    else {
        cout << "Element Not Found " << endl;
    }
}