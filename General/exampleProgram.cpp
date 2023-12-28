/**
 * This is an example of how I normally structure my programs.
 * (This is a template, do NOT use this in contests like USACO)
 * 
 * Vincent Bucourt
 */


// Includes (only use <bits/stdc++.h> in competitive programming)
#include "define.h" // All includes + macros + consts are defined there

// Fast Input/Output (Competitive Programming)
void fastIO(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}

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

// Structs (examples below)
struct DSU{ // aka Union Find
	idata e;
	DSU (int N) { e = idata (N, -1); }

	int get(int x) { return ( e[x] == -1 ? x : x = e[get(x)] ); }

	int size(int x) { return -e[get(x)]; }

	bool sameConn (int x, int y) { return e[get(x)] == e[get(y)]; }

	bool combine (int x, int y){
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y];
		e[y] = x;
		return true;
	}
};

// Global variables
int N, M;

// Main function
signed main(){
	// FastIO (Only Competitive Programming)
	fastIO();

	// Input

	// Struct declaration
	DSU unionFind = DSU (N);

	// Main program
}