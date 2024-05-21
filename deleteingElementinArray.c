# include<stdio.h>
 
    


int main(){
    int arr[30],n,key,indx;
    printf("Enter the size of the array  : ");
    scanf("%d",&n);
    printf("Enter the element for the array \n");
    for (int i = 0; i <n; i++)
    {
        printf("Enter the value for the posistion %d : ",i+1);
        /* code */scanf("%d",&arr[i]);
    }

    printf("Enter the position to be deleted :");
    scanf("%d",&indx);
    for (int  i = indx-1; i <n-1 ; i++)
    {
        /* code */
        arr[i]=arr[i+1];
    }
    
    
    n--;
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d\t",arr[i]);
    }
    
    
    
    

    
    return 0;
}

    

