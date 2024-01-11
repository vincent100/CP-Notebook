/**
 * Implementation for 2D Prefix Sum
 * Vincent Bucourt
 * Complexity: O(N * M) to create, O(1) to query
*/

struct PrefSum2D{
    imatrix pref;

    void create(imatrix on){
        int N = on.size();
        int M = on[0].size();
        pref = imatrix (N, idata (M));

        for (int i = 0; i < N; i++){
            for (int d = 0; d < M; d++){
                if (i == 0 || d == 0){
                    pref[i][d] = on[i][d];
                }
                else{
                    pref[i][d] = pref[i-1][d] + pref[i][d-1] - pref[i-1][d-1] + on[i][d];
                }
            }
        }
    }

    int query (int x1, int y1, int x2, int y2){
        return (pref[y2][x2] - pref[y2][x1-1] - pref[y1-1][x2] + pref[y1-1][x1-1]);
    }
};