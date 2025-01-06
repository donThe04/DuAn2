#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v(n);

	for (int i = 0; i < n; i++) cin >> v[i];

	int max1 = v[0];
	int cnt = 1;

	for (int i = 1; i < n; i++) {
		if (v[i] < max1) {
			++cnt;
		}
		max1 = max(v[i], max1);
	}

	cout << cnt << endl;

	return 0;
}