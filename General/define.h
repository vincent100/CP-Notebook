// Includes (only use <bits/stdc++.h> for Competitive Programming)
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stack>

// Namespace and typedefs (these are my preferences)
using namespace std;

// types
typedef long long ll;
typedef long double ld;
typedef string str;

// 1d vectors
typedef vector<int> idata;
typedef vector<ll> lldata;
typedef vector<char> cdata;
typedef vector<bool> bdata;
typedef vector<str> sdata;
typedef vector<double> ddata;

// 2d vectors
typedef vector<idata> imatrix;
typedef vector<lldata> llmatrix;
typedef vector<cdata> cmatrix;
typedef vector<bdata> bmatrix;
typedef vector<sdata> smatrix;
typedef vector<ddata> dmatrix;

// Pairs
typedef pair<int, int> ipair;
typedef pair<ll, ll> llpair;
typedef pair<char, char> cpair;
typedef pair<bool, bool> bpair;
typedef pair<str, str> spair;
typedef pair<double, double> dpair;

// Queues
typedef queue<int> iqueue;
typedef queue<ll> llqueue;
typedef queue<char> cqueue;
typedef queue<bool> bqueue;
typedef queue<str> squeue;
typedef queue<double> dqueue;

// Stacks
typedef stack<int> istack;
typedef stack<ll> llstack;
typedef stack<char> cstack;
typedef stack<bool> bstack;
typedef stack<str> sstack;
typedef stack<double> dstack;

// (Competitive Programming)
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define clr clear
#define mpt empty

// Constants
const int maxVal32 = (1 << 30);// int max val
const ll maxVal64 = (1ll << 62); // long long max val
const int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0}; // For *every* grid problem
const ll INF = 1e18; // Large enough to pass as infinity
const int MOD = 1e9+7; // Some CP problems use this

// Templates
template <typename type>
void printData(type arr){
	for (int i : arr){
		cout << i << ' ';
	}
	cout << '\n';
}

template <typename type>
void printMatrix(type matrix){ // Prints a 2d array / vector
	for (int i = 0; i < matrix.size(); i++){
		for (int d = 0; d < matrix[i].size(); d++){
			cout << matrix[i][d] << ' ';
		}
		cout << '\n';
	}
}