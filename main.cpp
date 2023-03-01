#include <stdio.h>
#include <unistd.h>
#include <bits/stdc++.h>
using namespace std;

/////////////////////////////////////////////////////
int width = 90;
int height = 30;
int frame = 100;
vector<char> conv = {' ','I','X','W'};
/////////////////////////////////////////////////////


void charainit (vector<vector<char>> &bufc, vector<vector<int>> &bufi);
void chara (vector<vector<char>> &bufc);
void convert (vector<vector<int>> &bufi, vector<vector<char>> &bufc);

int main(void){

	vector<vector<char>> buffer(width, vector<char>(height));
	vector<vector<int>> bufint (width, vector<int>(height));

	for(int i = 0; i<frame; i++){

		charainit(buffer, bufint);

		for(int j = 0; j<height; j++){
			bufint.at(i%width).at(j) = i%conv.size();
		}

		convert(bufint,buffer);

		chara(buffer);
		usleep(90000);
	}
	return 0;
}

/////////////////////////////////////////////////////


void charainit (vector<vector<char>> &bufc, vector<vector<int>> &bufi){
	printf("\x1b[H");
	fflush(stdout);
	for(int i = 0; i<width; i++){
		for(int j = 0; j<height; j++){
			bufc.at(i).at(j)=conv.at(0);
			bufi.at(i).at(j)=0;
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

void convert (vector<vector<int>> &bufi, vector<vector<char>> &bufc){
	for(int i = 0; i<height; i++){
		for(int j = 0; j<width; j++){
			bufc.at(j).at(i) = conv.at(bufi.at(j).at(i));
		}
	}
}
