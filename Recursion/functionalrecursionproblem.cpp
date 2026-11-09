#include<bits/stdc++.h>
using namespace std;

//swap an array using recursion 
/*int arr[5]={1,5,3,4,2};
int fun(int l,int r){
    if(l>=r) return arr[l];
    swap(arr[l],arr[r]);
    return fun(l+1,r-1);
}
int main(){
    //int n=5;
    int n= sizeof(arr)/sizeof(arr[0]);
    fun(0,n-1);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<endl;
    return 0;
}*/
//swap two number using single pointer recursion
void f(int i,int arr[],int n){
    if(i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    f(i+1,arr,n);
}
int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    f(0,arr,n);

    return 0;
}
