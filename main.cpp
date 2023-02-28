#include <stdio.h>
#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////
int width = 10;
int height = 10;
int frame = 100;
vector<char> conv = {'I','X','W'};
/////////////////////////////////////////////////////

vector<vector<char>> buffer(width, vector<char>(height));

void chara (vector<vector<char>> s);
void charainit (void);
void convert (vector<vector<int>> bufint);

int main(void){

	for(int i = 0; i<frame; i++){

		charainit();

		vector<vector<int>> bufint (width, vector<int>(height));
		for(int j = 0; j<height; j++){
			bufint.at(i%width).at(j) = i%3;
		}
		convert(bufint);
		chara(buffer);

		usleep(50000);
	}
	return 0;
}

void convert (vector<vector<int>> bufint){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			buffer.at(j).at(i) = conv.at(bufint.at(j).at(i));
		}
	}
}
void charainit (void){
	printf("\x1b[H");
	fflush(stdout);
	for(int i = 0; i<width; i++){
		for(int j = 0; j<height; j++){
			buffer.at(i).at(j)=' ';
		}
	}
}

void chara (vector<vector<char>> s){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			if(j==width-1) printf("\n");
			else putchar(s.at(j).at(i));

			fflush(stdout);
		}
	}
}
