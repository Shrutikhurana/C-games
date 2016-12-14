
#include<stdio.h>
#include<conio.h>
#include<process.h>

int i,j,s=1;
char arr[3][3];

void display()
{
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
arr[i][j]=' ';
}}}

void output()
{
printf(" %c | %c | %c \n",arr[0][0],arr[0][1],arr[0][2]);
printf("-----------\n");
printf(" %c | %c | %c \n",arr[1][0],arr[1][1],arr[1][2]);
printf("-----------\n");
printf(" %c | %c | %c \n",arr[2][0],arr[2][1],arr[2][2]);
}

void input()
{
printf("\nUser kindly enter coordinates of your move\n");
scanf("%d %d",&i,&j);
arr[i][j]='0';
}

void result(char ch)
{
if(ch=='x')
 {
  printf("Computer wins\n");

 }
else
if(ch=='0')
 {
  printf("Congragulations!You win\n");

 }

}
void check()
{
if(arr[0][0]==arr[0][1] && arr[0][1]==arr[0][2]) result(arr[0][0]);

if(arr[1][0]==arr[1][1] && arr[1][1]==arr[1][2]) result(arr[1][0]);

if(arr[2][0]==arr[2][1] && arr[2][1]==arr[2][2]) result(arr[2][0]);

if(arr[0][0]==arr[1][0] && arr[1][0]==arr[2][0]) result(arr[0][0]);

if(arr[0][1]==arr[1][1] && arr[1][1]==arr[2][1]) result(arr[0][1]);

if(arr[0][2]==arr[1][2] && arr[1][2]==arr[2][2]) result(arr[0][2]);

if(arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2]) result(arr[0][0]);

if(arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0]) result(arr[0][2]);
}



int move1()
{
int s=1;
//printf("s in main%d\n",s);
if(arr[0][0]==arr[0][1] && arr[0][0]!=' ' && arr[0][2]==' ')
 {arr[0][2]='x'; s=0; printf("s is %d\n",s);}
else if(s!=0 && arr[0][1]==arr[0][2] && arr[0][1]!=' ' && arr[0][0]==' ')
 { arr[0][0]='x'; s=0;}
else  if(s!=0 && arr[0][0]==arr[0][2] && arr [0][0]!=' ' && arr[0][1]==' ')
 {  arr[0][1]='x';   s=0;}

else if(s!=0 && arr[1][0]==arr[1][1] && arr[1][0]!=' ' && arr[1][2]==' ')
 {arr[1][2]='x';  s=0;}
 else if(s!=0 && arr[1][1]==arr[1][2] && arr[1][2]!=' ' && arr[1][0]==' ')
  {arr[1][0]='x';  s=0;}
  else if(s!=0 && arr[1][0]==arr[1][2] && arr [1][0]!=' ' && arr[1][1]==' ')
  { arr[1][1]='x';   s=0;}

else if(s!=0 && arr[2][0]==arr[2][1] && arr[2][0]!=' ' && arr[2][2]==' ')
 {arr[2][2]='x';     s=0;}
 else if(s!=0 && arr[2][1]==arr[2][2] && arr[2][2]!=' ' && arr[2][0]==' ')
  {arr[2][0]='x';    s=0;}
  else if(s!=0 && arr[2][0]==arr[2][2] && arr[2][0]!=' ' && arr[2][1]==' ')
   {arr[2][1]='x';   s=0;}

else if(s!=0 && arr[0][0]==arr[1][0] && arr[0][0]!=' ' && arr[2][0]==' ')
 {arr[2][0]='x';     s=0;}
 else if(s!=0 && arr[0][0]==arr[2][0] && arr[0][0]!=' ' && arr[1][0]==' ')
  {arr[1][0]='x';    s=0;}
  else if(s!=0 && arr[1][0]==arr[2][0] && arr[1][0]!=' ' && arr[0][0]==' ')
  { arr[0][0]='x';   s=0;}

else if(s!=0 && arr[0][1]==arr[1][1] && arr[0][1]!=' ' && arr[2][1]==' ')
 {arr[2][1]='x';     s=0;}
 else if(s!=0 && arr[0][1]==arr[2][1] && arr[0][1]!=' ' && arr[1][1]==' ')
  {arr[1][1]='x';    s=0;}
  else if(s!=0 && arr[1][1]==arr[2][1] && arr[1][1]!=' ' && arr[0][1]==' ')
  { arr[0][1]='x';   s=0;}

else if(s!=0 && arr[0][2]==arr[1][2] && arr[0][2]!=' ' && arr[2][2]==' ')
 {arr[2][2]='x';     s=0;}
 else if(s!=0 && arr[0][2]==arr[2][2] && arr[0][2]!=' ' && arr[1][2]==' ')
  {arr[1][2]='x';    s=0;}
 else if(s!=0 && arr[1][2]==arr[2][2] && arr[1][2]!=' ' && arr[0][2]==' ')
  { arr[0][2]='x';   s=0;}


else if(s!=0 && arr[0][0]==arr[1][1] && arr[0][0]!=' ' && arr[2][2]==' ')
 {arr[2][2]='x';     s=0;}
 else if(s!=0 && arr[0][0]==arr[2][2] && arr[0][0]!=' ' && arr[1][1]==' ')
  {arr[1][1]='x';    s=0;}
  else if(s!=0 && arr[1][1]==arr[2][2] && arr[1][1]!=' ' && arr[0][0]==' ')
  { arr[0][0]='x';   s=0;}

else if(s!=0 && arr[0][2]==arr[1][1] && arr[0][2]!=' ' && arr[2][0]==' ')
 {arr[2][0]='x';     s=0;}
 else if(s!=0 && arr[0][2]==arr[2][0] && arr[2][0]!=' ' && arr[1][1]==' ')
  {arr[1][1]='x';    s=0;}
  else if(s!=0 && arr[1][1]==arr[2][0] && arr[1][1]!=' ' && arr[0][2]==' ')
  { arr[0][2]='x';   s=0;}
  return s;

}

void move2()
{  int ctr=1,l=0;

while(1)
{

if(arr[1][0]==arr[0][1] && arr[1][0]!=' ' && ctr!=0 && arr[0][0]==' ') {arr[0][0]='x'; ctr=0; break;}
if(arr[0][1]==arr[1][2] && arr[0][1]!=' ' && ctr!=0 && arr[0][2]==' ') {arr[0][2]='x'; ctr=0; break;}
if(arr[2][1]==arr[1][2] && arr[2][1]!=' ' && ctr!=0 && arr[2][2]==' ') {arr[2][2]='x'; ctr=0; break;}
if(arr[1][0]==arr[2][1] && arr[1][0]!=' ' && ctr!=0 && arr[2][0]==' ') {arr[2][0]='x'; ctr=0; break;}

if(arr[0][1]==arr[2][0] && arr[0][1]!=' ' && ctr!=0 && arr[0][0]==' ') {arr[0][0]='x'; ctr=0; break;}
if(arr[1][0]==arr[0][2] && arr[1][0]!=' ' && ctr!=0 && arr[0][0]==' ') {arr[0][0]='x'; ctr=0; break;}

if(arr[0][1]==arr[2][2] && arr[0][1]!=' ' && ctr!=0 && arr[0][2]==' ') {arr[0][2]='x'; ctr=0; break;}
if(arr[1][2]==arr[0][0] && arr[1][2]!=' ' && ctr!=0 && arr[0][2]==' ') {arr[0][2]='x'; ctr=0; break;}

if(arr[1][2]==arr[2][0] && arr[1][2]!=' ' && ctr!=0 && arr[2][2]==' ') {arr[2][2]='x'; ctr=0; break;}
if(arr[2][1]==arr[0][2] && arr[2][1]!=' ' && ctr!=0 && arr[2][2]==' ') {arr[2][2]='x'; ctr=0; break;}

if(arr[2][1]==arr[0][0] && arr[2][1]!=' ' && ctr!=0 && arr[2][0]==' ') {arr[2][0]='x'; ctr=0; break;}
if(arr[1][0]==arr[2][2] && arr[2][2]!=' ' && ctr!=0 && arr[2][0]==' ') {arr[2][0]='x'; ctr=0; break;}



 if(arr[1][1]==' ' && ctr!=0)
{arr[1][1]='x'; ctr=0; break;}

else if(arr[1][1]=='x')
{
if(arr[0][1]==' ' && ctr!=0)
{arr[0][1]='x';  ctr=0; break;
}
else
if(arr[1][2]==' ' && ctr!=0)
{arr[1][2]='x';   ctr=0; break;
}
else
if(arr[2][1]==' ' && ctr!=0)
{arr[2][1]='x';   ctr=0; break;
}

else
if(arr[1][0]==' ' && ctr!=0)
{arr[1][0]='x';   ctr=0; break;
}

else
 for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{
if(arr[i][j]==' ')
{arr[i][j]='x';l=1;
break;}
if(l==1)
break;
}}
}

else if(arr[1][1]=='0')
{
if(arr[0][0]==' ' && ctr!=0)
{arr[0][0]='x';  ctr=0; break;
}
else
if(arr[0][2]==' ' && ctr!=0)
{arr[0][2]='x';   ctr=0; break;
}
else
if(arr[2][0]==' ' && ctr!=0)
{arr[2][0]='x';   ctr=0; break;
}

else
if(arr[2][2]==' ' && ctr!=0)
{arr[2][2]='x';   ctr=0; break;
}

else
 for(i=0;i<3;i++)
{ for(j=0;j<3;j++)
{
if(arr[i][j]==' ')
{arr[i][j]='x';l=1;
break;}
if(l==1)
break;
}}
}

}
}

int main()
//void main()
{
int k,t,f;
//clrscr();

display();

for(k=0;k<4;k++)
{
input();
t=move1();
if(t)
{move2();}

check();
output();
//printf("\nMove%d\n",k+1);
}
//
input();
output();
/*
{ for(i=0;i<3;i++)
  for(j=0;j<3;j++)
  if(arr[i][j]!=' ')
  {f=1;break;}
  else
  f=0;

if(f==0)
printf("Its a draw\n");
} */

getch();
return 0;
}
