/*
	program name: tower of hanoi
	program written: Sagar Rajendra Shinde
	year: S.Y.CSE 
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
int pop1(void );
int pop2(void );
int pop3(void );
void push1(int );
void push2(int );
void push3(int );
void display(void );
void star(void );
int top1=2,top2=-1,top3=-1,i,n1,n2,a1,a2,a3,b1,b2,b3,c,m;
int stack1[3]={3,2,1};
int stack2[3]={0,0,0};
int stack3[3]={0,0,0};
int main()
{
int p,k;
clrscr();
star();
printf("\x1B[1;%dm",33);
printf("\n\t  welcome to tower of hanoi game\n\n\t\t1:start\n\n\t\t2:quit\n\n");
star();
printf("\n\n\n");
scanf("%d",&k);
if(k==1)
{
clrscr();
star();
printf("\n\n\tloading...\n\n\n");
star();
delay(5000);
}
if(k==1)
{
clrscr();
star();
printf("\x1B[1;%dm",36);
for(i=2;i>=0;i--)
{
 printf("\x1B[1;%dm",36);
 printf("%d\t%d\t%d\n",stack1[i],stack2[i],stack3[i]);
}
printf("\n\n");
star();
sos:
printf("\x1B[1;%dm",30);
printf("\n\tenter tower number to pop the element : ");
scanf("%d",&n1);
if(n1==1)
{
 p=pop1();
}
else if(n1==2)
{
p=pop2();
}
else if(n1==3)
{
p=pop3();
}
else
{
 printf("\n\nerror tower1 ");
}
printf("\x1B[1;%dm",30);
printf("\n\tenter tower number push the element : ");
scanf("%d",&n2);
if(n2==1)
{
clrscr();
push1(p);
}
else if(n2==2)
{
clrscr();
push2(p);
}
else if(n2==3)
{clrscr();
push3(p);
}
else
{
 printf("\n\nerror tower 2");
}
display();
printf("\n\t\t\tnext");
m=1;
delay(3000);
if(m==1)
{
 goto sos;
}
else
{
 exit(0);
}
}
else
{ clrscr();
star();
 printf("\x1B[1;%dm",31);
 printf("\n\n\t\tTHANK YOU for using\n\n");
star();
}
getch();
return 0;
}
int pop1(void )
{
 a1=stack1[top1];
 stack1[top1]=0;
 top1=top1-1;
 return a1;
}
int pop2(void )
{
 a2=stack2[top2];
 stack2[top2]=0;
 top2=top2-1;
 return a2;
}
int pop3(void )
{
 a3=stack3[top3];
 stack3[top3]=0;
 top3=top3-1;
 return a3;
}
void push1(int p)
{
 int u,k;
top1=top1+1;
b1=0;
stack1[top1]=b1;
u=p;
p=b1;
b1=u;
stack1[top1]=b1;
if(top1>0)
{
 k=top1-1;
 if(stack1[top1]>stack1[k])
 {
  printf("\n\n\nerror lower number is smaller\n\n");
  exit(1);
 }
}
}
void push2(int p)
{
 int u,k;
top2=top2+1;
b2=0;
stack2[top2]=b2;
u=p;
p=b2;
b2=u;
stack2[top2]=b2;
if(top2>0)
{
 k=top2-1;
 if(stack2[top2]>stack2[k])
 {
  printf("\n\n\nerror lower number is smaller\n\n");
  exit(1);
 }
}
}
void push3(int p)
{
 int u,k;
top3=top3+1;
b3=0;
stack3[top3]=b3;
u=p;
p=b3;
b3=u;
stack3[top3]=b3;
if(top3>0)
{
 k=top3-1;
 if(stack3[top3]>stack3[k])
 {
  printf("\n\n\nerror lower number is smaller\n\n");
  exit(1);
 }
}
}
void display(void )
{
 clrscr();
 star();
 printf("\n\n");
 printf("\x1B[1;%dm",36);
 for(i=2;i>=0;i--)
 {
  printf("%d\t%d\t%d\n",stack1[i],stack2[i],stack3[i]);
 }
 printf("\n\n");
 star();
}
void star(void )
{
 printf("\x1B[1;%dm",32);
 printf("\n************************************************\n\n\n\n");
}
