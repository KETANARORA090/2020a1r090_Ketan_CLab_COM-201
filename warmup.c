#include <stdio.h>
#include<stdlib.h>
int main (){
	int *arr;
	int i, numofelements, searchfor;
	printf("How many elements?\n");
	scanf("%d", &numofelements);
	//create the array of num of elements.
	arr = (int*)calloc(numofelements, sizeof(int));
	// reading into the array arr
	for ( i = 0; i < numofelements; ++i)
	{
		printf("Enter arr[%d]\n", i);
		scanf("%d", (arr+i));
	}
	// showing the elements of arr
	for ( i = 0; i < numofelements; ++i)
	{
		printf("arr[%d] = %d\n", i, *(arr+i));

	}
	// reallocation: now we want numofelements+1 elements
	arr = realloc(arr, (numofelements*sizeof(int)+1));
	printf("Enter arr[%d]\n", numofelements);
		scanf("%d", (arr+numofelements));
	// showing the elements of arr again
	for ( i = 0; i < numofelements+1; ++i)
	{
		printf("arr[%d] = %d\n", i, *(arr+i));

	}
	// find element in array
	printf("which element you want to find?\n");
	scanf("%d", &searchfor);
	for (int i = 0; i < numofelements+1; ++i)
	{
		if (searchfor == *(arr+i))
		{
			printf("found at %d\n", i);
			break;
		}

	}

    return 0;
}