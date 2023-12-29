/**
 * My implementation for Segment Trees
 * Vincent Bucourt
 * Complexity: O(log N) for search operations
 *             O(N log N) for creation
*/


/** 
 * Implementation Details:
 * Store the Seg Tree as a vector/array
 * Thus, the children of a node v are v*2 and v*2+1
 */

struct SegTree{
	int N;
	int lenTree, totalLenTree;
	idata input, tree;

	void getInput(){
		cin >> N;
		int x;
		for (int i = 0; i < N; i++){ // Get input
			cin >> x;
			input.push_back(x);
		}

		lenTree = 1; // Finds length of idata for tree
		while (lenTree < N){
			lenTree = (lenTree << 1);
		}
		totalLenTree = (lenTree << 2);
		tree.assign(totalLenTree, 0); // 1 + 1/2 + 1/4 ... = 2
	}

	void constructTree(int node, int l, int r){
		if (l == r) tree[node] = input[l]; // If on last level
		else{ // Find the values of its two children
			int mid = (l + r) / 2; 
			constructTree(node * 2, l, mid);
			constructTree(node * 2 + 1, mid + 1, r);
			tree[node] = tree[node * 2] + tree[node * 2 + 1];
		}
	}

	int search(int onL, int onR, int searchL, int searchR, int node){
		if (onL > onR) return 0; // Return the number that changes nothing (change depending on use)
		if (onL == searchL && onR == searchR) return tree[node];
		int mid = (onL + onR) / 2; // Split search into 2
		return    search(onL, mid, searchL, searchR, node * 2)
			    + search(mid + 1, onR, searchL, searchR, node * 2 + 1);
	}
};

/**
 * How to call the functions:
 * 
 * 	signed main(){
 *		SegTree TreeOn;
 *		TreeOn.getInput();
 *		TreeOn.constructTree(1, 0, lenTree-1);
 *		cout << TreeOn.search(0, lenTree-1, l, r, 1);
 *	}
 */