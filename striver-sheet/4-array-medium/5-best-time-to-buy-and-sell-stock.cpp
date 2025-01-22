// LC-121

// the idea is to find wether we can even make a profit.
// if so, then we calculate profit & maxProfit

//then we also calculate best buy price wrt current price

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestBuy=prices[0];
        int maxProfit=0;

        //starting from 1 coz we have to buy 
        // atleast 1 day before to sell
        for(int i=1;i<prices.size();i++){
            if(prices[i]>bestBuy){
                maxProfit=max(maxProfit,prices[i]-bestBuy);
            }
            bestBuy=min(prices[i],bestBuy);
        }
        return maxProfit;
    }
};