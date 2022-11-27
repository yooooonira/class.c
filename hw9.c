#include <string.h>
#include <stdio.h>

int main(void)
{
	char ch[100];
	int len, i;
	printf("Input> ");
	fgets(ch, sizeof(ch), stdin);
	len = strlen(ch);
	for (i = 0; i < len; i++)
	{
		if ('a' <= ch[i] && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
		else if ('A' <= ch[i] && ch[i] <= 'Z')
		{
			ch[i] = ch[i] + 32;
		}
	}

	printf("Output> %s", ch);
	return 0;
}

