/**
 * Implementation for Topological Sort (assuming a solution exists)
 * To check if a solution exists, use DFS to find cycles
 * Vincent Bucourt
 * Complexity: O(V+E)
 */

int N;
idata answer;
imatrix conn;
bdata visited;

void DFS(){
	visited[node] = true;

	for (int i : conn[node]){
		if (!visited[i]){
			DFS(i);
		}
	}
	answer.push_back(i);
}

idata topoSort(){
	visited.assign(N, false);
	answer.clear();
	for (int i = 0; i < N; i++){
		if (!visited[i]){
			DFS(i);
		}
	}
	reverse(answer.begin(), answer.end());
	return answer;
}