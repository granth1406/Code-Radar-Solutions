#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int sec_max=-1;
    for(int i=1;i<n;i++){
        if (arr[i]>max){
            sec_max=max;
            max=arr[i];
        }else if (arr[i]>sec_max && arr[i]!=max){
            sec_max=arr[i];
        }
    }
    printf("%d", sec_max);
}