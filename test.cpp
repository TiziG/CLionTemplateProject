#include <cute_runner.h>
#include <ide_listener.h>
#include "cute.h"
#include "libraryA.h"

void testSayHelloSaysHello() {
  std::ostringstream out{};
  out << "Hello ";
  sayHello(out);
  ASSERT_EQUAL("Hello youuuu!\n", out.str());
}

void runAllTests() {
  cute::suite s { };
  s.push_back(CUTE(testSayHelloSaysHello));
  cute::ide_listener<>  lis{};
  auto const runner = cute::makeRunner(lis);
  runner(s, "AllTests");
}

int main() {
  runAllTests();
}
