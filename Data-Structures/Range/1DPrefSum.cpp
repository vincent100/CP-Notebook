/**
 * Implementation for 1D Prefix Sum
 * Vincent Bucourt
 * Complexity: O(N) to create, O(1) to query
 */

struct 1DPrefSum{
    idata pref;

    void build (idata on){
        int last = 0;
        for (int i : on){
            pref.push_back(last + i);
            last += i;
        }
    }

    int query (int l, int r){
        return (pref[r] - pref[l-1]);
    }
};