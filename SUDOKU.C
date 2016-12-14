#include<stdio.h>
#include<conio.h>
/*
int arr[9][9]={{0,6,0,3,0,0,8,0,4},
	       {5,3,7,0,9,0,0,0,0},
	       {0,4,0,0,0,6,3,0,7},
	       {0,9,0,0,5,1,2,3,8},
	       {0,0,0,0,0,0,0,0,0},
	       {7,1,3,6,2,0,0,4,0},
	       {3,0,6,4,0,0,0,1,0},
	       {0,0,0,0,6,0,5,2,3},
	       {1,0,2,0,0,9,0,8,0}};


int arr[9][9]={{8,0,0,3,4,0,0,7,9},
	       {1,0,0,6,0,0,3,0,0},
	       {0,9,0,7,0,0,0,0,0},
	       {0,0,0,0,0,0,8,3,2},
	       {5,0,0,0,9,0,0,0,7},
	       {4,8,6,0,0,0,0,0,0},
	       {0,0,0,0,0,3,0,1,0},
	       {0,0,1,0,0,2,0,0,8},
	       {2,5,0,0,7,6,0,0,3}};
int arr[9][9]={{0,0,0,0,0,8,7,0,0},
	       {0,0,0,7,0,0,5,0,1},
	       {0,5,0,0,0,0,0,9,0},
	       {4,0,7,1,0,0,0,0,2},
	       {1,8,0,2,0,3,0,7,6},
	       {2,0,0,0,0,6,1,0,5},
	       {0,7,0,0,0,0,0,6,0},
	       {5,0,3,0,0,2,0,0,0},
	       {0,0,2,4,0,0,0,0,0}};
*/
int arr[9][9]={{0,6,0,5,4,0,0,0,0},
	       {0,0,7,0,0,0,0,0,1},
	       {0,0,4,0,0,3,8,9,0},
	       {0,0,9,2,0,6,0,0,8},
	       {6,0,0,0,0,0,0,0,2},
	       {8,0,0,7,0,9,4,0,0},
	       {0,5,1,9,0,0,3,0,0},
	       {2,0,0,0,0,0,7,0,0},
	       {0,0,0,0,8,5,0,2,0}};

int arr1[9][9];

//int arr[9][9]={0};
void display()
{
int a,b;
for(a=0;a<9;a++)
{
 for(b=0;b<9;b++)
 {
 printf("%d ",arr[a][b]);
 }
printf("\n");
}
}

void copy()
{
 int a,b;
for(a=0;a<9;a++)
{
 for(b=0;b<9;b++)
 {
 arr1[a][b]=arr[a][b];
 }

}
}


int mark(int a,int b)
{
 if(arr1[a][b]==0)
 return 0;
 else
 return 1;

}


int possible(int l,int m,int n)
{

int t,k,q,w;

for(t=0;t<9;t++)
{
 if(arr[l][t]==n)
 return 0;

 if(arr[t][m]==n)
 return 0;
}

if(l<3 && m<3)
{
 for(q=0;q<3;q++)
 {
  for(w=0;w<3;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}

if(l<3 && m>2 && m<6)
{
 for(q=0;q<3;q++)
 {
  for(w=3;w<6;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}

if(l<3 && m>5)
{
 for(q=0;q<3;q++)
 {
  for(w=6;w<9;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}



if(l>2 && l<6 && m<3)
{
 for(q=3;q<6;q++)
 {
  for(w=0;w<3;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}

if(l>2 && l<6 && m>2 && m<6)
{
 for(q=3;q<6;q++)
 {
  for(w=3;w<6;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}

if(l>2 && l<6 && m>5 && m<9)
{
 for(q=3;q<6;q++)
 {
  for(w=6;w<9;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}



if(l>5 && m<3)
{
 for(q=6;q<9;q++)
 {
  for(w=0;w<3;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}

if(l>5 && m>2 && m<6)
{
 for(q=6;q<9;q++)
 {
  for(w=3;w<6;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}

if(l>5 && m>5)
{
 for(q=6;q<9;q++)
 {
  for(w=6;w<9;w++)
  {
   if(arr[q][w]==n)
   return 0;
  }
 }
}


return 1;
}


void backtrack()
{
int i,j,n=1,var=0,y=0,num;


for(i=0;i<9;i++)
{
 for(j=y;j<9;j++)
 { var=0;
  for(num=n;num<10;num++)
  {//display(); getch();  printf("%d %d\n",num,possible(i,j,num));
   if(arr[i][j]==0 && possible(i,j,num))
   {
    arr[i][j]=num;
   // display(); getch();printf("\n"); // printf("%d %d\n",num,possible(i,j,num));
    var=1;
    n=1;
    y=0;
    break;
   }
  }
   if(var==0 && arr[i][j]==0)
   {
    //printf("true\n");//getch();

     arr[i][j]=0;



     if(j==0)
     { j=8;i=i-1; }
     else
     j=j-1;

   while(mark(i,j)==1)
   {
    if(j==0)
     { j=8;i=i-1; }
     else
     j=j-1;

   }
  //  printf("%d %d %d\n",i,j,c);

     n=arr[i][j]+1;
     arr[i][j]=0;
  //  display();
  //  printf("\n");
  //  getch();
     y=j;
     i=i-1;
    }

 }
}


}



void main()
{

clrscr();

display();
printf("\n");
copy();
backtrack();
display();
printf("\n");
getch();
//exit(0);



getch();
}