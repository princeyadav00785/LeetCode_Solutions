// https://leetcode.com/problems/verifying-an-alien-dictionary

class Solution {
public:
    bool isAlienSorted(vector<string>& s, string w) {
        if(s.size()==1)return true;
        map<char,int >mp;
        for(int i=0;i<w.size();i++){
            char z= w[i];
            mp[z]=i;
        }
        cout<<mp['l']<<" "<<mp['d']<<endl;
        for(int i=1;i<s.size();i++){
            int a=s[i].length();
            int b= s[i-1].length();
            int c=0,d=0;
            string e=s[i];
            string f= s[i-1];
            int n=min(a,b);
            int k=0;
        for(int i=0;i<n;i++){
            
            if(e[i]!=f[i]){
              
                char a1= e[i];
                char a2= f[i];
                cout<<a1<< " "<<a2;
                  cout<<mp[a1]<<" "<<mp[a2]<<endl;
                if(mp[e[i]]<mp[f[i]]){ return false;
                                    }
                k=1;
                break;
            }
        }
            if(k==0){if(b>a){cout<<"yadav ji"<<endl;return false;}}
        }
        return true;
    }
};