#include<stdio.h>
int main(){
	int a[10],i;
	float b[10];
	for(i=0;i<10;i++){
		printf("enter integer: ");
		scanf("%d",&a[i]);
	}
	printf("\n");
		for(i=0;i<10;i++){
		printf("enter float: ");
		scanf("%f",&b[i]);
		}
			printf("the integers are:\t");
			for(i=0;i<10;i++){
			printf("%d\t",a[i]);
			}
			printf("\n");
				printf("\nthe float values are:\t");
				for(i=0;i<10;i++){
				printf("%.2f\t",b[i]);
				}
	return 0;
}
