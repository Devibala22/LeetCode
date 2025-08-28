bool isPalindrome(int x) {
    long long rever=0;
    int d1;
    int ori=x;
    while(x>0){
        d1=x%10;
        rever=rever*10+d1;
        x=x/10;
        
    }
    if(rever==ori){
        return true;
    }
    return false;
}
