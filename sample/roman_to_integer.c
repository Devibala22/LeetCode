int romanToInt(char* s) {

    int value(char c);
    int total=0;
    int i=0;
    while(s[i]!='\0'){
        int s1=value(s[i]);
        int s2=value(s[i+1]);
        if(s1>=s2){
            total+=s1;
        }
        else{
            total+=(s2-s1);
            i++;
        }
        i++;
    }
return total;
}
int value(char c) {   // 👈 define later
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; 
    }
}
