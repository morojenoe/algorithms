template<typename T>
struct vec {
  T x, y;
  vec(): x(0), y(0) {}
  vec(T x, T y): x(x), y(y) {}
  vec operator+(const vec &oth) const { return vec(x + oth.x, y + oth.y); }
  vec operator-(const vec &oth) const { return vec(x - oth.x, y - oth.y); }
  vec operator*(const T k) const { return vec(x*k, y*k); }
  T operator*(const vec &oth) const { return x*oth.x + y*oth.y; }
  T operator%(const vec &ith) const { return x*oth.y - y*oth.x; }
  T len2() const { return x*x + y*y; }
  long double len() const { return sqrt(x*x + y*y); }
  vec norm() const { long double length = sqrt(x*x + y*y); return vec(x / length, y / length); }
  vec rotate(long double angle) const { return vec(); }
};
