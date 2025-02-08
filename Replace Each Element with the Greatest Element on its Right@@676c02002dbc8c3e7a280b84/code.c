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
    for(int i=0;i<n;i++){
        int max=arr[i+1];
        for(int j=i+1;j<n;j++){
            if(arr[j]>max){
                max=arr[j];
            }
        }
        if(i!=n-1){
            printf("%d ",max);
        }else{
            printf("-1");
        }
    }

}
    


