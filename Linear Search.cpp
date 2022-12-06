#include <iostream>

using namespace std;

int linear_search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key) return i;
    }
    return -1;
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
    int op = linear_search(arr,n,key);
    if(op != -1){
        cout<<"Element Found at index "<<op<<endl;
    }
    else{
        cout<<"Element Not Found!! \n";
    }
    return 0;
    
}
