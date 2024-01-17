/**
Implementation for Sparse Table
Vincent Bucourt
Complexity: O(N log N) precomp, O(1) RMQ (Range Min/Max Queries)
*/

struct SparseTable{
    const int INF = (1 << 30);
    const int K = 25; // Reasonable for N <= 10^7

    int N;
    idata original;
    imatrix ST;
    SparseTable (int N, idata original) { ST = imatrix (K + 1, idata (N, -INF)); }

    void precomp(){
        for (int i = 0; i < N; i++){
            ST[0][i] = original[i];
        }

        for (int i = 1; i <= K; i++){ // For all ranges (only powers of 2)
            for (int j = 0; j + (1 << 1) <= N; j++){ // For all valid ranges starting at j and ending at j + range
                // Intervals [j, j + 2^(i-1)] and [j + 2^(i-1), j + 2^(i)] make [j, j + 2^i]
                ST[i][j] = max( ST[i-1][j], ST[i-1][j + (1 << (i-1))] );
            }
        }
    }

    // C++20
    int log2 (unsigned int num){
        return bit_width(num) - 1;
    }

    // Pre C++20
    int log2Pre (unsigned int num){
        return num ? __builtin_clzll(1) - __builtin_clzll(num) : -1;
    }

    int query(int L, int R){
        int len = log2Pre(R - L + 1);
        return max( ST[len][L], ST[len][R - (1 << len) + 1] );
    }
};