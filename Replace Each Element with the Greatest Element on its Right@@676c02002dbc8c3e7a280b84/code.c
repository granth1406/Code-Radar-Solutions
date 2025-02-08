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
    int max=arr[1];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(j==n-1){
                printf("-1");
                break;
            }
            if(arr[j]>max){
                max=arr[j];
            }
        }
        printf("%d ",max);
    }

}
    


