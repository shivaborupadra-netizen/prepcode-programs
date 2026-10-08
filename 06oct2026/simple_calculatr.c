#include <stdio.h>
#include <string.h>
int main(){
    int numberOne;
    int numberTwo;
    char opr;
    scanf("%d %d %c", &numberOne, &numberTwo, &opr);
    if (opr == '+'){
        printf("%d", (numberOne + numberTwo));
    } else if(opr == '-') {
        printf("%d", (numberOne - numberTwo));
    }
      else if(opr == '*') {
        printf("%d",(numberOne * numberTwo));
    }
    else if(opr == '/') {
        printf("%d",(numberOne / numberTwo));
    }
    else
    {
        printf("in valid operator");
    }
 return 0;
}








