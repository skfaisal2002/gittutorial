#include<stdio.h>

int main(){
    int a,b,c;

    printf("ENTER A NUMBER=");
    scanf("%d",&a);

    printf("ENTER A NUMBER=");
    scanf("%d",&b);

    printf("which you operate this work=");
    scanf("%d",&c);

    switch (a,b,c) {

    case 1: printf("ADDITION IS %d",a+b);
         break;

    case 2: printf("MULTIPLICATION IS %d",a*b);
         break;

    case 3: printf("SUBTRACTION IS %d",a-b);
         break;

    case 4: printf("DIVISION IS %d",a/b);
         break;  

    case 5: printf("REMAINDER IS %d",a%b);
         break;
    
    default:printf("INVALID NUMBER ");
        break;
    }

}