#include<stdio.h>
void consume_space()
{
	int c;
	c=getchar();
	while(1)
	{
		switch(c){
			case ' ':
			case ',':
			case '\t':
			case ';':
			case '.':
			c=getchar();
			continue;
			default:
			ungetc(c,stdin);
			return ;
		}
		}
	}
	int is_space(int c)
	{
		switch(c)
		{
			case ' ':
			case ',':
			case '\t':
			case ';':
			case '.':
			c=getchar();
			default:
			return 0;
		}
	}
	int main()
	{
		int c;
		int count=0;
		c=getchar();
		if(is_space(c))
{
	consume_space();	}	
	c=getchar();
    while(c!=-1)
    {
    	if(is_space(c)){
		count++;
	consume_space();
	}
	c=getchar();	
	}
	printf("%d",count);
	return 0;
}
