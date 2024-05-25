#include <iostream>
#include <vector>
#include <map>
#include <sstream>
#include <algorithm>
#include <cmath>
#include <set>
#include <unordered_set>
#include <string>
#include <iterator>
#include <queue>
#include <tuple>
#include <numeric>
#include <random>
#include <time.h>


using namespace std;

#define ll long long
#define read(a) cin >> a
#define write(a) cout << (a) << endl
#define readpush(type,a) type temp; read(temp); a.push_back(temp)
#define readinsert(type,a) type temp; read(temp); a.insert(temp)
#define setcontains(set, x) (set.find(x) != set.end())

#define rep(i, high) for (ll i = 0; i < high; i++)
#define repe(i, container) for (auto& i : container)
#define repp(i, high) for (ll i = high; i >= 0; i--)
#define inf 1e9

int main()
{
    int k, n;
    cin >> k >> n;

    vector<int> children;
    rep(i, n) children.push_back(i+1);

    int pos = 0;

    while (children.size() > 1)
    {
        pos--;
        pos += k;
        pos %= children.size();
        children.erase(next(children.begin(), pos));
        n--;
    }

    write(children[0]);

    return 0;
}
