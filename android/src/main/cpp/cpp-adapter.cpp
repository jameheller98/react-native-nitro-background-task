#include <jni.h>
#include "NitroBackgroundTaskOnLoad.hpp"

JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM* vm, void*) {
  return margelo::nitro::nitrobackgroundtask::initialize(vm);
}
