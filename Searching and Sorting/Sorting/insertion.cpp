// in this we consider the list in to two part
// one is sorted and remining unsorted
// t.c = 0(n*n) && s.c = 0(1)
// It's stable sort and it is in place sort


#include<bits/stdc++.h>

using namespace std;

void insertionSort(int *arr, int n)
{
    int j;
    for(int i = 1; i < n ; i++)
    {
        int k = arr[i];
        for( j = i-1; j >=0 && k < arr[j]; j--)
        
            arr[j+1] = arr[j];

         arr[j+1] = k;  
    
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int n ;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++ ) cin >> arr[i];

    insertionSort(arr,n);
    
    return 0;
}