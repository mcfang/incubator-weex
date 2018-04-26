#include "render_performance.h"
#include <android/base/log_utils.h>

namespace WeexCore {

  int
  RenderPerformance::PrintPerformanceLogImplAndroid(const PerformanceStage &performanceStage) {

#if PERFORMANCE_LOG

    if (performanceStage == onFirstScreen) {
      LOGD("[WeexCore render time]onFirstScreen");
    } else {
      LOGD("[WeexCore render time]onRenderSuccess");
    }
    LOGD("[WeexCore render time]      jniCallTime: %lld", jniCallTime);
    LOGD("[WeexCore render time]        -addElementActionJNITime: %lld", addElementActionJNITime);
    LOGD("[WeexCore render time]         layoutActionJNITime: %lld", layoutActionJniTime);
    LOGD("[WeexCore render time]        -jniCallBridgeTime: %lld", jniCallBridgeTime);
    LOGD("[WeexCore render time]         createJMapJNITime: %lld", createJMapJNITime);
    LOGD("[WeexCore render time]      cssLayoutTime: %lld", cssLayoutTime);
    LOGD("[WeexCore render time]      parseJsonTime: %lld", parseJsonTime);
    LOGD("[WeexCore render time]      buildRenderObjectTime: %lld", buildRenderObjectTime);
#endif

    return cssLayoutTime;
  }

  int RenderPerformance::PrintPerformanceLogImplIOS(const PerformanceStage &performanceStage) {
    return 0;
  }
}