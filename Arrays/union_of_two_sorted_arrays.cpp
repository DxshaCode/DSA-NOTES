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

// time complexity:O(m+n)
// space complexity:O(m+n)

class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        int i = 0, j = 0;
        vector<int> res;

        while(i < a.size() && j < b.size())
        {
            if(a[i] == b[j])
            {
                if(res.empty() || res.back() != a[i]) //nya vector empty hoga to insert krna hai or agr wo empty nahi ho or nye vector ka last element diff ho to inserrt kro
                    res.push_back(a[i]);
                i++; //or agr wo dono equal hai or vector empty bhi nahi hai pr last  element same hai to ofc we have to skip those numbers so we will inc. i and j
                j++;
            }
            else if(a[i] < b[j])
            {
                if(res.empty() || res.back() != a[i])
                    res.push_back(a[i]);
                i++;
            }
            else
            {
                if(res.empty() || res.back() != b[j])
                    res.push_back(b[j]);
                j++;
            }
        }

        while(i < a.size())
        {
            if(res.empty() || res.back() != a[i])
                res.push_back(a[i]);
            i++;
        }

        while(j < b.size())
        {
            if(res.empty() || res.back() != b[j])
                res.push_back(b[j]);
            j++;
        }

        return res;
    }
};


