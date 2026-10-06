// #include<stdio.h>
// #include<string.h>
// int maain()
// {
//     char operator;
//     printf("enter operator:");
//     scanf(" %c",&operator);
//     int num_1,num_2;
//     printf("enter a value:");
//     scanf("%d:",&num_1);
//     printf("enter a value:");
//     scanf("%d:",&num_2);
//     if(operator=='+')
//     {
//      printf("num_1+num_2 :");
//     }
//       else if(operator=='-')
//       {
//          printf("num_1-num_2:");
//       }
//        else if(operator=='*')
//        {
//           printf("num_1*num_2:");
//        }
//         else if(operator=='/'){
//          printf("num_1/num_2:");
//         }
//            else
//            {
//              printf("invalid operator:");
//            }

//   return 0;
// }


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

    // printf("%d %d %c", numberOne, numberTwo, opr);

}








