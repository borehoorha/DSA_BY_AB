#include<iostream>
// using static varibles

using namespace std;

int fun1(int n){
    static int x = 0;
    if(n>0){
        x++; 
        return fun1(n - 1) + x;
    }
    return 0;
}


int main(){
    int x = 5;
    int r = fun1(x);
    cout << r << endl;
    return 0;
}