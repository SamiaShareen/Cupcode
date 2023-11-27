#include<stdio.h>
#include<string.h>

int main(){
    char s[100],t[100];    //a-z ,A-Z, 0-9, A=65,B=66
    scanf("%s%s",s,t);
    strcat(s," ");
    strcat(s,t);
    printf("%s\n",s);
    return 0;
}