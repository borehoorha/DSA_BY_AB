#include<iostream>

using namespace std;

struct Array{
    int *A;
    int length;
    int size;
};

void Display(struct Array *arr){
    int i;
    printf("ELEMENTS: \n");
    for(i=0;i<arr->length;i++)
        printf("%d ",arr->A[i]);
    printf("\n");
}

void Append(struct Array *arr, int x){
    if(arr->length<arr->size)
    {
        arr->A[arr->length++]=x;
    }
    else{
        printf("Invalid Position");
        return;
    }
}

struct Array * Intersection(Array *arr1, Array *arr2){
    struct Array *arr;
    int i,j,k;
    i=j=k=0;
    arr->size = arr1->size+arr2->size;
    arr->A = new int[arr->size];
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            i++;
        else if(arr2->A[j]<arr1->A[i])
            j++;
        else{
            arr->A[k++] = arr1->A[i++];
            j++; 
        }
    }
    arr->length = k; 
    return arr;
}


struct Array * Difference (Array *arr1, Array *arr2){
    struct Array *arr;
    int i,j,k;
    i=j=k=0;
    arr->size = arr1->size+arr2->size;
    arr->A = new int[arr->size];
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            j++ ;
        else{
            i++;
            j++;  
        }
             
        for(;i<arr1->length;i++)
            arr->A[k++] = arr1->A[i]; 
    }
    arr->length = k; 
    return arr;
}



struct Array * Union(Array *arr1, Array *arr2){
    struct Array *arr;
    int i,j,k;
    i=j=k=0;
    arr->size = arr1->size+arr2->size;
    arr->A = new int[arr->size];
    while(i<arr1->length && j<arr2->length){
        if(arr1->A[i]<arr2->A[j])
            arr->A[k++] = arr1->A[i++];
        else if(arr2->A[j]<arr1->A[i])
            arr->A[k++] = arr2->A[j++];
        else{
            arr->A[k++] = arr1->A[i++];
            j++; 
        }
             
        for(;i<arr1->length;i++)
            arr->A[k++] = arr1->A[i];
        for(;j<arr2->length;j++)
            arr->A[k++] = arr1->A[j];
    }
    arr->length = k; 
    return arr;
}

int main(){
    struct Array arr1,arr2;
    cout<<"Enter size of array 1 and 2: ";
    cin>>arr1.size>>arr2.size;
    cout<<"Enter number of elements 1 & 2: ";
    cin>>arr1.length>>arr2.length;

    cout<<"Enter elements of ARRAY 1:"<<endl;
    for(int i=0;i<arr1.length;i++){
        cout<<"-->";
        cin>>arr1.A[i];
    }
    cout<<"Enter elements of ARRAY 1:"<<endl;
    for(int i=0;i<arr2.length;i++){
        cout<<"-->";
        cin>>arr2.A[i];
    }
    struct Array *arr3,*arr4,*arr5;
    arr3 = Union(&arr1,&arr2);
    arr4 = Intersection(&arr1,&arr2);
    arr5 = Difference(&arr1,&arr2);
    Display(arr3);
    Display(arr4);
    Display(arr5);

    
}