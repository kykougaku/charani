#include <stdio.h>
#include <unistd.h>
#include <bits/stdc++.h>
#include "linear.h"
using namespace std;

/////////////////////////////////////////////////////
int width = 100;
int height = 50;
int frame = 100;
vector<char> conv = {' ','I','X','W'};
/////////////////////////////////////////////////////

void charaflush (void);
void charainit (vector<vector<char>> &bufc, vector<vector<int>> &bufi);
void chara (vector<vector<char>> &bufc);
void convert (vector<vector<int>> &bufi, vector<vector<char>> &bufc);

int main(void){

	vector<vector<char>> buffer(width, vector<char>(height));
	vector<vector<int>> bufint (width, vector<int>(height));

	for(int i = 0; i<frame; i++){

		charainit(buffer, bufint);
		//////////////////////////////////////////////////////////////
		vector<vector<float>> zp = {{0},{0},{1}};
		vector<vector<float>> zm = {{0}, {0}, {-1}};
		vector<vector<float>> yp = {{0}, {1}, {0}};
		vector<vector<float>> yp = {{0}, {-1}, {0}};
		vector<vector<float>> xp = {{1}, {0}, {0}};
		vector<vector<float>> xp = {{-1}, {0}, {0}};
		
		for(int i = 0; i<height; i++){
			for(int j = 0; j<width; j++){
				if(e)
			}
		}
		//////////////////////////////////////////////////////////////
		convert(bufint,buffer);

		charaflush();
		chara(buffer);
		usleep(9000);
	}
		return 0;
}

/////////////////////////////////////////////////////
void charaflush(void){
	printf("\x1b[H");
	fflush(stdout);
}
void charainit (vector<vector<char>> &bufc, vector<vector<int>> &bufi){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			bufc.at(j).at(i)=conv.at(0);
			bufi.at(j).at(i)=0;
		}
	}
}

void chara (vector<vector<char>> &bufc){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			putchar(bufc.at(j).at(i));
			if(j==width-1) printf("\n");

			fflush(stdout);
		}
	}
}

void convert (vector<vector<int>> &bufi, vector<vector<char>> &bufc){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			bufc.at(j).at(i) = conv.at(bufi.at(j).at(i));
		}
	}
}
