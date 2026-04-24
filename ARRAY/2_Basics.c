#include<stdio.h>
#include<stdlib.h>

struct Array{
    int *A;
    int length;
    int size;
};

void Display(struct Array arr){
    int i;
    printf("ELEMENTS: \n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
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

void Insert(int x,int pos, struct Array *arr){
    int i;
    if(pos>=0 && arr->length>=pos)
    {
        for(i=arr->length;i>pos;i--){
            arr->A[i] = arr-> A[i-1];
        }
        arr->A[pos] = x;
        arr->length++;
    }
}

int Delete(int index,struct Array *arr){
    int x=-1;

    if(index>=0 && index<arr->length){
        x=arr->A[index];
        for (int i = index; i < arr->length; i++)
            arr->A[i] = arr->A[i+1];
        arr->length--;
    }
    return x;
}

int main(){
    struct Array arr;
    printf("Enter size: ");
    scanf("%d",&arr.size);
    arr.A = (int *)malloc(arr.size*sizeof(int));
    printf("Enter number N of numbers: ");
    int i,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&arr.A[i]);
    }
    arr.length=n;
    Display(arr);
    Append(&arr,100);
    Insert(99,4,&arr);
    Display(arr);
    printf("%d\n",Delete(4,&arr));
    Display(arr);
}