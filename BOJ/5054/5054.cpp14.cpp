/////////////////////////////////////////////////////
#ifdef _DEBUG
	#include "bits_stdc++.h"
#else
	#include "bits/stdc++.h"
#endif
using namespace std;
typedef pair<int, int> pii;
typedef vector<vector<pii > > Edge;
typedef unsigned long long llu;
typedef long long ll;
typedef priority_queue<pii > Pq;
typedef vector<int>::iterator It;
#define INF 0x3f3f3f3f
#define UINF 0xffffffffu
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MOD 1000000007
#define EOD 1e-9
const double PI = acos(0.0)*2.0;
/////////////////////////////////////////////////////
int main() {
	int Case;
	cin >> Case;
	while (Case--) {
		int N;
		cin >> N;
		vector<int> arr(N);
		for (int i = 0; i < N; i++) 
			scanf("%d", &arr[i]);
		pair<It, It> ans = minmax_element(arr.begin(), arr.end());
		printf("%d\n", (*ans.second - *ans.first) * 2);
	}
	return 0;
}