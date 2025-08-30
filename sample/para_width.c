#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int width;
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    printf("Enter the width: ");
    scanf("%d", &width);
    int len=strlen(str);
    for(int i=0;i<len;i+=width){
        for(int j=0;j<width && (i+j)<len;j++){
            printf("%c",str[i+j]);
        }
        printf("\n");
    }
    return 0;
    }
