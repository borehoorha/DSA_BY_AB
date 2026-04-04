#include<iostream>
using namespace std;

int fib_loop(int n){
    int t0=0,t1=1,s;
    if(n<=1){
        return n;
    }
    for(int i=2;i<=n;i++){
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int fib_rec(int n){
    if(n<=1)
        return n;
    return fib_rec(n-1) + fib_rec(n-2);
}

int main(){
    cout<<fib_rec(5)<<endl;
    cout<<fib_loop(5)<<endl;
    return 0;
} 