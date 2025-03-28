int factorialRange(int start,int end){
    

    int fact=1;
    for(int i=start;i<=end;i++){
        for(int j=1;j<=end;j++){
            fact=fact*j;
        }
        printf("%d\n",fact);
    }
}