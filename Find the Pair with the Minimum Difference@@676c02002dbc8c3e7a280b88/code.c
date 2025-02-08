#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int diff=100;
    int a,b;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]<diff && arr[i]-arr[j]>0){
                diff=arr[i]-arr[j];
                a=arr[i];
                b=arr[j];
            }
        }
    }
    printf("%d %d",b,a);
}