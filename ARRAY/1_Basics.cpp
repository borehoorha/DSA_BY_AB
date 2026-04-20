#include<iostream>

using namespace std;

int main(){
    
    int B[5] ={1,2};
    int C[] = {1,2,3,4,5};
    int D[21]= {0};

    for(int i=0;i<5;i++){
        printf("%u : %d\n",&C[i],C[i]);
    }

    int A[10];
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 1;
    p[1] = 2; p[2] = 3; p[3] = 4; p[4] = 5;
    for(int i=0;i<5;i++){
        printf("%u : %d\n",&p[i],*(p+i));
    }
    return 0;
}