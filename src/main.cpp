#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	const auto pi = atan2(0, -1);

	double dia, rev, t;
	cin >> dia >> rev >> t;

	auto n = int{ 1 };
	while (cin.good()) {
		if (0 < rev) {
			auto dist = (dia * pi) * rev / 12 / 5280;
			auto mph = dist / (t / 3600);
			cout << "Trip #" << n << ": "
				<< fixed << setprecision(2) << dist << ' ' << mph << '\n';
		}

		n += 1;
		cin >> dia >> rev >> t;
	}

	return 0;
}