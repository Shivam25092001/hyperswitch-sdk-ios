/**
 * This code was generated by [react-native-codegen](https://www.npmjs.com/package/react-native-codegen).
 *
 * Do not edit this file as changes may cause incorrect behavior and will be lost
 * once the code is regenerated.
 *
 * @generated by codegen project: GenerateModuleH.js
 */

#pragma once

#include <ReactCommon/TurboModule.h>
#include <react/bridging/Bridging.h>

namespace facebook::react {


  
#pragma mark - NativeRNSentryNativeAppStartResponse

template <typename P0, typename P1, typename P2, typename P3>
struct NativeRNSentryNativeAppStartResponse {
  P0 type;
  P1 has_fetched;
  P2 app_start_timestamp_ms;
  P3 spans;
  bool operator==(const NativeRNSentryNativeAppStartResponse &other) const {
    return type == other.type && has_fetched == other.has_fetched && app_start_timestamp_ms == other.app_start_timestamp_ms && spans == other.spans;
  }
};

template <typename T>
struct NativeRNSentryNativeAppStartResponseBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.type)>(rt, value.getProperty(rt, "type"), jsInvoker),
      bridging::fromJs<decltype(types.has_fetched)>(rt, value.getProperty(rt, "has_fetched"), jsInvoker),
      bridging::fromJs<decltype(types.app_start_timestamp_ms)>(rt, value.getProperty(rt, "app_start_timestamp_ms"), jsInvoker),
      bridging::fromJs<decltype(types.spans)>(rt, value.getProperty(rt, "spans"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::String typeToJs(jsi::Runtime &rt, decltype(types.type) value) {
    return bridging::toJs(rt, value);
  }

  static bool has_fetchedToJs(jsi::Runtime &rt, decltype(types.has_fetched) value) {
    return bridging::toJs(rt, value);
  }

  static double app_start_timestamp_msToJs(jsi::Runtime &rt, decltype(types.app_start_timestamp_ms) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::Array spansToJs(jsi::Runtime &rt, decltype(types.spans) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "type", bridging::toJs(rt, value.type, jsInvoker));
    result.setProperty(rt, "has_fetched", bridging::toJs(rt, value.has_fetched, jsInvoker));
    if (value.app_start_timestamp_ms) {
      result.setProperty(rt, "app_start_timestamp_ms", bridging::toJs(rt, value.app_start_timestamp_ms.value(), jsInvoker));
    }
    result.setProperty(rt, "spans", bridging::toJs(rt, value.spans, jsInvoker));
    return result;
  }
};



#pragma mark - NativeRNSentryNativeDebugImage

template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6, typename P7>
struct NativeRNSentryNativeDebugImage {
  P0 name;
  P1 type;
  P2 uuid;
  P3 debug_id;
  P4 image_addr;
  P5 image_size;
  P6 code_file;
  P7 image_vmaddr;
  bool operator==(const NativeRNSentryNativeDebugImage &other) const {
    return name == other.name && type == other.type && uuid == other.uuid && debug_id == other.debug_id && image_addr == other.image_addr && image_size == other.image_size && code_file == other.code_file && image_vmaddr == other.image_vmaddr;
  }
};

template <typename T>
struct NativeRNSentryNativeDebugImageBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.name)>(rt, value.getProperty(rt, "name"), jsInvoker),
      bridging::fromJs<decltype(types.type)>(rt, value.getProperty(rt, "type"), jsInvoker),
      bridging::fromJs<decltype(types.uuid)>(rt, value.getProperty(rt, "uuid"), jsInvoker),
      bridging::fromJs<decltype(types.debug_id)>(rt, value.getProperty(rt, "debug_id"), jsInvoker),
      bridging::fromJs<decltype(types.image_addr)>(rt, value.getProperty(rt, "image_addr"), jsInvoker),
      bridging::fromJs<decltype(types.image_size)>(rt, value.getProperty(rt, "image_size"), jsInvoker),
      bridging::fromJs<decltype(types.code_file)>(rt, value.getProperty(rt, "code_file"), jsInvoker),
      bridging::fromJs<decltype(types.image_vmaddr)>(rt, value.getProperty(rt, "image_vmaddr"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::String nameToJs(jsi::Runtime &rt, decltype(types.name) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String typeToJs(jsi::Runtime &rt, decltype(types.type) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String uuidToJs(jsi::Runtime &rt, decltype(types.uuid) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String debug_idToJs(jsi::Runtime &rt, decltype(types.debug_id) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String image_addrToJs(jsi::Runtime &rt, decltype(types.image_addr) value) {
    return bridging::toJs(rt, value);
  }

  static double image_sizeToJs(jsi::Runtime &rt, decltype(types.image_size) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String code_fileToJs(jsi::Runtime &rt, decltype(types.code_file) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String image_vmaddrToJs(jsi::Runtime &rt, decltype(types.image_vmaddr) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    if (value.name) {
      result.setProperty(rt, "name", bridging::toJs(rt, value.name.value(), jsInvoker));
    }
    if (value.type) {
      result.setProperty(rt, "type", bridging::toJs(rt, value.type.value(), jsInvoker));
    }
    if (value.uuid) {
      result.setProperty(rt, "uuid", bridging::toJs(rt, value.uuid.value(), jsInvoker));
    }
    if (value.debug_id) {
      result.setProperty(rt, "debug_id", bridging::toJs(rt, value.debug_id.value(), jsInvoker));
    }
    if (value.image_addr) {
      result.setProperty(rt, "image_addr", bridging::toJs(rt, value.image_addr.value(), jsInvoker));
    }
    if (value.image_size) {
      result.setProperty(rt, "image_size", bridging::toJs(rt, value.image_size.value(), jsInvoker));
    }
    if (value.code_file) {
      result.setProperty(rt, "code_file", bridging::toJs(rt, value.code_file.value(), jsInvoker));
    }
    if (value.image_vmaddr) {
      result.setProperty(rt, "image_vmaddr", bridging::toJs(rt, value.image_vmaddr.value(), jsInvoker));
    }
    return result;
  }
};



#pragma mark - NativeRNSentryNativeFramesResponse

template <typename P0, typename P1, typename P2>
struct NativeRNSentryNativeFramesResponse {
  P0 totalFrames;
  P1 slowFrames;
  P2 frozenFrames;
  bool operator==(const NativeRNSentryNativeFramesResponse &other) const {
    return totalFrames == other.totalFrames && slowFrames == other.slowFrames && frozenFrames == other.frozenFrames;
  }
};

template <typename T>
struct NativeRNSentryNativeFramesResponseBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.totalFrames)>(rt, value.getProperty(rt, "totalFrames"), jsInvoker),
      bridging::fromJs<decltype(types.slowFrames)>(rt, value.getProperty(rt, "slowFrames"), jsInvoker),
      bridging::fromJs<decltype(types.frozenFrames)>(rt, value.getProperty(rt, "frozenFrames"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static double totalFramesToJs(jsi::Runtime &rt, decltype(types.totalFrames) value) {
    return bridging::toJs(rt, value);
  }

  static double slowFramesToJs(jsi::Runtime &rt, decltype(types.slowFrames) value) {
    return bridging::toJs(rt, value);
  }

  static double frozenFramesToJs(jsi::Runtime &rt, decltype(types.frozenFrames) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "totalFrames", bridging::toJs(rt, value.totalFrames, jsInvoker));
    result.setProperty(rt, "slowFrames", bridging::toJs(rt, value.slowFrames, jsInvoker));
    result.setProperty(rt, "frozenFrames", bridging::toJs(rt, value.frozenFrames, jsInvoker));
    return result;
  }
};



#pragma mark - NativeRNSentryNativeReleaseResponse

template <typename P0, typename P1, typename P2>
struct NativeRNSentryNativeReleaseResponse {
  P0 build;
  P1 id;
  P2 version;
  bool operator==(const NativeRNSentryNativeReleaseResponse &other) const {
    return build == other.build && id == other.id && version == other.version;
  }
};

template <typename T>
struct NativeRNSentryNativeReleaseResponseBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.build)>(rt, value.getProperty(rt, "build"), jsInvoker),
      bridging::fromJs<decltype(types.id)>(rt, value.getProperty(rt, "id"), jsInvoker),
      bridging::fromJs<decltype(types.version)>(rt, value.getProperty(rt, "version"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::String buildToJs(jsi::Runtime &rt, decltype(types.build) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String idToJs(jsi::Runtime &rt, decltype(types.id) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String versionToJs(jsi::Runtime &rt, decltype(types.version) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "build", bridging::toJs(rt, value.build, jsInvoker));
    result.setProperty(rt, "id", bridging::toJs(rt, value.id, jsInvoker));
    result.setProperty(rt, "version", bridging::toJs(rt, value.version, jsInvoker));
    return result;
  }
};



#pragma mark - NativeRNSentryNativeScreenshot

template <typename P0, typename P1, typename P2>
struct NativeRNSentryNativeScreenshot {
  P0 data;
  P1 contentType;
  P2 filename;
  bool operator==(const NativeRNSentryNativeScreenshot &other) const {
    return data == other.data && contentType == other.contentType && filename == other.filename;
  }
};

template <typename T>
struct NativeRNSentryNativeScreenshotBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.data)>(rt, value.getProperty(rt, "data"), jsInvoker),
      bridging::fromJs<decltype(types.contentType)>(rt, value.getProperty(rt, "contentType"), jsInvoker),
      bridging::fromJs<decltype(types.filename)>(rt, value.getProperty(rt, "filename"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::Array dataToJs(jsi::Runtime &rt, decltype(types.data) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String contentTypeToJs(jsi::Runtime &rt, decltype(types.contentType) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String filenameToJs(jsi::Runtime &rt, decltype(types.filename) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "data", bridging::toJs(rt, value.data, jsInvoker));
    result.setProperty(rt, "contentType", bridging::toJs(rt, value.contentType, jsInvoker));
    result.setProperty(rt, "filename", bridging::toJs(rt, value.filename, jsInvoker));
    return result;
  }
};



#pragma mark - NativeRNSentryNativeStackFrame

template <typename P0, typename P1, typename P2, typename P3, typename P4, typename P5, typename P6>
struct NativeRNSentryNativeStackFrame {
  P0 platform;
  P1 instruction_addr;
  P2 package;
  P3 image_addr;
  P4 in_app;
  P5 function;
  P6 symbol_addr;
  bool operator==(const NativeRNSentryNativeStackFrame &other) const {
    return platform == other.platform && instruction_addr == other.instruction_addr && package == other.package && image_addr == other.image_addr && in_app == other.in_app && function == other.function && symbol_addr == other.symbol_addr;
  }
};

template <typename T>
struct NativeRNSentryNativeStackFrameBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.platform)>(rt, value.getProperty(rt, "platform"), jsInvoker),
      bridging::fromJs<decltype(types.instruction_addr)>(rt, value.getProperty(rt, "instruction_addr"), jsInvoker),
      bridging::fromJs<decltype(types.package)>(rt, value.getProperty(rt, "package"), jsInvoker),
      bridging::fromJs<decltype(types.image_addr)>(rt, value.getProperty(rt, "image_addr"), jsInvoker),
      bridging::fromJs<decltype(types.in_app)>(rt, value.getProperty(rt, "in_app"), jsInvoker),
      bridging::fromJs<decltype(types.function)>(rt, value.getProperty(rt, "function"), jsInvoker),
      bridging::fromJs<decltype(types.symbol_addr)>(rt, value.getProperty(rt, "symbol_addr"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::String platformToJs(jsi::Runtime &rt, decltype(types.platform) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String instruction_addrToJs(jsi::Runtime &rt, decltype(types.instruction_addr) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String packageToJs(jsi::Runtime &rt, decltype(types.package) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String image_addrToJs(jsi::Runtime &rt, decltype(types.image_addr) value) {
    return bridging::toJs(rt, value);
  }

  static bool in_appToJs(jsi::Runtime &rt, decltype(types.in_app) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String functionToJs(jsi::Runtime &rt, decltype(types.function) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::String symbol_addrToJs(jsi::Runtime &rt, decltype(types.symbol_addr) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "platform", bridging::toJs(rt, value.platform, jsInvoker));
    result.setProperty(rt, "instruction_addr", bridging::toJs(rt, value.instruction_addr, jsInvoker));
    if (value.package) {
      result.setProperty(rt, "package", bridging::toJs(rt, value.package.value(), jsInvoker));
    }
    if (value.image_addr) {
      result.setProperty(rt, "image_addr", bridging::toJs(rt, value.image_addr.value(), jsInvoker));
    }
    if (value.in_app) {
      result.setProperty(rt, "in_app", bridging::toJs(rt, value.in_app.value(), jsInvoker));
    }
    if (value.function) {
      result.setProperty(rt, "function", bridging::toJs(rt, value.function.value(), jsInvoker));
    }
    if (value.symbol_addr) {
      result.setProperty(rt, "symbol_addr", bridging::toJs(rt, value.symbol_addr.value(), jsInvoker));
    }
    return result;
  }
};



#pragma mark - NativeRNSentryNativeStackFrames

template <typename P0, typename P1>
struct NativeRNSentryNativeStackFrames {
  P0 frames;
  P1 debugMetaImages;
  bool operator==(const NativeRNSentryNativeStackFrames &other) const {
    return frames == other.frames && debugMetaImages == other.debugMetaImages;
  }
};

template <typename T>
struct NativeRNSentryNativeStackFramesBridging {
  static T types;

  static T fromJs(
      jsi::Runtime &rt,
      const jsi::Object &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    T result{
      bridging::fromJs<decltype(types.frames)>(rt, value.getProperty(rt, "frames"), jsInvoker),
      bridging::fromJs<decltype(types.debugMetaImages)>(rt, value.getProperty(rt, "debugMetaImages"), jsInvoker)};
    return result;
  }

#ifdef DEBUG
  static jsi::Array framesToJs(jsi::Runtime &rt, decltype(types.frames) value) {
    return bridging::toJs(rt, value);
  }

  static jsi::Array debugMetaImagesToJs(jsi::Runtime &rt, decltype(types.debugMetaImages) value) {
    return bridging::toJs(rt, value);
  }
#endif

  static jsi::Object toJs(
      jsi::Runtime &rt,
      const T &value,
      const std::shared_ptr<CallInvoker> &jsInvoker) {
    auto result = facebook::jsi::Object(rt);
    result.setProperty(rt, "frames", bridging::toJs(rt, value.frames, jsInvoker));
    if (value.debugMetaImages) {
      result.setProperty(rt, "debugMetaImages", bridging::toJs(rt, value.debugMetaImages.value(), jsInvoker));
    }
    return result;
  }
};

class JSI_EXPORT NativeRNSentryCxxSpecJSI : public TurboModule {
protected:
  NativeRNSentryCxxSpecJSI(std::shared_ptr<CallInvoker> jsInvoker);

public:
  virtual void addListener(jsi::Runtime &rt, jsi::String eventType) = 0;
  virtual void removeListeners(jsi::Runtime &rt, double id) = 0;
  virtual void addBreadcrumb(jsi::Runtime &rt, jsi::Object breadcrumb) = 0;
  virtual jsi::Value captureEnvelope(jsi::Runtime &rt, jsi::String bytes, jsi::Object options) = 0;
  virtual jsi::Value captureScreenshot(jsi::Runtime &rt) = 0;
  virtual void clearBreadcrumbs(jsi::Runtime &rt) = 0;
  virtual void crash(jsi::Runtime &rt) = 0;
  virtual jsi::Value closeNativeSdk(jsi::Runtime &rt) = 0;
  virtual void disableNativeFramesTracking(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchNativeRelease(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchNativeSdkInfo(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchNativeDeviceContexts(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchNativeAppStart(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchNativeFrames(jsi::Runtime &rt) = 0;
  virtual jsi::Value initNativeSdk(jsi::Runtime &rt, jsi::Object options) = 0;
  virtual void setUser(jsi::Runtime &rt, std::optional<jsi::Object> defaultUserKeys, std::optional<jsi::Object> otherUserKeys) = 0;
  virtual void setContext(jsi::Runtime &rt, jsi::String key, std::optional<jsi::Object> value) = 0;
  virtual void setExtra(jsi::Runtime &rt, jsi::String key, jsi::String value) = 0;
  virtual void setTag(jsi::Runtime &rt, jsi::String key, jsi::String value) = 0;
  virtual void enableNativeFramesTracking(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchModules(jsi::Runtime &rt) = 0;
  virtual jsi::Value fetchViewHierarchy(jsi::Runtime &rt) = 0;
  virtual jsi::Object startProfiling(jsi::Runtime &rt) = 0;
  virtual jsi::Object stopProfiling(jsi::Runtime &rt) = 0;
  virtual std::optional<jsi::String> fetchNativePackageName(jsi::Runtime &rt) = 0;
  virtual std::optional<jsi::Object> fetchNativeStackFramesBy(jsi::Runtime &rt, jsi::Array instructionsAddr) = 0;
  virtual jsi::Value initNativeReactNavigationNewFrameTracking(jsi::Runtime &rt) = 0;
  virtual jsi::Value captureReplay(jsi::Runtime &rt, bool isHardCrash) = 0;
  virtual std::optional<jsi::String> getCurrentReplayId(jsi::Runtime &rt) = 0;
  virtual jsi::Value crashedLastRun(jsi::Runtime &rt) = 0;

};

template <typename T>
class JSI_EXPORT NativeRNSentryCxxSpec : public TurboModule {
public:
  jsi::Value get(jsi::Runtime &rt, const jsi::PropNameID &propName) override {
    return delegate_.get(rt, propName);
  }

  static constexpr std::string_view kModuleName = "RNSentry";

protected:
  NativeRNSentryCxxSpec(std::shared_ptr<CallInvoker> jsInvoker)
    : TurboModule(std::string{NativeRNSentryCxxSpec::kModuleName}, jsInvoker),
      delegate_(reinterpret_cast<T*>(this), jsInvoker) {}


private:
  class Delegate : public NativeRNSentryCxxSpecJSI {
  public:
    Delegate(T *instance, std::shared_ptr<CallInvoker> jsInvoker) :
      NativeRNSentryCxxSpecJSI(std::move(jsInvoker)), instance_(instance) {

    }

    void addListener(jsi::Runtime &rt, jsi::String eventType) override {
      static_assert(
          bridging::getParameterCount(&T::addListener) == 2,
          "Expected addListener(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::addListener, jsInvoker_, instance_, std::move(eventType));
    }
    void removeListeners(jsi::Runtime &rt, double id) override {
      static_assert(
          bridging::getParameterCount(&T::removeListeners) == 2,
          "Expected removeListeners(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::removeListeners, jsInvoker_, instance_, std::move(id));
    }
    void addBreadcrumb(jsi::Runtime &rt, jsi::Object breadcrumb) override {
      static_assert(
          bridging::getParameterCount(&T::addBreadcrumb) == 2,
          "Expected addBreadcrumb(...) to have 2 parameters");

      return bridging::callFromJs<void>(
          rt, &T::addBreadcrumb, jsInvoker_, instance_, std::move(breadcrumb));
    }
    jsi::Value captureEnvelope(jsi::Runtime &rt, jsi::String bytes, jsi::Object options) override {
      static_assert(
          bridging::getParameterCount(&T::captureEnvelope) == 3,
          "Expected captureEnvelope(...) to have 3 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::captureEnvelope, jsInvoker_, instance_, std::move(bytes), std::move(options));
    }
    jsi::Value captureScreenshot(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::captureScreenshot) == 1,
          "Expected captureScreenshot(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::captureScreenshot, jsInvoker_, instance_);
    }
    void clearBreadcrumbs(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::clearBreadcrumbs) == 1,
          "Expected clearBreadcrumbs(...) to have 1 parameters");

      return bridging::callFromJs<void>(
          rt, &T::clearBreadcrumbs, jsInvoker_, instance_);
    }
    void crash(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::crash) == 1,
          "Expected crash(...) to have 1 parameters");

      return bridging::callFromJs<void>(
          rt, &T::crash, jsInvoker_, instance_);
    }
    jsi::Value closeNativeSdk(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::closeNativeSdk) == 1,
          "Expected closeNativeSdk(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::closeNativeSdk, jsInvoker_, instance_);
    }
    void disableNativeFramesTracking(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::disableNativeFramesTracking) == 1,
          "Expected disableNativeFramesTracking(...) to have 1 parameters");

      return bridging::callFromJs<void>(
          rt, &T::disableNativeFramesTracking, jsInvoker_, instance_);
    }
    jsi::Value fetchNativeRelease(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativeRelease) == 1,
          "Expected fetchNativeRelease(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchNativeRelease, jsInvoker_, instance_);
    }
    jsi::Value fetchNativeSdkInfo(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativeSdkInfo) == 1,
          "Expected fetchNativeSdkInfo(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchNativeSdkInfo, jsInvoker_, instance_);
    }
    jsi::Value fetchNativeDeviceContexts(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativeDeviceContexts) == 1,
          "Expected fetchNativeDeviceContexts(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchNativeDeviceContexts, jsInvoker_, instance_);
    }
    jsi::Value fetchNativeAppStart(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativeAppStart) == 1,
          "Expected fetchNativeAppStart(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchNativeAppStart, jsInvoker_, instance_);
    }
    jsi::Value fetchNativeFrames(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativeFrames) == 1,
          "Expected fetchNativeFrames(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchNativeFrames, jsInvoker_, instance_);
    }
    jsi::Value initNativeSdk(jsi::Runtime &rt, jsi::Object options) override {
      static_assert(
          bridging::getParameterCount(&T::initNativeSdk) == 2,
          "Expected initNativeSdk(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::initNativeSdk, jsInvoker_, instance_, std::move(options));
    }
    void setUser(jsi::Runtime &rt, std::optional<jsi::Object> defaultUserKeys, std::optional<jsi::Object> otherUserKeys) override {
      static_assert(
          bridging::getParameterCount(&T::setUser) == 3,
          "Expected setUser(...) to have 3 parameters");

      return bridging::callFromJs<void>(
          rt, &T::setUser, jsInvoker_, instance_, std::move(defaultUserKeys), std::move(otherUserKeys));
    }
    void setContext(jsi::Runtime &rt, jsi::String key, std::optional<jsi::Object> value) override {
      static_assert(
          bridging::getParameterCount(&T::setContext) == 3,
          "Expected setContext(...) to have 3 parameters");

      return bridging::callFromJs<void>(
          rt, &T::setContext, jsInvoker_, instance_, std::move(key), std::move(value));
    }
    void setExtra(jsi::Runtime &rt, jsi::String key, jsi::String value) override {
      static_assert(
          bridging::getParameterCount(&T::setExtra) == 3,
          "Expected setExtra(...) to have 3 parameters");

      return bridging::callFromJs<void>(
          rt, &T::setExtra, jsInvoker_, instance_, std::move(key), std::move(value));
    }
    void setTag(jsi::Runtime &rt, jsi::String key, jsi::String value) override {
      static_assert(
          bridging::getParameterCount(&T::setTag) == 3,
          "Expected setTag(...) to have 3 parameters");

      return bridging::callFromJs<void>(
          rt, &T::setTag, jsInvoker_, instance_, std::move(key), std::move(value));
    }
    void enableNativeFramesTracking(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::enableNativeFramesTracking) == 1,
          "Expected enableNativeFramesTracking(...) to have 1 parameters");

      return bridging::callFromJs<void>(
          rt, &T::enableNativeFramesTracking, jsInvoker_, instance_);
    }
    jsi::Value fetchModules(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchModules) == 1,
          "Expected fetchModules(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchModules, jsInvoker_, instance_);
    }
    jsi::Value fetchViewHierarchy(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchViewHierarchy) == 1,
          "Expected fetchViewHierarchy(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::fetchViewHierarchy, jsInvoker_, instance_);
    }
    jsi::Object startProfiling(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::startProfiling) == 1,
          "Expected startProfiling(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Object>(
          rt, &T::startProfiling, jsInvoker_, instance_);
    }
    jsi::Object stopProfiling(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::stopProfiling) == 1,
          "Expected stopProfiling(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Object>(
          rt, &T::stopProfiling, jsInvoker_, instance_);
    }
    std::optional<jsi::String> fetchNativePackageName(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativePackageName) == 1,
          "Expected fetchNativePackageName(...) to have 1 parameters");

      return bridging::callFromJs<std::optional<jsi::String>>(
          rt, &T::fetchNativePackageName, jsInvoker_, instance_);
    }
    std::optional<jsi::Object> fetchNativeStackFramesBy(jsi::Runtime &rt, jsi::Array instructionsAddr) override {
      static_assert(
          bridging::getParameterCount(&T::fetchNativeStackFramesBy) == 2,
          "Expected fetchNativeStackFramesBy(...) to have 2 parameters");

      return bridging::callFromJs<std::optional<jsi::Object>>(
          rt, &T::fetchNativeStackFramesBy, jsInvoker_, instance_, std::move(instructionsAddr));
    }
    jsi::Value initNativeReactNavigationNewFrameTracking(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::initNativeReactNavigationNewFrameTracking) == 1,
          "Expected initNativeReactNavigationNewFrameTracking(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::initNativeReactNavigationNewFrameTracking, jsInvoker_, instance_);
    }
    jsi::Value captureReplay(jsi::Runtime &rt, bool isHardCrash) override {
      static_assert(
          bridging::getParameterCount(&T::captureReplay) == 2,
          "Expected captureReplay(...) to have 2 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::captureReplay, jsInvoker_, instance_, std::move(isHardCrash));
    }
    std::optional<jsi::String> getCurrentReplayId(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::getCurrentReplayId) == 1,
          "Expected getCurrentReplayId(...) to have 1 parameters");

      return bridging::callFromJs<std::optional<jsi::String>>(
          rt, &T::getCurrentReplayId, jsInvoker_, instance_);
    }
    jsi::Value crashedLastRun(jsi::Runtime &rt) override {
      static_assert(
          bridging::getParameterCount(&T::crashedLastRun) == 1,
          "Expected crashedLastRun(...) to have 1 parameters");

      return bridging::callFromJs<jsi::Value>(
          rt, &T::crashedLastRun, jsInvoker_, instance_);
    }

  private:
    friend class NativeRNSentryCxxSpec;
    T *instance_;
  };

  Delegate delegate_;
};

} // namespace facebook::react
