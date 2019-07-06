#include <benchmark/benchmark.h>
#include <dutil/types.hpp>

// ============================================================ //
// Example / Tutorial
// ============================================================ //

/*
static void Example(benchmark::State& state)
{
  for ([[maybe_unused]] const auto _ : state) {
    std::vector<int> v;
    v.reserve(1);
    benchmark::DoNotOptimize(v.data()); // Allow v.data() to be clobbered.
    v.push_back(42);
    benchmark::ClobberMemory(); // Force 42 to be written to memory.
  }
}
BENCHMARK(Example);

* DoNotOptimize and ClobberMemory explanation.
*
* DoNotOptimize(<expr>) forces the result of <expr> to be stored in either
* memory or a register. For GNU based compilers it acts as read/write
* barrier for global memory. More specifically it forces the compiler to
* flush pending writes to memory and reload any other values as necessary.
*
* In essence ClobberMemory() forces the compiler to perform all pending writes
* to global memory. Memory managed by block scope objects must be "escaped"
* using DoNotOptimize(...) before it can be clobbered.

*/

// ============================================================ //
// Your Bench Here
// ============================================================ //



// ============================================================ //
// Main, leave it here
// ============================================================ //

BENCHMARK_MAIN();
