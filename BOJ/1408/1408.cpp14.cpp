/////////////////////////////////////////////////////
#include "bits/stdc++.h"
using namespace std;
typedef pair<int, int> pii;
typedef vector<vector<pii > > Edge;
typedef unsigned long long llu;
typedef long long ll;
typedef priority_queue<pii > Pq;
#define INF 0x3f3f3f3f
#define UINF 0xffffffffu
#define LINF 0x3f3f3f3f3f3f3f3fll
#define MOD 1000000007
#define EOD 1e-9
const double PI = acos(0.0)*2.0;
/////////////////////////////////////////////////////

int main() {
	int a, b, c, d, e, f;
	scanf("%d:%d:%d%d:%d:%d", &a, &b, &c, &d, &e, &f);
	d += 24;
	int p,o,i;
	i = f - c;
	if (i < 0) {
		i += 60;
		e--;
	}
	o = e - b;
	if (o < 0) {
		o += 60;
		d--;
	}
	p = d - a;
	p %= 24;
	printf("%.2d:%.2d:%.2d\n", p, o, i);
	return 0;
}