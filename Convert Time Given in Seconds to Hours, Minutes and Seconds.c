#include<stdio.h>

int main()
{
   
    int h,m,s,a,b;
    
    printf("Enter time in seconds: ");
    scanf("%d",&s);
  
    h=s/3600;//1 hour is 3600 seconds
    a=s%3600;
    m=a/60;//1 minute is 60 seconds
    b=s%60;
    
    printf("%d seconds = %d hours : %d minutes : %d seconds", s,h,m,b);
   
  
   
    return 0;
}