// Move all the negative elements to one side of the array

#include<bits/stdc++.h>

using namespace std;

int one_side(int *arr, int n)
{
	int j =0;
    for(int i =0; i<n ; i++)//traverse array 
    {

        //take pivot
    	if(arr[i]<0)//
    	{
		  if(i != j)
           swap(arr[i],arr[j]);
    	   j++;
       }
    }
  
}

void print(int *arr, int n)
{
    for(int i = 0 ; i<n ; i++)
    {
        cout << arr[i] <<" ";
    }
}


int  main()
{
    int arr[] = {2,-1,3,-1,-3,8,-8,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    one_side(arr,n);
    print(arr,n);
}