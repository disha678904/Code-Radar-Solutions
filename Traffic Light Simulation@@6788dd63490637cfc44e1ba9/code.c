#include <stdio.h>

int main() {
     char input;
     scanf("%c %c %c",&input);
if(input =='R'|| input =='r')
{
    printf("Stop");

}
 else if(input =='G'|| input =='g')
{
    printf("Go");
    
}
 else if(input =='Y'|| input =='y')
{
    printf("Slow Down");
    
}
else{
    printf("Invalid input");
}
    return 0;
}
