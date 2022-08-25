#include <iostream>
#include <vector>

using namespace std;
void test_multi_pack();

int main() {
	test_multi_pack();
}

void test_multi_pack()
{
	vector<int> weight = {1,3,4};
	vector<int> value = {15,20,30};
	vector<int> nums = {2,3,2};
	int bagWeight = 10;
	for (int i = 0; i < nums.size(); i++){
		while (nums[i] > 1) {
			weight.push_back(weight[i]);
			value.push_back(value[i]);
			nums[i]--;
		}
	}

	vector<int> dp(bagWeight + 1, 0);
	for (int i = 0; i < weight.size(); i++) {
		for (int j = bagWeight; j >= weight[i]; j--) {
			dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
			cout << dp[j] << "\t";
		}
		cout << endl;
	}
	cout << dp[bagWeight] << endl;

}
