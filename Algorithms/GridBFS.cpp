/**
 * BFS on a grid (flood fill)
 * Vincent Bucourt
 * Time complexity: O(N), where N is the number of squares
 */

const int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

bool valid(idata on, int N, int M){ // Can customize this function for more specific implementations
	return (on[0] > -1 && on[0] < N && on[1] > -1 && on[1] < M);
}

imatrix BFS(ipair start, int N, int M){ // N = height, M = length
	queue<idata> Q;
	imatrix visited;

	Q.push({start.first, start.second, 0});
	ipair on;
	while (!Q.empty()){
		on = Q.front();
		Q.pop();
		if (valid(on, N, M)){ // If in bounds
			visited[on[0]][on[1]] = on[2];
			for (int i = 0; i < 4; i++){ // all 4 directions
				Q.push({on[0] + dy[i], on[1] + dx[i], on[2] + 1});
			}
		}
	}

	return visited;
}