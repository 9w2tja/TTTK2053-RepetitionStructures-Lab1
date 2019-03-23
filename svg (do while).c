/* Calculate 10 student marks and avarage */
#include <stdio.h>

int main (void){
	int i=0;
	double total=0.0, marks, avg;

	do {
		i++;
		printf("Enter student #%i marks <0 to stop>: ", i);
		scanf("%lf", &marks);
		total += marks;
	}while(marks > 0);
		avg = total/(i-1);
		printf("Average marks : %.2lf", avg);
	
	return 0;
}
