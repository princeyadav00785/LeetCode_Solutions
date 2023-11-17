// https://leetcode.com/problems/shortest-and-lexicographically-smallest-beautiful-string



class Solution {

public:

    string shortestBeautifulSubstring(string s, int k) {

        list<int>ls;

        int i = 0;

        priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>

            >pq;

        while(i<s.size()){

            if(ls.size()<k and s[i]=='1')ls.push_back(i);

            if(ls.size()==k){

                cout<<s.substr(ls.front(),(ls.back()-ls.front()+1))<<" "<<ls.back() - ls.front()<<endl;

                pq.push({ls.back() - ls.front(),s.substr(ls.front(),(ls.back()-ls.front()+1))});

                ls.pop_front();

            }

            i++;

        }

        if(pq.empty())return "";

        string ans = pq.top().second;

        int x = pq.top().first;

        pq.pop();

        while(!pq.empty()){

            if(pq.top().first==x)ans = min(ans,pq.top().second);

            pq.pop();

        }

        return ans;

    }

};
        
    
