#include "hamr_buffer.h"

class Test {
  private:
    hamr::buffer<double> &x;
  public:
    Test(hamr::buffer<double> &x) : x(x) {}

    void method() {
      x.data()[0] = 1.0;
      printf("%e\n", x.data()[0]);
    }
};

void test(hamr::buffer<double> &x) {
  Test y = Test(x);
  y.method();
}

int main() {
  hamr::buffer<double> x = hamr::buffer(hamr::buffer_allocator::malloc, 1, 0.0);

  printf("%e\n", x.data()[0]);
  test(x);
  printf("%e\n", x.data()[0]);

  return 0;
}
