/**
Finding cycles in a DAG
Vincent Bucourt
Complexity: O(V + E)
*/

int N;
bool ans = false;
imatrix conn;
bdata flags;

void dfs(int node){
    if (flags[node] == 1) ans = true;
    flags[node] = 1;
    for (int i : conn[node]){
        dfs(i);
    }
    flags[node] = -1;
}

bool isCycle(){
    flags = idata (N, 0);

    for (int i = 0; i < N; i++){
        if (flags[i] == 0){
            dfs(i);
        }
    }

    return ans;
}