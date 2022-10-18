    string customSortString(string order, string s) {
        unordered_map<int,int> m;
        string ans;
        
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        
        for(int i=0;i<order.size();i++){
            if(m.find(order[i])!=m.end()){
                while(m[order[i]]--) ans.push_back(order[i]);
            }
            m.erase(order[i]);
        }
        
        for(auto x : m){
            while(x.second--) ans.push_back(x.first);
        }
        
        return ans;
    }
