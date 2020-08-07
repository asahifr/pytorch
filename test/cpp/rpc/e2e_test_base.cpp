#include "e2e_test_base.h"

namespace torch {
namespace distributed {
namespace rpc {

const char* TestE2EBase::serverAddress = "127.0.0.1";
const size_t TestE2EBase::numIters = 100;
const size_t TestE2EBase::numWorkers = 1;

} // namespace rpc
} // namespace distributed
} // namespace torch
