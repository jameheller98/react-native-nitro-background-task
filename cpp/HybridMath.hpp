#pragma once

#include "HybridMathSpec.hpp"

namespace margelo::nitro::nitrobackgroundtask {
  class HybridMath: public HybridMathSpec {
  public:
    HybridMath() : HybridObject(TAG) {}
  public:
    double add(double a, double b) override;
  };
}