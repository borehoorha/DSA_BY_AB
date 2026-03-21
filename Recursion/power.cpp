#include<iostream>
using namespace std;

// Solving N to the power M using recursion

int power_rec(int n,int m){
    if(m==0)
        return 1;
    return power_rec(n,m-1) * n;
}

int power_rec_2(int n,int m){
    if(m==0)
        return 1;
    if(m%2==0)
        return power_rec_2(n*m,m/2);
}


int main(){
    int n,m;
    cout<<"Enter two numbers (N^M): ";
    cin>>n>>m;
    cout<<power_rec(n,m)<<endl;
    cout<<power_rec_2(n,m)<<endl;
    return 0;
}