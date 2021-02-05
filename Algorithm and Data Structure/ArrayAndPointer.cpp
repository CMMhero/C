#include <stdio.h>
int main()
{
	int arr[5]={20,30,40,50,60};
	int *arrPtr, i, result0=0, result1=0, result2=0, result3=0;
	arrPtr=arr;
	
	for(i=0; i<5; i++)
	{
		result0 += *(arrPtr+i);	// Pointer
		result1 += arr[i];		// Array
		result2 += *(arr+i);	// Array as pointer
		result3 += arrPtr[i];	// Pointer as array
	}
	printf("%p\n", &arr[0]);	//alamat array index 0
	printf("%p\n", arrPtr);		//nilai pointer
	printf("%p\n", arr);		//nilai array
	printf("%p\n", &arr);		//alamat array
	printf("\n");
	printf("Result0 = %d\n", result0);
	printf("Result1 = %d\n", result1);
	printf("Result2 = %d\n", result2);
	printf("Result3 = %d\n", result3);
	
	return 0;
}

