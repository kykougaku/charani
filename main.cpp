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

void charainit (vector<vector<char>> &bufc);
void chara (vector<vector<char>> &bufc);
void convert (vector<vector<int>> &bufint, vector<vector<char>> &bufc);

int main(void){

	for(int i = 0; i<frame; i++){

		charainit(buffer);

		vector<vector<int>> bufint (width, vector<int>(height));
		for(int j = 0; j<height; j++){
			bufint.at(i%width).at(j) = i%3;
		}
		convert(bufint,buffer);
		chara(buffer);
		usleep(50000);
	}
	return 0;
}

/////////////////////////////////////////////////////


void charainit (vector<vector<char>> &bufc){
	printf("\x1b[H");
	fflush(stdout);
	for(int i = 0; i<width; i++){
		for(int j = 0; j<height; j++){
			bufc.at(i).at(j)=' ';
		}
	}
}

void chara (vector<vector<char>> &bufc){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			if(j==width-1) printf("\n");
			else putchar(bufc.at(j).at(i));

			fflush(stdout);
		}
	}
}

void convert (vector<vector<int>> &bufint, vector<vector<char>> &bufc){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			bufc.at(j).at(i) = conv.at(bufint.at(j).at(i));
		}
	}
}