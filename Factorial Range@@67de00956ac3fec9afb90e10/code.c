int factorialRange(int start,int end){
    

    int fact=1;
    for(int i=start;i<=end;i++){
        for(int j=start;j<=end;j++){
            fact=fact*j;
        }
    }
}