#include <vector>
#include<iostream>
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        int minv = prices[0], maxv = 0, i=1;
                                  
        while(i<n){
            int value = prices[i]-minv;

            maxv = max(maxv, value);

            minv = min(minv, prices[i]);


            i++;
        }
        return maxv;


      


        
         
           
    }
};