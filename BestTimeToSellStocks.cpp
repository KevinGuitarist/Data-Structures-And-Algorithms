#include <iostream>
#include <vector>
using namespace std;

void BestTimeToSellStocks(const vector<int>& prices) {
    int min_Price = prices[0];
    int max_Profit = 0;
    int n = prices.size();
    for (int i = 1; i < n; ++i) {
        int current_Price = prices[i]-min_Price;
        max_Profit = max(max_Profit, current_Price);
        min_Price = min(min_Price, prices[i]);
    }
    cout << max_Profit << endl;
}
int main() {
    vector<int> prices = {5,4,3,2,1};
    BestTimeToSellStocks(prices);
    return 0;
}