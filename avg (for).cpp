/* Calculate 10 student marks and avarage */
#include <stdio.h>

int main (void){
	int student=10;
	double total=0.0, marks, avg;
	
	for (int i=1; i<=student; i++){
		printf("Enter student #%i marks : ", i);
		scanf("%lf", &marks);
		total += marks;
	}
	avg = total/student;
	printf("Average marks : %i.2lf", avg);
	
	return 0;
}
