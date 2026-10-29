 int find(vector<int>&par , int n) {
        int p = par[n];
        while(p != par[p]) {
            par[p] = par[par[p]];
            p = par[p];
        }
        return p;
    }
    bool Union(vector<int> & par , vector<int> & rank , int a , int b) {
        int p1 = find(par , a);
        int p2 = find(par , b);
        if(p1 == p2) {
            return false;
        }
        if(rank[p1] > rank[p2]) {
            par[p2] = p1;
            rank[p1] += rank[p2];
        }
        else {
            par[p1] = p2;
            rank[p2] += rank[p1];
        }
        return true;
        
    }