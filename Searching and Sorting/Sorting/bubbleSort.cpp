// Bubble Sort
// in this sorting the adjacent element will check and swap after 1 pass the largest elemnt
// will be in the right place;
// T.C = 0(n*n) and S.C = (1)
// it is usedd for only small list
// it is stable sort and it is in place sort


#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n) {
    for(int i = 0; i < n - 1 ; i++)
    {
        int xchanges = 0;
        for(int j = 0 ; j < n -1-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                xchanges++;
                cout << "Xchanges " << endl; // it is used for scaning there is swapping occurs or not
                // if not swapping that means array is already array is sorted 
                cout << xchanges << endl;
            }
        }
        if(xchanges == 0)
        break;
    }

    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    selectionSort(arr, n);
}