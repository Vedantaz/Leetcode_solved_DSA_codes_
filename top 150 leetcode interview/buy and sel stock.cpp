// my code  77ms

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp = INT_MAX, maxp=0;
        for(int price:prices){
            if(price<minp)minp = price;

            int profit = price-minp;

            if(profit>maxp)maxp = profit;    
        }
        return maxp;
    }
};

//most optimal solution 1ms
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.size() < 2) return 0;

        int profit = 0, min_price = prices[0];

        for (int i = 1; i < prices.size(); i++){
            min_price = std::min(min_price, prices[i]);
            profit = std::max(profit, prices[i] - min_price);
        }

        return profit;
    }
}