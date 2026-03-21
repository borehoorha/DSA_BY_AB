#include<iostream>

using namespace std;

// Solving factorial using recursion

int fac_rec(int n){
    if(n==0){
        return 1;
    }
    return fac_rec(n-1) * n;
}

int fac_loop(int n){
    int f=1;
    int i;
    for(i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}


int main(int argc, char const *argv[])
{
    cout<<endl<<fac_rec(5);
    cout<<endl<<fac_loop(5);
    return 0;
}