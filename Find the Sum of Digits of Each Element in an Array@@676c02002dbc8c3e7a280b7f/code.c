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
        int sum=0;
        scanf("%d",&ele);
        while(ele>0){
            n=ele%10;
            sum+=n;
            ele/=10;
        }
        printf("%d",sum);
    }
}