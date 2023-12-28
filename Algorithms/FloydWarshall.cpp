/**
 * Implementation for Floyd Warshall algorithm (Multi Source Shortest Path)
 * Vincent Bucourt
 * Complexity: O(V^3)
 */

imatrix floydWarshall(int N, imatrix conn){
	imatrix dist;
	dist.assign(N, INF);
	for (int k = 0; k < N; k++){
		for (int i = 0; i < N; i++){
			for (int d = 0; d < N; d++){
				if (dist[i][k] < INF && dist[k][d] < INF){
					dist[i][d] = min(dist[i][d], dist[i][k] + dist[k][d]);
				}
			}
		}
	}
	return dist;
}