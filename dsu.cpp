#include <vector>

using namespace std;


class dsu {
public:
  struct data {
    int cnt, p;
  };
  vector<data> d;

  void init(int n) {
    d.resize(n);
    for (int i = 0; i < n; ++i) {
      d[i].p = i;
      d[i].cnt = 1;
    }
  }

  int get(int v) {
    return d[v].p == v ? v : (d[v].p = get(d[v].p));
  }

  int count(int v) {
    return d[get(v)].cnt;
  }

  bool merge(int v, int u) {
    v = get(v);
    u = get(u);
    if (v == u) return false;
    if (d[v].cnt < d[u].cnt) {
      swap(v, u);
    }
    d[u].p = v;
    d[u].cnt += d[v].cnt;
    return true;
  }
};
