#include <stdio.h>      
  int main()      
  {      
      int a;   
      double b=0;     
      float i;  
      scanf("%d",&a);      
      for(i=1;i<=1000000;i++)      
      {  
        b=b+1/i;   
         if(b>a)   
         {  
         printf("%.0lf\n",i);    
         return 0;  
         }      
     }      
    return 0;  
 }
