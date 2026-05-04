//problem :  to return the union of two sorted arrays
//meri wali approach:
// 1.I have used map kyonki map me sorted style me unique elements me store kr skti hu to mene dono arrays ko traverse kiya or map me insert kiya 
// or fr nya vector banaya or usme map ke sare elements dale and i have returned that new array.

// time complexity: (m+n)logn
// space complexity:O(n)

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        map<int,int>mp;
        for(int i=0;i<a.size();i++)
        {
            mp[a[i]]++;
        }
        
        for(int i=0;i<b.size();i++)
        {
            mp[b[i]]++;
        }
        
        vector<int>c;
        for(auto it=mp.begin();it!=mp.end();++it)
        {
            c.push_back(it->first);
        }
        
        return c;
    }
};

// ##optimal approach:
//concept: two pointers



