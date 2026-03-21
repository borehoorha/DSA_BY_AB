 #include<iostream>

using namespace std;

/*
TYPES OF RECUSION
-> Head Recursion
-> Tail Recursion
-> Tree Recusrion
-> Indirect Recusrion
-> Nested Recursion
*/

void head(int n){
    if(n>0){
        head(n - 1);
        cout << n << " ";
    }
}

void tail(int n){
    if(n>0){
        cout << n << " ";
        tail(n - 1);
    }
}

int tree_calls = 0;
void tree(int n){
    tree_calls+=1;
    if(n>0){
        cout << n << " ";
        tree(n-1);
        tree(n - 1);
    }
}
// NO OF CALLS = 2^N+1 - 1 

void indB(int n);
void indA(int n){
    if(n>0){
        cout<<n<<" ";
        indB(n-1);
    }
}

void indB(int n){
    if(n>1){
        cout<<n<<" ";
        indA(n/2);
    }
}

int nested(int n){
    if(n>100)
        return n-10;
    else
        return nested(nested(n+11));
}
 

int main(){
    int x = 3;
    head(x);
    printf("\n");
    tail(x);
    printf("\n");
    tree(x);
    cout<<"CALLS: "<<tree_calls<<endl;
    indA(20);
    cout<<endl<<nested(95);
    return 0;
}