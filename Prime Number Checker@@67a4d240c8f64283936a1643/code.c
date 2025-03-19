int isPrime(int num){
    int count=0;
    for(int i=2;i<=num;i++){
        if(num==1){
            return 0;
        }
        if(num%i==0){
            count++;
        }
    }
    if(count>1){
        return 0;
    }else{
        return 1;
    }
}