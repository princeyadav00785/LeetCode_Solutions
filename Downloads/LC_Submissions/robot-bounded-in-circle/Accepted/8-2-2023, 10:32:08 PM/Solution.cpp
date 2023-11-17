// https://leetcode.com/problems/robot-bounded-in-circle

class Solution {
public:
    bool isRobotBounded(string s) {
//         int a=0,x=0,y=0;
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='L'){
//                 a= (a+1)%4;
//             }
//             else if(s[i]=='R')
//             {a= (a-1)%4;}
//             else {
//                 if(a==0)y++;
//                 if(a==1)x--;
//                 if(a==2)y--;
//                 if(a==3)y++;
                
//             }
//             cout<<a<<" ";
//         }
//         if(x==0&&y==0)return true;
//         if(a!=0)return true;
//         return false;
//     }
    
       int x = 0, y = 0, i = 0;
        vector<vector<int>> d = {{0, 1}, {1, 0}, {0, -1}, { -1, 0}};
        for (char & ins : s)
            if (ins == 'R')
                i = (i + 1) % 4;
            else if (ins == 'L')
                i = (i + 3) % 4;
            else
                x += d[i][0], y += d[i][1];
        return x == 0 && y == 0 || i > 0;}
};

// a=0 north +y
// a=1 west -x
// a=2 south -y
// a=3 east  +x