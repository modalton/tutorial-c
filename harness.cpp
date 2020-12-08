#include "api.h"

#include <string>

// Simple fuzz target for BrokenMethod().
extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  std::string str(reinterpret_cast<const char *>(data), size);
  BrokenMethod(str);  // Disregard the output.
  return 0;
}