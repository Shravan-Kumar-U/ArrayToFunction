# include<stdio.h>
# include<string.h>
 
    


int main(){

     //dumb attempt to print the string 
    char str[]="Cprogramming";
    char *ptr = str;
    while (*ptr != '\0')
    {
        /* code */
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    printf("**********************************************************\n");

    //Fine method to print the string 
    char string[]="shivaparvathi";
    printf("%s",string);

    
    
    
    

    
    return 0;
}

    

