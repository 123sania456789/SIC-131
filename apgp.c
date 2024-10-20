#include<stdio.h>

int main()
{
   int a,b,c,d;
   printf("enter the three terms\n");

   while(1)
   {
   
   
   scanf("%d%d%d",&a,&b,&c);
      if(a==0&&b==0&&c==0)
	  {
	  	break;
	  }
      if((b-a)==(c-b)) 
      {
         d=c+(b-a);
         printf("AP=%d\n",d);
      }
      else if((b/a)==(c/b))
      {
         d=c*(b/a);
		 printf("GP=%d\n",d);
	  }
	  else
	  {
	  	printf("not an ap or gp\n");
	  }
	  
   }
   return 0;
   
}   
         		 