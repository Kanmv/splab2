#include <stdio.h>
#include <limits.h>

int main() {
	int S=0;
	int n=10;
	int A=100;
	int B=150;
	int array[] = {1, 2, -40, 122, -150, 133, -100, 144, 111, 55};
	for(int i=0; i<n; i++)
	{
		if (array[i]>0)
			if (array[i]>A && array[i]<B)
				if (((S > 0) && (array[i] > (INT_MAX - S)) ||
				((S < 0) && (array[i] < (INT_MIN - S))))) 
					printf("\n Переполнение!");
				else 
    					S+=array[i];
  				
	}
	printf ("Сумма положительных элементов массива: \a %d \n", S);
	return 0;
}
