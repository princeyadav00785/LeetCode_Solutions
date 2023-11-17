// https://leetcode.com/problems/design-parking-system

class ParkingSystem {
public:
    int b,m,s;
    bool fxn(int& a){
        if(a>0){
            a--;
            return true;
        }
        return false;
    }
    
    ParkingSystem(int big, int medium, int small) {
        b=big,m=medium,s=small;
    }
    
    bool addCar(int n) {
       if(n==1)return fxn(b);
        if(n==2)return fxn(m);
        else return fxn(s);
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */