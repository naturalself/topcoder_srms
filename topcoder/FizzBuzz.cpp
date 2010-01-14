#include<stdio.h>

int main(){
	
	for(int i=0;i<30;i++){
		if(i%15==0){
			printf("Fizz Buzz");
		}else if(i%3==0){
			printf("Fizz");
		}else if(i%5==0){
			printf("Buzz\n");
		}else{
			printf("%d\n",i);
		}
	}

	return 0;
}
