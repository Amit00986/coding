// Selection sort 
// In this we can find smallest element and take into Right place 
//this done series by series
// T. c = 0(n*n) and S.C = 0(1)
// usecase == small size array / vector / list
// It is not stable Algorithm
// A Sorting algorithm is said to be stable if two objects with equal keys appear in the
// same order in sorted output as they appear in the input array to be sorted
#include<bits/stdc++.h>

using namespace std;
void selectionSort(int *arr, int n)
{
    for(int i = 0 ; i < n-1; i++)
    {
        int MinIndex = i;
        for(int j = i + 1 ; j < n ; j++)
        {
            if(arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
            swap(arr[MinIndex], arr[i]);
        }
    }

    for(int i = 0 ; i <n ; i++)
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

    return 0;
}




