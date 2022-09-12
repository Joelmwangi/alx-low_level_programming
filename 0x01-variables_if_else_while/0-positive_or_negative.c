#include <stdlib.h>                                               

#include <time.h>                                                 

#include <stdio.h>                                                

                                                                  

/**                                                               

 *                                                                

 * main - print if the number is a negative, positive or Zero     

 *                                                                

 * Description: using the main function                           

 * this program prints positve numbers, negative numbers or Zero n

umber                                                             

 */                                                               

                                                                  

int main(void)                                                    

{                                                                 

int n;                                                            

                                                                  

srand(time(0));                                                   

                                                                  

n = rand() - RAND_MAX / 2;                                       

                                                                  

if (n > 0)                                                        

{                                                                 

        printf("%i is a positive number\n", n);                   

                                                                  

}                                                                 

                                                                  

else if (n == 0)                                                  

{                                                                 

        printf("%i is a zero number\n", n);                       

                                                                  

}                                                                 

                                                                  

else if (n < 0)                                                   

                                                                  
{
	printf("%i is a negative number\n", n);

}

return(0);

}





