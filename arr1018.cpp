//Binary prefix dev by 5

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answer(nums.size());
        /*//vector<int> res;
        int res=nums[0];
        answer[0]=res%5==0;
        
        for (int i=1;i<nums.size();i++){
              res=res+nums[i]*pow(2,i);
              answer[i]=res%5==0;
        }
        return answer; led to int overflow*/
        //HORNER'S RULE

        int res = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            res = (res * 2 + nums[i]) % 5;
            answer[i] = (res == 0);
        }
        
        return answer;
        
    }
};