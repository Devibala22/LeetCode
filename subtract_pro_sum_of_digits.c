int subtractProductAndSum(int n) {
    int sum=0;
    int pro=1;
    int d;
    while(n>0){
        d=n%10;
        n=n/10;
        sum=sum+d;
        pro=pro*d;
    }
    printf("Sum:%d",sum);
    printf("Product : %d ",pro);

     return pro - sum;
}
