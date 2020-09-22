#include <stdio.h>
#include <stdlib.h>


int main()
{

 int value;
 int x;
 int sum=0;

 printf("Perfect number checker \nEnter a number\n");
 scanf("%d", &value);


if (value>0,value <1000){
for(x=1;x <value ;x++){
   if (value%x==0)
    {
        sum=sum+x;
    }

   }
}
    if(sum == value)
    {
        printf ("%d",value);
        printf (" is a perfect number \n");}
  else{
      printf("%d",value);
       printf(" is not a perfect number");
        }
return 0;
}

