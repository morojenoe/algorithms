#include <vector>

using namespace std;

template<typename RAIter, typename T>
vector<pair<T, int>> group(RAIter begin, RAIter end) {
  sort(begin, end);
  vector<pair<T, int>> result;
  while (begin < end) {
    T cur_value = *begin;
    int count = 0;
    while (begin < end && *begin == cur_value) {
      ++count;
      ++begin;
    }
    result.push_back(make_pair(cur_value, count));
  }
  return result;
}
