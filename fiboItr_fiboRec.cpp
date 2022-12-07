#include <iostream>

using namespace std;

int fibo(int n){
    if(n<=1) return 1;
    int first = 1;
    int second = 1;
    int ans;
    for(int i=2;i<=n;i++){
        ans = first + second;
        first = second;
        second = ans;
    }
    return ans;
}

int fiboRec(int n){
    if(n<=1) return 1;
    else return fibo(n-1) + fibo(n-2);
    
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    cout<<fiboRec(n)<<endl;

    return 0;
}
