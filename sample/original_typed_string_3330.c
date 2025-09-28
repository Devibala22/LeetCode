int possibleStringCount(char* word) {
    int len=strlen(word);
    int count=1;
    int i;
    for(i=1;i<len;i++){
        if(word[i]==word[i-1]){
            count++;
        }
    }
    return count;
}
