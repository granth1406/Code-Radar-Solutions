#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    int arr[size];
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }

    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;i<size;j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(size/2)){
            printf("%d",arr[i]);
            return 0;
        }
        printf("%d",-1);
    }
}