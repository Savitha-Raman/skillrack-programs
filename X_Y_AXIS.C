#include<stdio.h>
#include<conio.h>
#include<string.h>
int x,m=0,y,k=0,i,j=0,n[100]={0},length;
char a[100],b[100];
int scan(){
  for(i=j;i<length;i++)
  { b[k]=a[i];
    k++;i++;
    while(a[i]>47&&a[i]<58)
    { n[m]=(n[m]*10)+(a[i]-'0');
      i++;
    }
    m++;
    j=i;
    scan();
  }
  return 0;
 }
void main(){
  clrscr();
  scanf("%d %d\n",&x,&y);
  fgets(a,100,stdin);
  length=strlen(a);
  scan();
  for(i=0;i<k;i++)
  { if(b[i]=='E')
     x=x+n[i];
    else if(b[i]=='W')
    x=x-n[i];
    else if(b[i]=='N')
    y=y+n[i];
    else if(b[i]=='S')
    y=y-n[i];
  }
  printf("%d %d",x,y);
  getch();
}