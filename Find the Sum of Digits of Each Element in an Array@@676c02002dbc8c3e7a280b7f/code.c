#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        int ele;
        scanf("%d",&ele);
        arr[i]=ele;
        int sum=0;
        while(ele>0){
            int n=ele%10;
            sum+=n;
            ele/=10;
        }
        printf("%d ",sum);
    }
}