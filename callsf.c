#include<stdio.h>
#include <unistd.h>


//Implement a job scheduler which takes in a function f and an integer n, and calls f after n milliseconds.

void function(){
	printf("PLAY");
}
int main(){
	
	int n;
	printf("How many seconds should the function run after?");
	scanf("%d",&n);

	
    sleep(n/1000);
    function();
	
	
	
	return 0;
}
