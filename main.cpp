#include <stdio.h>
#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;

#define width  10
#define height  10
#define frame 100

char buffer[width][height];

void chara (char s[width][height]);
void charainit (void);

int main(void){

	for(int i = 0; i<frame; i++){
		charainit();

		for(int j = 0; j<height; j++){
			buffer[i/10][j] = 'k';
		}

		chara(buffer);

		usleep(5000);
	}
	return 0;
}

void charainit (void){
	printf("\x1b[H");
	fflush(stdout);
	for(int i = 0; i<width; i++){
		for(int j = 0; j<height; j++){
			buffer[i][j]=' ';
		}
	}
}

void chara (char s[width][height]){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			if(j==width-1) printf("\n");
			else putchar(s[j][i]);

			fflush(stdout);
		}
	}
}