/**
 * Implementation for 2D Prefix Sum
 * Vincent Bucourt
 * Complexity: O(N * M) to create, O(1) to query
*/

struct 2DPrefSum{
    imatrix pref;

    void create(imatrix on){
        int N = on.size();
        int M = on[0].size();
        pref = imatrix (N, idata (M));

        for (int i : on[0]){
            pref[0] = i;
        }
        for (int i = 0; i < N; i++){
            pref[i][0] = on[i][0];
        }

        for (int i = 1; i < N; i++){
            for (int d = 1; d < M; d++){
                pref[i][d] = pref[i-1][d] + pref[i][d-1] - pref[i-1][d-1];
            }
        }
    }

    int query (int x1, int y1, int x2, int y2){
        return (pref[y1][x1] - pref[y1][x2] - pref[y2][x1] + pref[y2][x2]);
    }
};