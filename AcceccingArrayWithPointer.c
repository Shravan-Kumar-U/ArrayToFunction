# include<stdio.h>

int main(){
   int mark[5];
   int *ptr;
   ptr = &mark[0]  /*mark*/ ;
   for (int i = 0; i <5; i++)
   {
    /* code */
    printf("Student %d :",i+1);
    scanf("%d",&mark[i]/*or ptr or mark*/ );
   }
   
   for (int i = 0; i <5; i++)
   {
    /* code */
    printf("The mark of student %d\n",mark[i]);
   }
   

    
    
    
    return 0;
}

    

