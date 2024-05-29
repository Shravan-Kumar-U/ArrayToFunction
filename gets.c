# include<stdio.h>

int main(){
    char s[10];
    printf("Enter your name :\n");
    gets(s);//gets is used to print the multiword strings which has empty spaces in between them
    puts(s);//
    return 0;
}