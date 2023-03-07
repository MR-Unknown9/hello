#include <iostream>

using namespace std;

void fastIO (){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin),
    freopen("out.txt", "w", stdout);
    #endif
}
int main(){
    fastIO();
    int x, y;
    cin >> x >> y;
    cout << x + y;
    return 0;
}