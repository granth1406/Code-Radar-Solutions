#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int inc=1;
    int dec=1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[i+1]){
                inc=0;
            }
        }
    }

    for(int i=0;i>n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[i+1]){
                dec=0;
            }
        }
    }

    if(inc||dec){
        printf("YES");
    }else{
        printf("NO");
    }
}