#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct SUBSCRIBER
{
	int date;
	int cityCod;
	int time;
	int number;
	char cityName[250];
	int rate;
};
void outputStructArray(SUBSCRIBER* array, int n);
SUBSCRIBER* inputStructArray(int& n);
void Podschet(SUBSCRIBER* array, int n);

SUBSCRIBER* inputStructArray(int& n)
{
	SUBSCRIBER* array;
	array = (SUBSCRIBER*)malloc(n * sizeof(SUBSCRIBER));

	for (int i = 0; i < n; i++)
	{
		printf("/*-----------------------*/\n", i);
		printf("struct [%d] cityName=", i);
		scanf("%s", array[i].cityName);
		printf("struct [%d] date=", i);
		scanf("%d", &array[i].date);
		printf("struct [%d] cityCod=", i);
		scanf("%d", &array[i].cityCod);
		printf("struct [%d] time=", i);
		scanf("%d", &array[i].time);
		printf("struct [%d] number=", i);
		scanf("%d", &array[i].number);
		printf("struct [%d] rate=", i);
		scanf("%d", &array[i].rate);
	}
	return array;
};


void outputStructArray(SUBSCRIBER* array, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("/*-----------------------------------------------*/\n", i);
		printf("\n");
		printf("cityName= %s \n", array[i].cityName);
		printf("struct [%d] data= %d \n", i, array[i].date);
		printf("struct [%d] cityCod= %d \n", i, array[i].cityCod);
		printf("struct [%d] time= %d \n", i, array[i].time);
		printf("struct [%d] rate= %s \n", i, array[i].rate);
		printf("struct [%d] number= %d \n", i, array[i].number);
		printf("\n");

	}
};

int main()
{
	int n;
	printf("n=");
	scanf("%d", &n);
	SUBSCRIBER* sub;
	sub = inputStructArray(n);
	Podschet(sub, n);
	outputStructArray(sub, n);
	system("pause");
	return 0;
}

void Podschet(SUBSCRIBER* array, int n)
{
	char* name;
	char* lish;
	lish = "pustoe";
	int sumt = 0, sums = 0;



	for (int i; i < n; i++)
	{
		if (array[i].cityName != lish)
			name = array[i].cityName;
		for (int j = i; j < n; j++)
			if (name == array[j].cityName)
				sumt += array[j].time;
		sums = sumt * array[j].rate;
	}
	printf("cityName= %s \n", array[j].cityName);
	printf("time = %d \n", sumt);
	printf("manye= %d \n", sums);
}