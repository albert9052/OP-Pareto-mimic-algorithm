#include <iostream>
#include <vector>

// This is the size of the favorite nodes for each node, which was preprocessed
#define L 50

class Solution {

public:
	Solution();
	void input();
	void solve();

private:

	// ----- Main functions ---------
	std::vector<int> Initialization();
	std::vector<int> mimicOperator(std::vector<int> oneIS);
	std::vector<int> localSearch(std::vector<int> x);
	std::vector<int> swallowOperator(std::vector<int> x);
	double getObjectiveScore(std::vector<int> x);
	void Update(std::vector<std::vector<int>>& IS, const std::vector<std::vector<int>>& Q);

	// ----- Other functions ---------
	double getStaticPreferenceValue(int currentNode, int targetNode);
	double getDynamicPreferenceValue(const std::vector<int>& x, int node);
	double getIncrementTime(const std::vector<int>& x, int node, int position);
	// (0, 1]
	double getRandomDecimal();
	bool isFeasibleNode(const std::vector<int>& s, int node);
	double getRemovalReward(const std::vector<int>& s, int node);
	double getDistanceBetweenSolution(const std::vector<int>& x, const std::vector<int>& y);
}
