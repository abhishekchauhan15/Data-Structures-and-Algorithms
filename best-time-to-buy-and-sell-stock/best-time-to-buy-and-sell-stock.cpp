class Solution {
public:
    int maxProfit(vector<int>& prices) {
     int min_price=2147483647, max_profit=0;
        int n=prices.size();

    for(int i=0; i<=n-1; i++){                      //Time:O(n)
        if(min_price>=prices[i]){
            min_price=prices[i];
            
        }else{
            max_profit=max(max_profit, (prices[i]-min_price));

        }
    }
    return max_profit;
}
        
};