#include <iostream>
#include <vector>

int main() {
	using namespace std;
	int amount = 5;
	vector<int> coins = {5,2,1};
	vector<int> dp(amount+1,0);
	dp[0] = 1;
	for (int i = 0; i < coins.size(); i++) {
		for (int j = coins[i]; j <= amount; j++) {
			dp[j] += dp[j - coins[i]];
			cout << "dp[" << j << "] = " << dp[j] << "\t";
		}
		cout << endl;
	}
	return 0;
}
