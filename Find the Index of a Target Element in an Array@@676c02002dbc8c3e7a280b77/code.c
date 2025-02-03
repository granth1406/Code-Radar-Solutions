#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0; i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
    }
    int t;
    int count=0;
    scanf("%d",&t);
    for(int i=0;i<size;i++){
        if(arr[i]==t){
            printf("%d",i);
            count++;
            return 0;
        }
    }
    if (count==0){
        printf("%d",-1);
    }
    
}
