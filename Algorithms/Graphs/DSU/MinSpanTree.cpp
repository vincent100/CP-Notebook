/**
 * Implementation for minimum spanning tree (undirected weighted graph)
 * This implementation uses DSU
 * Vincent Bucourt
 * Complexity: O(N log N)
 */

struct Edge{
	int x, y;
	int weight;
};

struct DSU{
	idata e;
	DSU (int N) { e = idata (N, -1); }

	int get(int w) { return ( e[w] < 0 ? w : w = get(e[w]) ); }

	int size(int w) { return -e[get(w)]; }

	bool unite(int w, int l){
		w = get(w), l = get(l);
		if (w == l) return false;
		if (e[w] > e[l]) swap(w, l);
		e[w] += e[l];
		e[l] = w;
		return true;
	}
};

bool cmp(Edge a, Edge b){
	return a.weight < b.weight;
}

vector<Edge> minSpanTree (vector<Edge> adj, int N, int M){
	DSU dsu (N);

	sort(adj.begin(), adj.end(), cmp);

	bool united;
	vector<Edge> ans;
	for (int i = 0; i < M; i++){
		if (dsu.size(0) == N) break;
		united = dsu.unite(adj[i].x, adj[i].y);
		if (united){
			ans.push_back(adj[i]);
		}
	}

	return ans;
}