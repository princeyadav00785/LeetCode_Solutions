// https://leetcode.com/problems/design-parking-system

class ParkingSystem {
public:
    vector<int>v;
    ParkingSystem(int big, int medium, int small) {
        v= {big,medium,small};
    }
    
    bool addCar(int cartype) {
      if(v[cartype-1]>0){
          v[cartype-1]--;
          return true;
      }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */