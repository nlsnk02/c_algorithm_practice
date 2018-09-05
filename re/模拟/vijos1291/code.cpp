#include <iostream>
#include <algorithm>
using namespace std;

int lp[3000], lt[3000], bg=0, maxn;

int main (){
  int n, m;
  scanf("%d%d", &n, &m);
  for (int i=0; i<n; i++) scanf("%d", &lp[i]);
  for (int i=0; i<m; i++) scanf("%d", &lt[i]);
  sort(lp, lp+n); sort(lt, lt+m); maxn=m;
  int is=0;
  for (int i=0; i<n; i++){
    if (is) break;
    for (int j=m-1; j>=0; j--){
      if (j==0) is = 1;
      if (lt[j] <= 0 || j>=maxn) continue;
      if (lp[i] <= lt[j]) bg++;
      else {
        maxn = j;
        break;
      }
    }
  }
  printf("%d\n", bg);
  return 0;
}
