#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> stones, int k) {
	int answer = 0;
	answer = 200000000;
	int start = 0;
	int size = stones.size();
	int max = 0;
	int mxdx = 0;
	while (start + k <= size) {
		max = 0;
		mxdx = 0;
		for (int i = 0; i < k; i++) {
			if (max <= stones[start + i]) {
				max = stones[start + i];
				mxdx = i;
			}
		}
		start += mxdx + 1;
		if (answer > max)
			answer = max;
	}
	return answer;
}

int main() {
	int answer = 0;
	vector<int> stones = { 2, 4, 5, 3, 2, 1, 4, 2, 5, 1 };
	int k = 3;
	answer = solution(stones, k);
	cout << answer;

}