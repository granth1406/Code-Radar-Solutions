#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int target() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    int t;
    scanf("%d",&t);
    for(int i=0;i<size;i++){
        if(arr[i]==t){
            return i;
        }
    }
    return -1;
}

int main(){
    printf(target());
}