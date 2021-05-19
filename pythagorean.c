#include<stdio.h>
#include<cs50.h>
int main(void){
float a = get_float("Enter side 1\n");
float b = get_float("Enetr side 2\n");
float c = get_float("Enetr side 3\n");
if(a>b && a>c){
if(b*b+c*c==a*a)
printf("Yes");
else
printf("No");
}
else if(b>a && b>c){

if(a*a+c*c==b*b)
printf("Yes");
else
printf("No");
}
else if(c>a && c>b){

if(c*c==b*b+a*a)
printf("Yes");
else
printf("No");
}
}
