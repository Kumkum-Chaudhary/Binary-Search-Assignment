// 1 -> find the last occurence of x 
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<"Enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter target element : ";
    cin>>x;
    int lo = 0;
    int hi = n-1;
    int ans =-1;
   
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==x){
            if(arr[mid+1]!=x){
                ans = mid;
               
                break;
            }
            else{
                lo = mid+1;
            }
        }
        else if(arr[mid]>x){
           hi = mid-1;
        }
        else {
           lo = mid +1;
        }
    }
    cout<<ans;

}