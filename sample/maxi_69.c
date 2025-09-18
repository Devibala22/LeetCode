int maximum69Number (int num) {
    int temp=num;
    int position=-1;
    int i=0;
    while(temp>0){
        if(temp%10==6){
            position=i;
        }
        temp/=10;
        i++;
    }
    if(position==-1){
        return num;
    }
    
        return num+3*(int)pow(10,position);
    
}
