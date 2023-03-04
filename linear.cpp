#include <bits/stdc++.h>
#include "linear.h"
using namespace std;
//Todo
//
//rename variable r > c
//generalize vector size in mulp
//
void mulp_two(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &r){
	for(int i = 0; i<2; i++){
		for(int j = 0; j<2; j++){
			r.at(i).at(j) = a.at(i).at(0) * b.at(0).at(j) + a.at(i).at(1) * b.at(1).at(j);
		}
	}
}

void mulp_three(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &r){
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			r.at(i).at(j) = a.at(i).at(0) * b.at(0).at(j) + a.at(i).at(1) * b.at(1).at(j) + a.at(i).at(2) * b.at(2).at(j);
		}
	}
}

/* sample
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
*/
