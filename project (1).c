#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void send();
void receive();

char s[100]="";
extern char(*ptr);
void main()
{
    	printf("      ****SHORT MESSAGE SERVICE****\n");
        int x;
        printf("Select your option\n");
	printf("1. To SEND msg\n");
	printf("2. To RECIEVE msg\n");

	scanf("%d",&x);

	switch(x)
	{
	    case 1:
	    {
		send();
	    }
	    break;

	    case 2:
	    {
		receive();
	    }
	    break;
	    
	}
}

void send(char *ptr)
{

    printf("send messege:\n");

    scanf(" %[^\n]s",s);
    main();
}

void receive(char *str)
{

    printf("receive message:%s\n",s);

}
