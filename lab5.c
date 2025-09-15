#include<stdio.h>
#include<string.h>
int main(){
	char degree[10];
	char result[10];
	
	printf("Do u have a masters degree?\n");
	scanf("%s", degree);
	if (strcmp(degree, "yes")==0){
		printf("enter ur result");
		scanf("%s",result);
		if (strcmp(result,"pass")==0){
			printf("You are hired");
			}
			else{
				printf("U did not get the job");
			}
	}
	else{
		printf("You cannot apply");
	}
}

