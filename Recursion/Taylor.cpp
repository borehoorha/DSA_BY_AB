#include<iostream>
using namespace std;

double taylor_series_rec(int x,int n){
    static double p=1,f=1;
    double r;
    if(n==0){
        return 1;
    }
    else{
        r=taylor_series_rec(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
    }
}

double taylor_rec(double x, double n){
    static double s = 1;
    if(n==0)
        return s;
    s = x/n*s + 1;
    return taylor_rec(x,n-1);
}

double taylor_series_loop(double x ,double n){
    double s = 1;
    for(;n>0;n--){
        s = 1 + x/n*s;
    }
    return s;
}

int main(){
    cout<<taylor_series_rec(1,10)<<endl;
    printf("%lf \n",taylor_series_loop(1,10));
    cout<<taylor_rec(1,10)<<endl;     
    return 0;
}