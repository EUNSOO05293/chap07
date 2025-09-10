#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isEqualArrayInt(int a[], int b[], int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		if(a[i] != b[i])
			return 0;
	}
	return 1;
}
int main()
{
	int x[5] = {1,2,3,4,5};
	int y[5] = {1,2,3,4,5};
	int z[5] = {1,2,3,4,6};

	if (isEqualArrayInt(x, y, 5))
		printf("x와 y의 배열은 같습니다.\n");
	else
		printf("x와 y의 배열은 다릅니다.\n");

	if (isEqualArrayInt(x, z, 5))
		printf("x와 z의 배열은 같습니다.\n");
	else
		printf("x와 z의 배열은 다릅니다.\n");

	return 0;
}