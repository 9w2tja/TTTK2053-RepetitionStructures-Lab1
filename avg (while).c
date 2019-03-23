/* Calculate 10 student marks and avarage */
#include <stdio.h>

int main (void){
	int i=0;
	double total=0.0, marks = 0.0, avg;
	
	while(marks != -1){
		i++;
		printf("Enter student #%i marks <-1 to stop>: ", i);
		scanf("%lf", &marks);
		total += marks;
	}
		avg = total/(i-1);
		printf("Average marks : %.2lf", avg);
	
	return 0;
}
