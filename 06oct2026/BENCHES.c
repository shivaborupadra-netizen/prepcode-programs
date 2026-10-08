#include<stdio.h>
int main()
{
    int benches,students_left;
    int students;
    printf("enter a number:");
    scanf("%d",&students);
    int bench_capacity;
    printf("enter a value:");
    scanf("%d",&bench_capacity);
  benches=(students/bench_capacity);
  students_left=students-(benches*bench_capacity);
  printf("benches:%d",benches);
  printf("students_left:%d \n",students_left);
}