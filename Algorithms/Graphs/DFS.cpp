/**
 * Implementation of Depth First Search (DFS)
 * This algorithm is present in a lot of other implementations
 * Vincent Bucourt
 * Complexity: O(V + E)
 */

void DFS(int node){
	if (visited[node]) return;
	visited[node] = true;
	for (int i : conn[node]){
		DFS(i);
	}
}
