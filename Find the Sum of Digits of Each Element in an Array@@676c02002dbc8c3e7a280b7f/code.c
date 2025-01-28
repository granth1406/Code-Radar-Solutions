#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        int ele;
        arr[i]=ele;
    }


    for(int j=0;j<size;j++){
        int sum=0;
        scanf("%d",&ele);
        while(ele>0){
            int n=ele%10;
            sum+=n;
            ele/=10;
        }
        printf("%d",sum);
    }
    
}