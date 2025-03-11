#include <stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    int count=0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        int n=arr[i];
        int rev;
        while(n>0){
            int ele=n%10;
            n/=10;
            rev=rev*10+ele;
        }
        if(rev==arr[i]){
            count++;
        }
    }
    printf("%d",count);
}