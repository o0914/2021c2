#include <stdio.h>
char line[1000][20];
		//��   �r��
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0; i<n; i++)
	{
		gets(line[i]);
	}
	for(int i=0; i<n; i++)
	{
		printf("%s\n",line[i]);
	}
}
