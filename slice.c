# include<stdio.h>

void slice(char s[],int a,int b){

    int i=0;
    while ((a+i)<b)
    {
        /* code */
        s[i]=s[a+i];
        i++;

    }
    s[i]='\0';
    

}

int main(){
    char s[]="swamiyeAyyappa";
    slice(s,0,7);
    printf("%s",s);
    return 0;
}