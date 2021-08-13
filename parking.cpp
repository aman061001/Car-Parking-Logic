#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 10
char s[max]={' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
char s1[]={'X',' '};
int ch;
void in()
{
	int n;
	do
	{
	printf("enter where you want to park your veichle\n");
    e:scanf("%d",&n);
  //  if(n-1==max)
    //{
    //	printf("only 10 parking slots are available\n");
    //    printf("come later");
  //	}
    if(s[n-1]==s1[0])
    {
	printf("veichle already parked\n");
	printf("enter again where you wanna park\n");
	goto e;
    }
	else
	goto f;
    }while(s[n-1]!=s1[0] ||n-1==max);
    f:printf("you parked ur veichle atparking slot %d\n",n);
    s[n-1]=s1[0];
} 
void out()
{
	int n;
	do
	{
	printf("enter where you had park your veichle\n");
    g:scanf("%d",&n);
	if(s[n-1]==s1[1])
	{
	printf("veichle not parked\n");
	printf("enter again where you had park\n");
	goto g;
    }
	else
	goto h;
    }while(s[n-1]!=s1[1]);
    h:printf("thanks for parking you can take your veichle from parking slot%d\n",n);
    s[n-1]=s1[1];
}
void display()
{
	printf("[%c][%c][%c][%c][%c][%c][%c][%c][%c][%c]\n",s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],s[9]);
	
}
int main()
{
	printf("enter:\n1.IN\n2.OUT\n3.DISPLAY\n4.EXIT\n");
	do
	{
		printf("enter you choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:in();
				   display();
				   break;
			case 2:out();
			       display();
				   break;
			case 3:display();
				   break;
			case 4:exit(0);
					break;
		//	default:printf("INVALID CHOICE!!!!");
		}
	}while(ch!=4);
	return 0;
}
