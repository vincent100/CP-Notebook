/**
 * Implementation for Dijkstra's algorithm (Single Source Shortest Path)
 * Vincent Bucourt
 * Complexity: O(V^2) or O(E log V)
 */

idata Dijkstra(imatrix conn, imatrix connVal, int source, int N, idata vertices){

	idata distTo (N, maxVal32);

	priority_queue<int> Q;

	for (int i : vertices){
		Q.push(i);
	}

	distTo[source] = 0;

	int u;
	while (!Q.empty()){
		u = Q.top();
		Q.pop();
		for (int i : conn[u]){
			if (distTo[u] + connVal[u][i] < distTo[i]){
				distTo[i] = distTo[u] + connVal[u][i];
				Q.push(i);
			}
		}
	}

	return distTo;
}