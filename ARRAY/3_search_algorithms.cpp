#include<iostream>

using namespace std;


class Array
{
public:
    int *A;
    int size;
    int length;
    Array(int *a, int s, int l);
    Array(){length=0;};

    void Display(){
        printf("ELEMEMNTS: \n");
        for(int i=0;i<length;i++){
            printf("%d ",A[i]);
        }
        printf("\n");
    }
    void Append(int x);
    int LinearSearch(int x);
    int BinarySearch(int l, int h, int x);
};

Array::Array(int *a, int s, int l)
{
    this->A = a;
    this->size = s;
    this->length = s;
}


int Array::BinarySearch(int l, int h, int x){
    if(length>0 && length<=size){
        int mid = (l+h)/2;
        if(A[mid]==x)
            return mid;
        else if(A[mid]<x)
            return BinarySearch(mid+1 ,h ,x);
        else
            return BinarySearch(l,mid-1,x);    
            return -1;
    }
}

int Array::LinearSearch(int x){

    if(length>0 && length<=size){
        for(int i=0;i<length;i++){
            if(A[i]==x)
                return i;
        }
        return -1;    
    }
}


int main()
{
    Array arr;
    arr.A = new int[20];
    arr.size=20;
    arr.Append(1);arr.Append(12);
    arr.Append(5);arr.Append(40);
    arr.Append(-51);arr.Append(6);
    
    return 0;
}
