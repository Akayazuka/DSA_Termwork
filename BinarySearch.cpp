#include <iostream>

using namespace std;

int binarySearch(int nums[], int s, int e, int target){
    if(s>e) return -1;
    int mid = s + (e-s)/2;
    if(nums[mid]==target) return mid;
    if(nums[mid] > target)  return binarySearch(nums, s, mid-1, target);
    else  return binarySearch(nums, mid+1, e, target);
    }
int main()
{
    int n,key;
    cout<<"Enter no. of elements: \n";
    cin>>n;
    cout<<"Enter the elements: \n";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: \n";
    cin>>key;
    int op = binarySearch(arr,0,n-1,key);
    if(op != -1){
        cout<<"Element Found at index "<<op<<endl;
    }
    else{
        cout<<"Element Not Found!! \n";
    }
    return 0;
    
}
