#include<iostream>
using namespace std;

template<class T, class U> class A{
    private:
        T x;
        U y;
    public:
        A(T,U);
        void show(void);
};

template<class T, class U> A<T,U>::A(T t, U u) {
    cout << "Constructor Called!" << endl;
    x = t;
    y = u;
}

template<class T, class U> void A<T,U>::show(void) {
    cout << "Data member of A: " << x << " " << y << endl;
}

int main(void) {
    A<int, char> a(9, 'A');
    a.show();
    return 0;
}
