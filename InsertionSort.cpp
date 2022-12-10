#include <iostream>
using namespace std;

void isort(int arr[],int n){
    int i,j,temp,nc=0;
    for(i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && temp<=arr[j]){
            arr[j+1]=arr[j];
            j--;
            nc++;
        }
        arr[j+1]=temp;
    }
    cout<<endl<<"Total no. of comparisions: "<<nc<<endl;;
}
void printArr(int arr[], int n) 
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", arr[i]);  
} 
int main()
{
     int arr[50];
    int n,x;
    cout<<"Enter no. of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<endl<<"Enter a no.: ";
        cin>>x;
        arr[i]=x;
    }
    isort(arr,n);
    printArr(arr,n);
    return 0;
}
