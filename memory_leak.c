#include<stdio.h>
#include<stdlib.h>

void memoleak(){
	char *p = malloc(100);
}

int dequy(int n){
	return n* dequy(n-1);
}

void oom(){
	char *p = malloc(5000000000);
}

void main(){
// memoleak(); // memory leak
// dequy(5); // stack overflow
// oom(); // out of memory

return 0;
}
