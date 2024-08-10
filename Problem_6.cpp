#include<iostream>
using namespace std;

int calPower(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    int xPownm1=calPower(x,n-1);
    int xPown=x*xPownm1;
    return xPown;
}
int main(){
    int x,n;
    cout<<"Enter the value of X: ";
    cin>>x;
    cout<<"Enter the value of n: ";
    cin>>n;
    int ans=calPower(x,n);
    cout<<"The result is: ";
    cout<<ans;

    return 0;
}