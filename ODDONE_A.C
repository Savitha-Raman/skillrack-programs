#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{ char a[100];
  int i,j=0,length,mul,sum,b[15];
  int ans,diff[15],count,k,temp;
  clrscr();
  fgets(a,100,stdin);
  i=strlen(a)-1;
  while(i>=0)
  {  sum=0;mul=1;
     while(i>=0&&a[i]!=' '&&a[i]!='\n')
     {  sum=sum+(a[i]-48)*mul;
	mul=mul*10;
	i--;
     }
     i--;
     b[j]=sum;
     j++;
  }
  for(i=0;i<j;i++)
  { for(k=i+1;k<j;k++)
    { if(b[i]>b[k])
      {  temp=b[k];
	 b[k]=b[i];
	 b[i]=temp;
      }
    }
  }
  length=j;k=0;
  for(i=1;i<length;i++)
  {  diff[k]=b[i+1]-b[i];
     k++;
  }
  length=length-2;
  for(i=1;i<length;i++)
  {  for(j=i+1;j<length;j++)
     {  if(diff[i]==diff[j])
	  count=diff[i];
     }
  }
  for(i=0;i<length;i++)
  {  if(diff[0]!=count)
       {  ans=b[1];
	  break;
       }
     else if(diff[i]!=count&&diff[i+1]!=count)
       {  ans=b[i+2];
	  break;
       }
     else
       ans=-1;
  }
  printf("%d",ans);
  getch();
}