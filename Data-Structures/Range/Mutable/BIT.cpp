/**
 * Implementation for a Binary Indexed Tree (Fenwick Tree)
 * Vincent Bucourt
 * Complexity: O(N) precomp, O(log N) query
*/

template <typename T> class BIT{
    private:
        T N;
        vector<T> tree;
    
    public:
        BIT(T N) : N(N), tree(N + 1) {}

        // To get sum between i and j: sum(j) - sum(i-1)

        T sum (T pos){ // returns (0, pos]
            T total = 0;
            while (pos > 0){
                total += tree[pos];
                pos -= (pos & -pos);
            }
            return total;
        }

        void update (T pos, T change){
            while (pos <= N){
                tree[pos] += change;
                pos += (pos & -pos);
            }
        }
};