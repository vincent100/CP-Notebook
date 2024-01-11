/**
Finding cycles in a DAG
Vincent Bucourt
Complexity: O(V + E)
*/

struct DirCycle{
    imatrix conn;
    idata flag;
    bool isCycle = false;

    void dfs(int node){
        if (flag[node] == 1) isCycle = true;
        flag[node] = 1;
        for (int i : conn[node]){
            dfs(i);
        }
        flag[node] = 2;
    }

    bool isCycle(){
        flags = idata (N, 0);

        for (int i = 0; i < N; i++){
            if (flags[i] == 0){
                dfs(i);
            }
        }

        return isCycle;
    }
};