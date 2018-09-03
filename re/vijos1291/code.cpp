#include <iostream>
#include <algorithm>
using namespace std;

int lp[3000], lt[3000], bg, maxn;

int main (){
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i=0; i<n; i++) scanf("%d", &lp[i]);
  for (int i=0; i<m; i++) scanf("%d", &lt[i]);
  sort(lt, lt+n); sort(lp, lp+m); maxn=m;
  for (int i=n-1; i>=0; i--){
    for (int j=m-1; j>=0; j--){
      if (lt[j] <= 0) break;
      if (j>=maxn) continue;
      if (lp[i] < lt[j]) bg++;
      else maxn = j;
    }
  }
  printf("%d\n", bg);
  return 0;
}
