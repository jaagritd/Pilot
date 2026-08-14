#include<stdio.h>

int main(){

    int n;
    int prime = 0;
    printf("Enter a number \n");
    scanf("%d" , &n);

   if (n==0 || n==1)
    {
      prime = 1;
    }
    else{
    for (int i = 2; i < n; i++)
    {
        if (i*i>n){
        break;
        }
        if (n%i == 0)
        {
          prime = 1;
         break;
        }
    }}

    if (prime) {
    printf("%d is not a prime number \n" , n);
    }
   else{
   printf("%d is a prime number \n" , n);
   }
    
    
     return 0;
    }
