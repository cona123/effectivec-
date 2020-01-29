#include "modelaplane.h"
#include "modelbplane.h"
#include <memory>
int main() {
  std::shared_ptr<Airplane> planea = std::make_shared<ModelaPlane>();
  planea->fly("desta");
  std::shared_ptr<Airplane> planeb = std::make_shared<ModelbPlane>();
  planeb->fly("destb");
}