#include <stdio.h>
#include <stdlib.h>
int main() {
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        int ele;
        ele=abs(ele);
        scanf("%d",&ele);
        int abs_ele=abs(ele);
        arr[i]=abs_ele;
        int sum=0;
        while(abs_ele>0){
            int n=abs_ele%10;
            sum+=n;
            abs_ele/=10;
        }
        printf("%d ",sum);
    }
}