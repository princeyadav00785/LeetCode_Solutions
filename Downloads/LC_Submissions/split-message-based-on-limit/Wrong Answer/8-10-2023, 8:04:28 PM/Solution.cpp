// https://leetcode.com/problems/split-message-based-on-limit

class Solution {
public:
    vector<string> splitMessage(string s, int l) {
        int n=s.size();
          
        int sum=0;
        string t="";
        int number =4;
        while(sum<n){
            if(number>=l){
                return {};
            }
            string ll="9";
            t=t+ll;
            int m= stoi(t);
            int z=m*l;
            int cnt= m*(l-number);
            number++;
            // cout<<cnt<<" ";
            m=z-cnt;
            sum=m;
           
        }
        int x= t.size();
        cout<<endl;
        cout<<x;
        int y=l-(4+x);
        int mmc=0;
        if(n%y==0){mmc=n/y;}else mmc=n/y+1;
        vector<string>ans;
        for(int i=0;i<n;i++){
            int j=l-(4+x);
            
            string st= "";
              int cc=1;  
            while(j--&&i<n){
                char m=s[i++];
                st=st+m;
            }
            string ii= "<1/14>";
            char q='<',e='/',w='>';
            string qq= to_string(cc++);
            string ww= to_string(mmc);
            st= st+q+qq+e+ww+w;
            ans.push_back(st);
        }
        return ans;
    }
};