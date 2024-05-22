# include<stdio.h>



int main(){
    int arr[10],n;
    printf("Enter the number to get its multiple table : ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        arr[i]=n*(1+i);
        
    }
    for(int i=0;i<10;i++){
        printf("%d X %d = %d\n",n,i+1,arr[i]);
    }

    
    return 0;
}

    

