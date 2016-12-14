#include<stdio.h>
#include<conio.h>

int arr[25][25],i,j,count,mcount=0;

void create(int size)
{

 for(i=0;i<size;i++)
 { for(j=0;j<size;j++)
   {
    arr[i][j]=0;
   }
 }
}

void display(int size)
{
 for(i=0;i<size;i++)
 { for(j=0;j<size;j++)
   {
    printf("%d\t",arr[i][j]);
   }
    printf("\n");
 }
}

int check(int size,int i,int j)
{
 int x,y,l,a,b;

     x=i; y=j;
     while(x>0 && y>0)
     {
      x=x-1;
      y=y-1;
      arr[x][y]=-1;
     }

     x=i; y=j;
     while(y<size && x<size)
     {
      x=x+1;
      y=y+1;
      arr[x][y]=-1;
     }

     x=i; y=j;
     while(x>0 && y<size)
     {
      x=x-1;
      y=y+1;
      arr[x][y]=-1;
     }

     x=i; y=j;
     while(x<size && y>0)
     {
      x=x+1;
      y=y-1;
      arr[x][y]=-1;
     }

     for(l=0;l<size;l++)
     {
      if(arr[i][l]!=1)
      arr[i][l]=-1;

      if(arr[l][j]!=1)
      arr[l][j]=-1;
     }



  for(a=0;a<size;a++)
  {
   for(b=0;b<size;b++)
    {
	if(arr[a][b]==0)
     {
      arr[a][b]=1;
      count++;
//      printf("*%d*\n",size);
      check(size,a,b);
     }
    }
  }
return count;
}



void queen(int size)
{
int s,i,j,f1=0,f2=-1,cnt=0,n;
  n=size;
 for(s=0;s<(size*size);s++)
 {
   create(size);
   if(f2==size-1)
   { f2=0; f1=f1+1;
   }
   else
   f2++;
   printf("\nf1 is %d f2 is %d\n",f1,f2);
  for(i=f1;i<size;i++)
  {
   for(j=f2;j<size;j++)
    {
	if(arr[i][j]==0)
     {
      arr[i][j]=1;
      count=1;
      cnt=check(size,i,j);
//      printf("**%d*\n",cnt);


      if(cnt==n)
      {
      mcount++;
      display(size);
      printf("\n\n");
      getch();
      }

     }
    }
  }

 }

}


int main()
{
int size;
//clrscr();

printf("Enter size\n");
scanf("%d",&size);
create(size);
display(size);
queen(size);
printf("Total permuntaions are %d\n",mcount);

getch();
}
