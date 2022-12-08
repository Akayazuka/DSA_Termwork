#include <iostream>

using namespace std;
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void ssort(int arr[],int n){
    int i,j,nc=0,min;
    for(i=0;i<n;i++){
        min=i;
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            nc++;
            
        }
        swap(&arr[i],&arr[min]);
        
    }
    cout<<endl<<"Total no. of comparisions: "<<nc<<endl;
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
    ssort(arr,n);
    printArr(arr,n);
    return 0;
}
