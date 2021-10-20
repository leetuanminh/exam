#include<stdio.h>

main()
{
	int so[10];
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Nhap vao so nguyen thu %d: ",i+1);
		scanf("%d",&so[i]);
	}
	printf("\n Dao nguoc day so :\n ");
	for(i=9;i>=0;i--)
	{
		printf("%d\n",so[i]);
	}
	return 0;
}
