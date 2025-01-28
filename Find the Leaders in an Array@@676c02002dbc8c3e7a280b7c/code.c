#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    int r=1;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                r=1;
            }else{
                r=0;
            }

        }
        if(r=1){
            printf("%d",arr[i]);
        }
    }
}