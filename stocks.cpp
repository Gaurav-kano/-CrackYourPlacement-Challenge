class Solution {
public:
    int maxProfit(vector<int>& prices) {

 int max_profit=0,min_price=prices[0],n=prices.size();
        int i=0,j=(n-1);

        for(int i=1; i<n; i++)
        {
            min_price = min(prices[i],min_price);

            max_profit = max((prices[i]-min_price),max_profit);
        }
        return max_profit;

    }

};
