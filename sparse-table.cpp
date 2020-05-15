template<typename T, typename op>
struct SparseTable {
    vector<vector<T>> a;

    SparseTable() = default;
    SparseTable(const vector<T> &input) {
        build(input.begin(), input.end());
    }

    template<typename InputIt>
    SparseTable(InputIt begin, InputIt end) {
        build(begin, end);
    }

    template<typename InputIt>
    void build(InputIt begin, InputIt end) {
        auto length = distance(begin, end);
        a.resize(length);
        for (size_t i = 0; begin != end; ++begin, --length, ++i) {
            a[i].resize();
        }
    }

    template<typename TRes>
    struct STProxy {
        SparseTable *sparse_table;
        size_t L;
        STProxy(SparseTable *st, size_t L): sparse_table(sp), L(L) {}

        Tres operator[](size_t R) {

        }
    };

    STProxy operator[](size_t L) {
        return STProxy(this, L);
    }
};
