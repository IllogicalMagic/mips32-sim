unsigned __attribute__((noinline)) fact(unsigned n) {
  if (n > 1)
    return n * fact(n - 1);
  return 1;
}

int main() {
  int x = fact(6);
  return x;
}
