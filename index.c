#include<stdio.h>
int main()
{
    int a,b,o;
    int result;
    
    scanf("%d",&a);
     scanf("%d",&b);
      scanf("%d",&o);
      
      switch(o){
      
        case 1:
          result = a + b;
            printf("Result: %d\n", result);
            break;
        
        case 2:
          result = a - b;
             printf("Result: %d\n", result);
             break;
        
        case 3:
          result = a * b;
            printf("Result: %d\n", result);
             break;
        
        case 4:
            if(b == 0)
            {
                printf("Invalid Operation\n");
            }
            else
            {
                result = a / b;
            }{
            printf("Result: %d\n",result);
            }
             break;
        
        case 5:
               if(b == 0)
            {
                printf("Invalid Operation\n");
            }
            else
            {
                result = a % b;
            }
            printf("Result: %d\n",result);
            }
                 break;
        default: 
        printf("Invalid Operation\n");
            break;
          
      
      return 0;
}