///
/// NitroBackgroundTask-Swift-Cxx-Bridge.cpp
/// This file was generated by nitrogen. DO NOT MODIFY THIS FILE.
/// https://github.com/mrousavy/nitro
/// Copyright © 2024 Marc Rousavy @ Margelo
///

#include "NitroBackgroundTask-Swift-Cxx-Bridge.hpp"

// Include C++ implementation defined types
#include "HybridMathSpecSwift.hpp"
#include "NitroBackgroundTask-Swift-Cxx-Umbrella.hpp"

namespace margelo::nitro::nitrobackgroundtask::bridge::swift {

  // pragma MARK: std::shared_ptr<margelo::nitro::nitrobackgroundtask::HybridMathSpec>
  std::shared_ptr<margelo::nitro::nitrobackgroundtask::HybridMathSpec> create_std__shared_ptr_margelo__nitro__nitrobackgroundtask__HybridMathSpec_(void* _Nonnull swiftUnsafePointer) {
    NitroBackgroundTask::HybridMathSpec_cxx swiftPart = NitroBackgroundTask::HybridMathSpec_cxx::fromUnsafe(swiftUnsafePointer);
    return std::make_shared<margelo::nitro::nitrobackgroundtask::HybridMathSpecSwift>(swiftPart);
  }
  void* _Nonnull get_std__shared_ptr_margelo__nitro__nitrobackgroundtask__HybridMathSpec_(std__shared_ptr_margelo__nitro__nitrobackgroundtask__HybridMathSpec_ cppType) {
    std::shared_ptr<margelo::nitro::nitrobackgroundtask::HybridMathSpecSwift> swiftWrapper = std::dynamic_pointer_cast<margelo::nitro::nitrobackgroundtask::HybridMathSpecSwift>(cppType);
  #ifdef NITRO_DEBUG
    if (swiftWrapper == nullptr) [[unlikely]] {
      throw std::runtime_error("Class \"HybridMathSpec\" is not implemented in Swift!");
    }
  #endif
    NitroBackgroundTask::HybridMathSpec_cxx swiftPart = swiftWrapper->getSwiftPart();
    return swiftPart.toUnsafe();
  }

} // namespace margelo::nitro::nitrobackgroundtask::bridge::swift