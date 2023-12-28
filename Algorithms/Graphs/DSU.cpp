/**
 * Implementation of Disjoined Set Union (Union Find)
 * Vincent Bucourt
 * Complexity: O(log n)
 */

struct DSU{
	idata e;
	DSU (int N) { e = idata (N, -1); }

	int get (int x) { return (e[x] < -1 ? x : x = get(e[x])); }

	bool sameSet (int x, int y) { return e[get(x)] == e[get(y)]; }

	int size (int x) { return -e[get(x)]; }

	bool unite (int x, int y){
		x = get(x), y = get(y);
		if (x == y) return false;
		if (e[x] > e[y]) swap(x, y);
		e[x] += e[y];
		e[y] = x;
		return true;
	}
};