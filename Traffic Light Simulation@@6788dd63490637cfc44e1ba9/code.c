#include <stdio.h>

int main() {
     char input;
     scanf("%c %c %c",&input);
     if(input =='R'|| input =='r')
{
    printf("Stop");

}
if(input =='G'|| input =='g')
{
    printf("Go");
    
}
if(input =='Y'|| input =='y')
{
    printf("Slow down");
    
}
else{
    printf("Invalid input");
}
    return 0;
}
