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
#define all(x) x.begin(),x.end()
const double PI = acos(0.0)*2.0;
/////////////////////////////////////////////////////
char mat[100][101];
int N, M, K;
int cache[100][100][80];
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
string str;
extern inline bool safe(int x, int y) {
	return x >= 0 && x < N&&y >= 0 && y < M;
}
int solve(int x, int y, int idx) {
	if (idx == str.size())
		return 1;
	int &ret = cache[x][y][idx];
	if (ret != -1)
		return ret;
	ret = 0;
	for (int i = 0; i < 4; i++) {
		for (int k = 1; k <= K; k++) {
			int nx = x + dx[i] * k;
			int ny = y + dy[i] * k;
			if (safe(nx, ny) && str[idx] == mat[nx][ny])
				ret += solve(nx, ny, idx + 1);
		}
	}
	return ret;
}
int main() {
	memset(cache, -1, sizeof(cache));
	scanf("%d%d%d", &N, &M, &K);
	for (int i = 0; i < N; i++)
		scanf("%s", mat[i]);
	cin >> str;
	int ans = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if(mat[i][j]==str[0])
				ans += solve(i, j, 1);
	printf("%d\n", ans);
	return 0;
}