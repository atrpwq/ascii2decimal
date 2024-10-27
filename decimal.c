#include<stdio.h>
#include<string.h>
void main(int argc, char **argv){
	int count=1;
	while(1){
		if(argv[count]!=NULL){
			for(int i=0;i<strlen(argv[count]);i++){
				printf(" %d",argv[count][i]);
			}
			count++;
		}
		printf("\n");
		break;
	}
}
