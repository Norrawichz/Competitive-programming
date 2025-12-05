class Solution {
  public:
  
    int n;
    
    int sm(int i, vector<int> &tree) {
        int sm=0;
        while (i > 0) {
            sm+=tree[i];
            i-=i&-i;
        }
        return sm;
    }
       
    void update(int i, int key, vector<int> &tree) {
        while (i <= 10000) {
            tree[i]+=key;
            i+=i&-i;
        }
    } 
    
    int inversionCount(vector<int> &arr) {
        // Code Here
        n=arr.size();
        
        vector<int> tree(10001, 0);
        
        int ans=0;
        for (int i=n-1; i>=0; i--) {
            ans+=sm(arr[i]-1, tree);
            update(arr[i], 1, tree);
        }
        return ans;
    }
};