#include<iostream>

using namespace std;


int fact(int n){
    if(n==1)
        return 1;
    return n*fact(n-1);
}


int nCr(int n, int r){
    int num=fact(n);
    int den=fact(r)*fact(n-r);
    return num / den;
}

int nCr_rec(int n,int r){
    if(r==0 || n==r)
        return 1;
    return nCr_rec(n-1,r-1) + nCr_rec(n-1,r);
}

int main(){
    int n,r;
    cout<<"Enter n and r: ";
    cin>>n>>r;
    printf("Combinations nCr for n-%d , r-%d: \n",n,r);
    cout<<"USING DIRECT FORMULA: "<<nCr(n,r)<<endl;
    cout<<"USING RECURSION: "<<nCr_rec(n,r)<<endl;
    return 0;
}