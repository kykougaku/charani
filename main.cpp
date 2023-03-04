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
		usleep(9000);
	}
	vector<vector<int>> a ={
		{1,2},
		{3,4}};
	vector<vector<int>> b ={
		{1,2},
		{3,4}};
	vector<vector<int>> r = {2,vector<int>(2)};
	mulp_two(a,b,r);
	cout<<r.at(0).at(0)<<r.at(0).at(1)<<endl;
	cout<<r.at(1).at(0)<<r.at(1).at(1)<<endl;

	return 0;
}

/////////////////////////////////////////////////////

void charainit (vector<vector<char>> &bufc, vector<vector<int>> &bufi){
	printf("\x1b[H");
	fflush(stdout);
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
