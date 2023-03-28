// easy

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // here find alternate no. of zeros and return true : if no. of zeros == int n ; else return false;
        int l = flowerbed.size();
        int cnt=0;
        for(int i=0;i<l; i++){
           

           if((flowerbed[i] == 0) &&(i==0 || flowerbed[i-1] == 0) && 
           (i == l-1 || flowerbed[i+1] == 0)){
               flowerbed[i]=1;
               n--;

           }
        }
        if(n>0) return false;
        return true;
        
    }
};
