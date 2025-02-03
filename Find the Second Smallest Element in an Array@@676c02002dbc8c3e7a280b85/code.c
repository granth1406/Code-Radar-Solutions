#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min=-1000;
    int sec_min=a[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            sec_min=min;
            min=arr[i];
        }else if(arr[i]<sec_min && arr[i]!=min){
            sec_min=arr[i];
        }
    }
    if(sec_min==-1){
        printf("-1");
    }else{
        printf("%d",sec_min);
    }
}