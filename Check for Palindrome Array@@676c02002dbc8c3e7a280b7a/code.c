#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int r=1;
    int right=0,left=n-1;
    while(right<left){
        if(arr[left]!=arr[right]){
            r=0;
        }
        right++;
        left--;
    }
    if(r==0){
        printf("NO");
    }else{
        printf("YES");
    }

}