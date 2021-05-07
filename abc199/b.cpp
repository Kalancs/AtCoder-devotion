#include <iostream>
#include <vector>
using namespace std;
int main(){
  int n;
  cin >> n;
  vector<int> a(n),b(n);

  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];

  int amax = 0, bmin = 10001;
  for(int i=0;i<n;i++){
    amax = max(amax,a[i]);
    bmin = min(bmin,b[i]);
  }

  if(bmin - amax < 0) cout << "0\n";
  else cout << bmin - amax + 1 << endl;
}
