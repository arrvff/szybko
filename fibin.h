using i64=uint64_t;

constexpr calculate_fib(i64 curr, i64 last, i64 depth){
  return (depth == 0) ? curr : calculate_fib(curr + last, curr, depth - 1);
}

constexpr fib(i64 nth){
  return calculate_fib(1, 1, nth);
}
