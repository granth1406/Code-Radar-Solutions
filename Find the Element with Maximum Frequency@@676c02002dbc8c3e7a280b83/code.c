#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }

    int max_ele=arr[0];
    int max_freq=0;
    int count;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max_freq){
            max_freq=count;
            max_ele=arr[i];
        }
    }
    printf("%d",max_ele);
}