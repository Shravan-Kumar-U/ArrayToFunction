# include<stdio.h>



int main(){
    int arr[30],n,elm,indx;
    printf("Please Enter the Size of the array : ");
    scanf("%d",&n);
    printf("Next you have to enter the value for array \n");
    for(int i=0;i<n;i++){
        printf("Enter the element %d of the array :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Please enter the element you have to insert in the array :");
    scanf("%d",&elm);
    printf("please enter the position to be inserted \n");
    scanf("%d",&indx);
    n++;
    for(int i=n-1;i>=indx;i--){
        arr[i]= arr[i-1];

    }
    arr[indx-1]=elm;
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }

    
    return 0;
}

    

