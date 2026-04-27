#include<iostream>

using namespace std;

class Array
{

    private:
    int *A;
    int size;
    int length;
public:

    Array(int *a, int s, int l);
    Array(){
        size = 10;
        length=0;
        A = new int[size]; 
    }
    Array(int sz){ 
        size = sz;
        length=0;
        A = new int[size];  
    }
    ~Array(){ delete []A ;}

    void Display(){
        printf("ELEMEMNTS: \n");
        for(int i=0;i<length;i++){
            printf("%d ",A[i]);
        }
        printf("\n");
    }
    void Append(int x);
    void Insert(int x,int pos);   
    void Reverse(); 
    void Reverse2(); 
    void leftShift();
    void rightShift();
    void insertion_in_sorted_array(int x);
    bool isSorted();
    Array merge(Array arr1, Array arr2);
};

void Array::Append(int x){
    
    if(length<size)
    {
        A[length++]=x;
        cout<<length<<endl;
    }
    else{
        printf("Invalid Position");
        return;
    }

}

void Array::Insert(int x,int pos){
    int i;
    if(pos>=0 && length>=pos)
    {
        for(i=length;i>pos;i--){
            A[i] =  A[i-1];
        }
        A[pos] = x;
        length++;
    }
}

void Array::Reverse(){
    int *B;
    B = new int[length];
    int i,j;
    for(i=length-1,j=0;i>=0;i--,j++){
        B[j]=A[i];
    }
    for(i=0;i<length;i++)
        A[i] = B[i];
}

void Array::Reverse2(){

    for(int i=0,j=length-1;i<j;i++,j--){
        int t = A[i];
        A[i] = A[j];
        A[j] = t;
    }
}

void Array::leftShift(){
    int temp = A[0];
    for(int i=0;i<length-1;i++)
        A[i] = A[i+1];
    A[length-1]=temp;
}

void Array::rightShift(){
    int temp = A[length-1];
    for(int i=length-1;i>0;i--)
        A[i] = A[i-1];
    A[0]=temp;
}

void Array::insertion_in_sorted_array(int x){
    if(length==size)
        return;
    int i = 0;
    for(i=length-1;i>=0,A[i]>x;i--){
        A[i+1] = A[i];
    }
    A[i+1] = x;
    length++; 
}

bool Array::isSorted(){
    for (int i = 0; i < length-1; i++)
    {
        if(A[i]>A[i+1])
            return false;
    }
    return true;
}

Array Array::merge(Array arr1, Array arr2){
    Array arr;
    int i,j,k;
    i=j=k=0;
    arr.size = arr1.size+arr2.size;
    arr.A = new int[arr.size];
    while(i<arr1.length && j<arr2.length){
        if(arr1.A[i]<arr2.A[j])
            arr.A[k++] = arr1.A[i++];
        else
            arr.A[k++] = arr2.A[j++];
        for(;i<arr1.length;i++)
            arr.A[k++] = arr1.A[i];
        for(;j<arr2.length;j++)
            arr.A[k++] = arr1.A[j];
    }
    arr.length = arr1.length+arr2.length; 
    return arr;
}

int main(int argc, char const *argv[])
{
    Array arr(20);
    arr.Append(1);arr.Append(2);
    arr.Append(3);arr.Append(4);
    arr.Append(5);arr.Append(6);
    arr.Display();
    arr.Reverse();
    arr.Display();
    arr.Reverse2();
    arr.Display();
    arr.leftShift();
    arr.leftShift();
    arr.Display();
    arr.Append(1000);
    arr.Display();
    arr.rightShift();
    arr.Display();
    Array arr2;
    arr2.Append(2);
    arr2.Append(3);
    arr2.Append(5);
    arr2.Append(10);
    arr2.Append(15);
    arr2.Display();
    arr2.insertion_in_sorted_array(11);
    arr2.Display();
    arr2.insertion_in_sorted_array(8);
    arr2.Display();
    if(arr2.isSorted())
        cout<<"SORTED ARRAY"<<endl;

    return 0;
}
