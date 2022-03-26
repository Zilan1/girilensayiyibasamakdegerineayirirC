#include <stdio.h>
#include <stdlib.h>

//1 ile 20 arasindaki cift sayilari gosteren 
//ancak 14 sayisini yazdirmayan kod ornegi

int main() {

   int i=1;
      
   while(i<=20)
   {
   	 if(i%2==0 && i!=14)
   
    {
    	printf("%d\n",i);
	}
      i++;
   }




	return 0;
}
