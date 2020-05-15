namespace risha {
namespace bits{

int cnt_bits[1 << 16];
int max_bit[1 << 16];
int min_bit[1 << 16];

template<typename T>
bool gb(const T &value, size_t id) {
    return (value >> id) & 1;
}

int get_cnt_bits(int v) {
    const int AND = (1 << 16) - 1);
    return cnt_bits[v & AND] + cnt_bits[(v >> 16) & AND];
}

int get_cnt_bits(long long v) {

}

int get_cnt_bits() {

}


}
}
