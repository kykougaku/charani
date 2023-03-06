#include <bits/stdc++.h>
#include "linear.h"
using namespace std;
//Todo
//
//rename variable r > c
//generalize vector size in mulp
//
void mulp_two(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &c){
	for(int i = 0; i<2; i++){
		for(int j = 0; j<2; j++){
			c.at(i).at(j) = a.at(i).at(0) * b.at(0).at(j) + a.at(i).at(1) * b.at(1).at(j);
		}
	}
}

void mulp_three(vector<vector<int>> &a, vector<vector<int>> &b, vector<vector<int>> &c){
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			c.at(i).at(j) = a.at(i).at(0) * b.at(0).at(j) + a.at(i).at(1) * b.at(1).at(j) + a.at(i).at(2) * b.at(2).at(j);
		}
	}
}

void mulp_threerotvec(vector<vector<float>> &r, vector<vector<float>> &v, vector<vector<float>> &c){
	for(int i = 0; i<3; i++){
		c.at(i).at(0) = r.at(i).at(0) * v.at(0).at(0) + r.at(i).at(1) * v.at(1).at(0) + r.at(i).at(2) * v.at(2).at(0); 
	}
}

/* sample
vector<vector<int>> a ={
		{1,2},
		{3,4}};
vector<vector<int>> b ={
		{1,2},
		{3,4}};
vector<vector<int>> c = {2,vector<int>(2)};
mulp_two(a,b,c);
cout<<c.at(0).at(0)<<c.at(0).at(1)<<endl;
cout<<c.at(1).at(0)<<c.at(1).at(1)<<endl;
*/
///////////////////////////////////////////
/*sample rotate vectle
 *
 vector<vector<float>> r ={
 	{1,2,1},
 	{3,4,8},
 	{0,0,1}};
 vector<vector<float>> v ={
 	{1},
 	{1},
	{1}};
 vector<vector<float>> vc {3,vector<float>(1)};
 mulp_threerotvec(r,v,vc);
 cout<<vc.at(0).at(0)<<endl;
 cout<<vc.at(1).at(0)<<endl;
 cout<<vc.at(2).at(0)<<endl;
*/
