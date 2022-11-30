// recursion
// Divide and Conquer method usedd 
// time complexity (n*logn) and space complexity = 0(n)
//
 
#include<bits/stdc++.h>
using namespace std;
void merge(int *a,int strt,int mid,int end){

    int size = end - strt + 1;
    int temp[size];
    int i = 0;
    int st = strt;
    int j = mid + 1;
    int k = end;

    while(i < size && j <= end && strt <= mid){

        if(a[strt] <= a[j]){
            temp[i] = a[strt];
            strt++;
        }

        else{
            temp[i] = a[j];
            j++;
        }
        i++;
    }
    while(strt <= mid){
        temp[i] = a[strt];
        i++;
        strt++;
    }
    while(j <= end){
        temp[i] = a[j++];
        i++;
    }
    j=0;
    for(int i = st;i<= end; i++){
        a[i] = temp[j];
        j++;
    }
     
}
void divide(int *a,int strt,int end){

    if(strt >= end){
        return;
    }

    int mid = (strt + end)/2;

   
    divide(a,strt,mid);
    divide(a,mid + 1,end);
    merge(a,strt,mid,end);
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    divide(a,0,n-1);
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
    return 0;

}