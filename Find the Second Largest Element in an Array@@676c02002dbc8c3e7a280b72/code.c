#include <stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int sec_max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            sec_max=max;
            max=arr[i];
        }else if(arr[i]<max && arr[i]!=max){
            sec_max=arr[i];
        }
    }
    printf("%d",sec_max);
}