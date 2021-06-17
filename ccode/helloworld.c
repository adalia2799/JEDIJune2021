//HELLO WORLD

#include <stdio.h>

void helloworld(){
	printf("hello world!");
	printf("you are way too sexy");
}

void dingDong(){
	printf("SOMething ding dong.....")
}

void greeting(char name[]){
	printf("hello, Where were you?... %s",name);
}

int main(){
	char name[] = "alia bhatt";
	helloworld();
	greeting(name);
}

