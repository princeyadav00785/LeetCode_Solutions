// https://leetcode.com/problems/count-k-subsequences-of-a-string-with-maximum-beauty

class Solution {
public:
    
    int calculateCombinationsModM(int totalCount, int selectCount, int modulo) {
        if (selectCount == 0)
            return 1;
    
        vector<int> factorialArray(totalCount + 1);
        factorialArray[0] = 1;
        
        // Calculate factorial modulo modulo for each number up to totalCount
        for (int i = 1; i <= totalCount; i++)
            factorialArray[i] = (1LL * factorialArray[i - 1] * i) % modulo;
          int result = factorialArray[totalCount];
        result = (1LL * result * calculateModularInverse(factorialArray[selectCount], modulo)) % modulo;
        result = (1LL * result * calculateModularInverse(factorialArray[totalCount - selectCount], modulo)) % modulo;
        
        return result;
    }

    int calculateModularInverse(int number, int modulo) {
        int modulo0 = modulo;
        int y = 0, x = 1;
        
        while (number > 1) {
            int quotient = number / modulo;
            int temp = modulo;
             modulo = number % modulo;
            number = temp;
            temp = y;
            y = x - quotient * y;
            x = temp;
        }
        
        if (x < 0)
            x += modulo0;
        
        
        
                return x;
    }
    
    int countKSubsequencesWithMaxBeauty(string inputString, int kValue) {
        int modulo = 1e9 + 7;
        unordered_map<char, int> characterCountMap;
        
        for (auto character : inputString) {
            characterCountMap[character]++;
        }
        
        if (characterCountMap.size() < kValue) {
            return 0;
        }
        
        vector<int> characterCounts;
 for (auto characterCountPair : characterCountMap) {
            characterCounts.push_back(characterCountPair.second);
        }
        
        sort(characterCounts.begin(), characterCounts.end());
        reverse(characterCounts.begin(), characterCounts.end());
        
        int answer = 1;
        int totalCount = characterCounts.size();
        int lowestCount = characterCounts[kValue - 1];
        int totalLowestCount = 0, currentLowestCount = 0;
        
        for (int i = 0; i < totalCount; i++) {
            if (i < kValue) {                answer = (1LL * answer * characterCounts[i]) % modulo;
                if (characterCounts[i] == lowestCount) {
                    currentLowestCount++;
                }
            }
            
            if (characterCounts[i] == lowestCount) {
                totalLowestCount++;
            }
        }
        
        answer = (1LL * answer * calculateCombinationsModM(totalLowestCount, currentLowestCount, modulo)) % modulo;
  return answer;
    }
};