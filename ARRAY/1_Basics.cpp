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

    // COPYING FROM ONE ARRAY TO ANOTHER
    int *p = new int[5];
    int *q = new int[10];

    for(int i=0; i<5; i++)
        p[i] = i+1;

    for(int i=0; i<5; i++)
        q[i] = p[i];

    delete p;
    p = q;
    q = nullptr;

    // 2-D ARRAYS

    // METHODS TO INTIALIZE

    int ARR[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            ARR[i][j] = j+i+1;
    }

    int *ptr_arr[2];
    ptr_arr[0] = new int[3];
    ptr_arr[1] = new int[3];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            ptr_arr[i][j] = j+i+1;
    }
    
    int **p_arr;
    p_arr = new int*[2];
    p_arr[0] = new int[3];
    p_arr[1] = new int[3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            p_arr[i][j] = j+i+1;
    }

        return 0;
}