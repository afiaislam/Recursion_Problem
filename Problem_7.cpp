#include<iostream>
using namespace std;

int calPower(int x,int n){
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    //When n is even.
    if(n%2==0){ 
        return calPower(x,n/2)*calPower(x,n/2);
    }
    //When n is odd.
    else{ 
        return calPower(x,n/2)*calPower(x,n/2)*x;
    }
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