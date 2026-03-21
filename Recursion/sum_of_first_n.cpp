#include<iostream>

using namespace std;

int sum_rec(int n){
    if(n==0){
        return 0;
    }
    return sum_rec(n-1) + n;
}

int loop_sum(int n){
    int s=0;
    for(int i=n;i>0;i--){
        s += i;
    }
    return s;
}

int formula_sum(int n){
    return(n*(n+1)/2);
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
