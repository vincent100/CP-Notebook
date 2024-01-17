/**
General template for my preferences. This is safe to use in non
competitive programming settings (no <bits/stdc++.h> and no namespace)
Vincent Bucourt
*/

// Includes (only use <bits/stdc++.h> for Competitive Programming)
#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <string>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
#include <stack>

// Namespace and typedefs (these are my preferences)


// types
typedef long long ll;
typedef long double ld;
typedef std::string str;

// 1d vectors
typedef std::vector<int> idata;
typedef std::vector<ll> lldata;
typedef std::vector<char> cdata;
typedef std::vector<bool> bdata;
typedef std::vector<str> sdata;
typedef std::vector<double> ddata;

// 2d vectors
typedef std::vector<idata> imatrix;
typedef std::vector<lldata> llmatrix;
typedef std::vector<cdata> cmatrix;
typedef std::vector<bdata> bmatrix;
typedef std::vector<sdata> smatrix;
typedef std::vector<ddata> dmatrix;

// Pairs
typedef std::pair<int, int> ipair;
typedef std::pair<ll, ll> llpair;
typedef std::pair<char, char> cpair;
typedef std::pair<bool, bool> bpair;
typedef std::pair<str, str> spair;
typedef std::pair<double, double> dpair;

// Queues
typedef std::queue<int> iqueue;
typedef std::queue<ll> llqueue;
typedef std::queue<char> cqueue;
typedef std::queue<bool> bqueue;
typedef std::queue<str> squeue;
typedef std::queue<double> dqueue;

// Stacks
typedef std::stack<int> istack;
typedef std::stack<ll> llstack;
typedef std::stack<char> cstack;
typedef std::stack<bool> bstack;
typedef std::stack<str> sstack;
typedef std::stack<double> dstack;

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

// Templates (not dependent on using namespace std)

// Print pair (with cout)
std::ostream& operator << (std::ostream& out, std::pair<auto, auto>& p){
    out << "{ " << p.first << ", " << p.second << " }";
    return out;
}

// Print data (with cout)
std::ostream& operator << (std::ostream& out, std::vector<auto>& data){
    for (auto i : data){
        out << i << ' ';
    }
    out << '\n';
    return out;
}

// Print matrix (with cout)
std::ostream& operator << (std::ostream& out, std::vector<std::vector<auto>>& matrix){
    for (auto i : matrix){
        for (auto d : i){
            out << d << ' ';
        }
        out << '\n';
    }
    return out;
}

// Get pair (with cin)
std::istream& operator >> (std::istream& in, std::pair<auto, auto>& p){
    in >> p.first >> p.second;
    return in;
}

// Get data (with cin) (already sized to fit)
std::istream& operator >> (std::istream& in, std::vector<auto>& data){
    for (auto& i : data){
        in >> i;
    }
    return in;
}

// Get matrix (with cin) (already sized to fit)
std::istream& operator >> (std::istream& in, std::vector<std::vector<auto>>& matrix){
    for (auto& i : matrix){
        for (auto& d : i){
            in >> d;
        }
    }
    return in;
}