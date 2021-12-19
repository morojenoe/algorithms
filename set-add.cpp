#include <set>

using namespace std;

template<typename T>
class set_add {
public:
  set<T> s;
  T add;

  SetAdd() = default;

  void insert(const T& value);
  set<T>::iterator erase(const T& value);
  void add_to_all(const T& value);

  void add_to_all(const T& value) {
    add += value;
  }

  void insert(const T& value) {
    s.insert(value - add);
  }

  auto erase(const T& value) {
    return s.erase(value - add);
  }
};
