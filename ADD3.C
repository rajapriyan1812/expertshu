#include<stdio.h>
#include<conio.h>

void main()
{

   int input1,input2,output1,output2,output3,output4,output5;
   clrscr();
   printf("enter the input=");
   scanf("%d,%d",&input1,&input2);
   //printf("enter thr input2=");
   //scanf("%d,",&input2);
   output1=input1+input2;
   printf("sum of values are=%d",output1);
   output2=input1-input2;
   printf("sub of values are=%d",output2);
   output3=input1/input2;
   printf("division of two numbers=%d",output3);
   output4=input1%input2;
   printf("mod of two numbers=%d",output4);
   output5=input1*input2;
   printf("multiplication of two numbers=%d",output5);
   getch();
}

