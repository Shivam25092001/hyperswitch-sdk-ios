#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.10 (swiftlang-5.10.0.13 clang-1500.3.9.4)
#ifndef SENTRY_SWIFT_H
#define SENTRY_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import MetricKit;
@import ObjectiveC;
#endif

#import <Sentry/Sentry.h>

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="Sentry",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSString;

SWIFT_CLASS("_TtC6Sentry19HTTPHeaderSanitizer")
@interface HTTPHeaderSanitizer : NSObject
+ (NSDictionary<NSString *, NSString *> * _Nonnull)sanitizeHeaders:(NSDictionary<NSString *, NSString *> * _Nonnull)headers SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// Used for correlating metrics to spans. See https://github.com/getsentry/rfcs/blob/main/text/0123-metrics-correlation.md
SWIFT_CLASS("_TtC6Sentry22LocalMetricsAggregator")
@interface LocalMetricsAggregator : NSObject
- (NSDictionary<NSString *, NSArray<NSDictionary<NSString *, id> *> *> * _Nonnull)serialize SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_PROTOCOL_NAMED("SentryRRWebEventProtocol")
@protocol SentryRRWebEvent <SentrySerializable>
@end

enum SentryRRWebEventType : NSInteger;
@class NSDate;

SWIFT_CLASS("_TtC6Sentry16SentryRRWebEvent")
@interface SentryRRWebEvent : NSObject <SentryRRWebEvent>
@property (nonatomic, readonly) enum SentryRRWebEventType type;
@property (nonatomic, readonly, copy) NSDate * _Nonnull timestamp;
@property (nonatomic, readonly, copy) NSDictionary<NSString *, id> * _Nullable data;
- (nonnull instancetype)initWithType:(enum SentryRRWebEventType)type timestamp:(NSDate * _Nonnull)timestamp data:(NSDictionary<NSString *, id> * _Nullable)data OBJC_DESIGNATED_INITIALIZER;
- (NSDictionary<NSString *, id> * _Nonnull)serialize SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Sentry14RRWebMoveEvent")
@interface RRWebMoveEvent : SentryRRWebEvent
- (nonnull instancetype)initWithType:(enum SentryRRWebEventType)type timestamp:(NSDate * _Nonnull)timestamp data:(NSDictionary<NSString *, id> * _Nullable)data SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6Sentry15RRWebTouchEvent")
@interface RRWebTouchEvent : SentryRRWebEvent
- (nonnull instancetype)initWithType:(enum SentryRRWebEventType)type timestamp:(NSDate * _Nonnull)timestamp data:(NSDictionary<NSString *, id> * _Nullable)data SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6Sentry26SentryBaggageSerialization")
@interface SentryBaggageSerialization : NSObject
+ (NSString * _Nonnull)encodeDictionary:(NSDictionary<NSString *, NSString *> * _Nonnull)dictionary SWIFT_WARN_UNUSED_RESULT;
+ (NSDictionary<NSString *, NSString *> * _Nonnull)decode:(NSString * _Nonnull)baggage SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SentryBreadcrumb;

SWIFT_CLASS("_TtC6Sentry31SentryBreadcrumbReplayConverter")
@interface SentryBreadcrumbReplayConverter : NSObject
- (NSArray<SentryRRWebEvent *> * _Nonnull)replayBreadcrumbsFrom:(NSArray<SentryBreadcrumb *> * _Nonnull)breadcrumbs SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC6Sentry25SentryCurrentDateProvider")
@interface SentryCurrentDateProvider : NSObject
- (NSDate * _Nonnull)date SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)timezoneOffset SWIFT_WARN_UNUSED_RESULT;
- (uint64_t)systemTime SWIFT_WARN_UNUSED_RESULT;
- (NSTimeInterval)systemUptime SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface SentryCurrentDateProvider (SWIFT_EXTENSION(Sentry))
@property (nonatomic, readonly) uint64_t bucketTimestamp;
@end

@class SentryOptions;

SWIFT_CLASS("_TtC6Sentry28SentryEnabledFeaturesBuilder")
@interface SentryEnabledFeaturesBuilder : NSObject
+ (NSArray<NSString *> * _Nonnull)getEnabledFeaturesWithOptions:(SentryOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SentryReplayOptions;

SWIFT_CLASS("_TtC6Sentry25SentryExperimentalOptions")
@interface SentryExperimentalOptions : NSObject
/// Settings to configure the session replay.
@property (nonatomic, strong) SentryReplayOptions * _Nonnull sessionReplay;
- (void)validateOptions:(NSDictionary<NSString *, id> * _Nullable)options;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSUUID;

SWIFT_CLASS("_TtC6Sentry8SentryId")
@interface SentryId : NSObject
/// A @c SentryId with an empty UUID “00000000000000000000000000000000”.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, strong) SentryId * _Nonnull empty;)
+ (SentryId * _Nonnull)empty SWIFT_WARN_UNUSED_RESULT;
+ (void)setEmpty:(SentryId * _Nonnull)value;
/// Returns a 32 lowercase character hexadecimal string description of the @c SentryId, such as
/// “12c2d058d58442709aa2eca08bf20986”.
@property (nonatomic, readonly, copy) NSString * _Nonnull sentryIdString;
/// Creates a @c SentryId with a random UUID.
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Creates a SentryId with the given UUID.
- (nonnull instancetype)initWithUuid:(NSUUID * _Nonnull)uuid OBJC_DESIGNATED_INITIALIZER;
/// Creates a @c SentryId from a 32 character hexadecimal string without dashes such as
/// “12c2d058d58442709aa2eca08bf20986” or a 36 character hexadecimal string such as such as
/// “12c2d058-d584-4270-9aa2-eca08bf20986”.
/// @return SentryId.empty for invalid strings.
- (nonnull instancetype)initWithUUIDString:(NSString * _Nonnull)uuidString OBJC_DESIGNATED_INITIALIZER;
- (BOOL)isEqual:(id _Nullable)object SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@property (nonatomic, readonly) NSUInteger hash;
@end


SWIFT_PROTOCOL("_TtP6Sentry25SentryIntegrationProtocol_")
@protocol SentryIntegrationProtocol <NSObject>
/// Installs the integration and returns YES if successful.
- (BOOL)installWithOptions:(SentryOptions * _Nonnull)options SWIFT_WARN_UNUSED_RESULT;
/// Uninstalls the integration.
- (void)uninstall;
@end

typedef SWIFT_ENUM(NSUInteger, SentryLevel, open) {
  kSentryLevelNone SWIFT_COMPILE_NAME("none") = 0,
  kSentryLevelDebug SWIFT_COMPILE_NAME("debug") = 1,
  kSentryLevelInfo SWIFT_COMPILE_NAME("info") = 2,
  kSentryLevelWarning SWIFT_COMPILE_NAME("warning") = 3,
  kSentryLevelError SWIFT_COMPILE_NAME("error") = 4,
  kSentryLevelFatal SWIFT_COMPILE_NAME("fatal") = 5,
};

@class SentryMXFrame;

SWIFT_CLASS("_TtC6Sentry17SentryMXCallStack")
@interface SentryMXCallStack : NSObject
@property (nonatomic, copy) NSArray<SentryMXFrame *> * _Nonnull callStackRootFrames;
@property (nonatomic, readonly, copy) NSArray<SentryMXFrame *> * _Nonnull flattenedRootFrames;
- (nonnull instancetype)initWithThreadAttributed:(BOOL)threadAttributed rootFrames:(NSArray<SentryMXFrame *> * _Nonnull)rootFrames OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class NSData;

/// JSON specification of MXCallStackTree can be found here https://developer.apple.com/documentation/metrickit/mxcallstacktree/3552293-jsonrepresentation
SWIFT_CLASS("_TtC6Sentry21SentryMXCallStackTree")
@interface SentryMXCallStackTree : NSObject
@property (nonatomic, readonly, copy) NSArray<SentryMXCallStack *> * _Nonnull callStacks;
@property (nonatomic, readonly) BOOL callStackPerThread;
- (nonnull instancetype)initWithCallStacks:(NSArray<SentryMXCallStack *> * _Nonnull)callStacks callStackPerThread:(BOOL)callStackPerThread OBJC_DESIGNATED_INITIALIZER;
+ (SentryMXCallStackTree * _Nullable)fromData:(NSData * _Nonnull)data error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Sentry13SentryMXFrame")
@interface SentryMXFrame : NSObject
@property (nonatomic, copy) NSUUID * _Nonnull binaryUUID;
@property (nonatomic) NSInteger offsetIntoBinaryTextSegment;
@property (nonatomic, copy) NSString * _Nullable binaryName;
@property (nonatomic) uint64_t address;
@property (nonatomic, copy) NSArray<SentryMXFrame *> * _Nullable subFrames;
@property (nonatomic, readonly, copy) NSArray<SentryMXFrame *> * _Nonnull frames;
@property (nonatomic, readonly, copy) NSArray<SentryMXFrame *> * _Nonnull framesIncludingSelf;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol SentryMXManagerDelegate;
@class MXDiagnosticPayload;

SWIFT_CLASS("_TtC6Sentry15SentryMXManager") SWIFT_AVAILABILITY(watchos,unavailable) SWIFT_AVAILABILITY(tvos,unavailable) SWIFT_AVAILABILITY(maccatalyst,introduced=15.0) SWIFT_AVAILABILITY(macos,introduced=12.0) SWIFT_AVAILABILITY(ios,introduced=15.0)
@interface SentryMXManager : NSObject <MXMetricManagerSubscriber>
@property (nonatomic, readonly) BOOL disableCrashDiagnostics;
- (nonnull instancetype)initWithDisableCrashDiagnostics:(BOOL)disableCrashDiagnostics OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, weak) id <SentryMXManagerDelegate> _Nullable delegate;
- (void)receiveReports;
- (void)pauseReports;
- (void)didReceiveDiagnosticPayloads:(NSArray<MXDiagnosticPayload *> * _Nonnull)payloads;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class MXCrashDiagnostic;
@class MXDiskWriteExceptionDiagnostic;
@class MXCPUExceptionDiagnostic;
@class MXHangDiagnostic;

SWIFT_PROTOCOL("_TtP6Sentry23SentryMXManagerDelegate_") SWIFT_AVAILABILITY(watchos,unavailable) SWIFT_AVAILABILITY(tvos,unavailable) SWIFT_AVAILABILITY(maccatalyst,introduced=15.0) SWIFT_AVAILABILITY(macos,introduced=12.0) SWIFT_AVAILABILITY(ios,introduced=15.0)
@protocol SentryMXManagerDelegate
- (void)didReceiveCrashDiagnostic:(MXCrashDiagnostic * _Nonnull)diagnostic callStackTree:(SentryMXCallStackTree * _Nonnull)callStackTree timeStampBegin:(NSDate * _Nonnull)timeStampBegin timeStampEnd:(NSDate * _Nonnull)timeStampEnd;
- (void)didReceiveDiskWriteExceptionDiagnostic:(MXDiskWriteExceptionDiagnostic * _Nonnull)diagnostic callStackTree:(SentryMXCallStackTree * _Nonnull)callStackTree timeStampBegin:(NSDate * _Nonnull)timeStampBegin timeStampEnd:(NSDate * _Nonnull)timeStampEnd;
- (void)didReceiveCpuExceptionDiagnostic:(MXCPUExceptionDiagnostic * _Nonnull)diagnostic callStackTree:(SentryMXCallStackTree * _Nonnull)callStackTree timeStampBegin:(NSDate * _Nonnull)timeStampBegin timeStampEnd:(NSDate * _Nonnull)timeStampEnd;
- (void)didReceiveHangDiagnostic:(MXHangDiagnostic * _Nonnull)diagnostic callStackTree:(SentryMXCallStackTree * _Nonnull)callStackTree timeStampBegin:(NSDate * _Nonnull)timeStampBegin timeStampEnd:(NSDate * _Nonnull)timeStampEnd;
@end

@class SentryMetricsClient;
@class SentryDispatchQueueWrapper;
@protocol SentryRandom;
@protocol SentryMetricsAPIDelegate;
@class SentryMeasurementUnit;

SWIFT_CLASS("_TtC6Sentry16SentryMetricsAPI")
@interface SentryMetricsAPI : NSObject
- (nonnull instancetype)initWithEnabled:(BOOL)enabled client:(SentryMetricsClient * _Nonnull)client currentDate:(SentryCurrentDateProvider * _Nonnull)currentDate dispatchQueue:(SentryDispatchQueueWrapper * _Nonnull)dispatchQueue random:(id <SentryRandom> _Nonnull)random beforeEmitMetric:(BOOL (^ _Nullable)(NSString * _Nonnull, NSDictionary<NSString *, NSString *> * _Nonnull))beforeEmitMetric OBJC_DESIGNATED_INITIALIZER;
- (void)setDelegate:(id <SentryMetricsAPIDelegate> _Nullable)delegate;
/// Emits a Counter metric.
/// \param key A unique key identifying the metric.
///
/// \param value The value to be added.
///
/// \param unit The value for the metric see <code>MeasurementUnit</code>.
///
/// \param tags Tags to associate with the metric.
///
- (void)incrementWithKey:(NSString * _Nonnull)key value:(double)value unit:(SentryMeasurementUnit * _Nonnull)unit tags:(NSDictionary<NSString *, NSString *> * _Nonnull)tags;
/// Emits a Gauge metric.
/// \param key A unique key identifying the metric.
///
/// \param value The value to be added.
///
/// \param unit The value for the metric see <code>MeasurementUnit</code>.
///
/// \param tags Tags to associate with the metric.
///
- (void)gaugeWithKey:(NSString * _Nonnull)key value:(double)value unit:(SentryMeasurementUnit * _Nonnull)unit tags:(NSDictionary<NSString *, NSString *> * _Nonnull)tags;
/// Emits a Distribution metric.
/// \param key A unique key identifying the metric.
///
/// \param value The value to be added.
///
/// \param unit The value for the metric see <code>MeasurementUnit</code>.
///
/// \param tags Tags to associate with the metric.
///
- (void)distributionWithKey:(NSString * _Nonnull)key value:(double)value unit:(SentryMeasurementUnit * _Nonnull)unit tags:(NSDictionary<NSString *, NSString *> * _Nonnull)tags;
/// Emits a Set metric.
/// \param key A unique key identifying the metric.
///
/// \param value The value to be added.
///
/// \param unit The value for the metric see <code>MeasurementUnit</code>.
///
/// \param tags Tags to associate with the metric.
///
- (void)setWithKey:(NSString * _Nonnull)key value:(NSString * _Nonnull)value unit:(SentryMeasurementUnit * _Nonnull)unit tags:(NSDictionary<NSString *, NSString *> * _Nonnull)tags;
- (void)close;
- (void)flush;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@protocol SentrySpan;

SWIFT_PROTOCOL("_TtP6Sentry24SentryMetricsAPIDelegate_")
@protocol SentryMetricsAPIDelegate
- (NSDictionary<NSString *, NSString *> * _Nonnull)getDefaultTagsForMetrics SWIFT_WARN_UNUSED_RESULT;
- (id <SentrySpan> _Nullable)getCurrentSpan SWIFT_WARN_UNUSED_RESULT;
- (LocalMetricsAggregator * _Nullable)getLocalMetricsAggregatorWithSpan:(id <SentrySpan> _Nonnull)span SWIFT_WARN_UNUSED_RESULT;
@end

@class SentryStatsdClient;

SWIFT_CLASS("_TtC6Sentry19SentryMetricsClient")
@interface SentryMetricsClient : NSObject
- (nonnull instancetype)initWithClient:(SentryStatsdClient * _Nonnull)client OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIImage;
@class NSURL;
@class SentryVideoInfo;

SWIFT_PROTOCOL("_TtP6Sentry22SentryReplayVideoMaker_")
@protocol SentryReplayVideoMaker <NSObject>
@property (nonatomic) NSInteger videoWidth;
@property (nonatomic) NSInteger videoHeight;
- (void)addFrameAsyncWithImage:(UIImage * _Nonnull)image;
- (void)releaseFramesUntil:(NSDate * _Nonnull)date;
- (BOOL)createVideoWithDuration:(NSTimeInterval)duration beginning:(NSDate * _Nonnull)beginning outputFileURL:(NSURL * _Nonnull)outputFileURL error:(NSError * _Nullable * _Nullable)error completion:(void (^ _Nonnull)(SentryVideoInfo * _Nullable, NSError * _Nullable))completion;
@end


SWIFT_CLASS("_TtC6Sentry20SentryOnDemandReplay")
@interface SentryOnDemandReplay : NSObject <SentryReplayVideoMaker>
@property (nonatomic) NSInteger videoWidth;
@property (nonatomic) NSInteger videoHeight;
@property (nonatomic) NSInteger bitRate;
@property (nonatomic) NSInteger frameRate;
@property (nonatomic) NSUInteger cacheMaxSize;
- (nonnull instancetype)initWithOutputPath:(NSString * _Nonnull)outputPath;
- (nonnull instancetype)initWithOutputPath:(NSString * _Nonnull)outputPath workingQueue:(SentryDispatchQueueWrapper * _Nonnull)workingQueue dateProvider:(SentryCurrentDateProvider * _Nonnull)dateProvider OBJC_DESIGNATED_INITIALIZER;
- (void)addFrameAsyncWithImage:(UIImage * _Nonnull)image;
- (void)releaseFramesUntil:(NSDate * _Nonnull)date;
- (BOOL)createVideoWithDuration:(NSTimeInterval)duration beginning:(NSDate * _Nonnull)beginning outputFileURL:(NSURL * _Nonnull)outputFileURL error:(NSError * _Nullable * _Nullable)error completion:(void (^ _Nonnull)(SentryVideoInfo * _Nullable, NSError * _Nullable))completion;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC6Sentry22SentryRRWebCustomEvent")
@interface SentryRRWebCustomEvent : SentryRRWebEvent
@property (nonatomic, readonly, copy) NSString * _Nonnull tag;
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp tag:(NSString * _Nonnull)tag payload:(NSDictionary<NSString *, id> * _Nonnull)payload OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithType:(enum SentryRRWebEventType)type timestamp:(NSDate * _Nonnull)timestamp data:(NSDictionary<NSString *, id> * _Nullable)data SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6Sentry26SentryRRWebBreadcrumbEvent")
@interface SentryRRWebBreadcrumbEvent : SentryRRWebCustomEvent
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp category:(NSString * _Nonnull)category message:(NSString * _Nullable)message level:(enum SentryLevel)level data:(NSDictionary<NSString *, id> * _Nullable)data OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp tag:(NSString * _Nonnull)tag payload:(NSDictionary<NSString *, id> * _Nonnull)payload SWIFT_UNAVAILABLE;
@end




typedef SWIFT_ENUM(NSInteger, SentryRRWebEventType, closed) {
  SentryRRWebEventTypeNone = 0,
  SentryRRWebEventTypeTouch = 3,
  SentryRRWebEventTypeMeta = 4,
  SentryRRWebEventTypeCustom = 5,
};


SWIFT_CLASS("_TtC6Sentry20SentryRRWebMetaEvent")
@interface SentryRRWebMetaEvent : SentryRRWebEvent
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp height:(NSInteger)height width:(NSInteger)width OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithType:(enum SentryRRWebEventType)type timestamp:(NSDate * _Nonnull)timestamp data:(NSDictionary<NSString *, id> * _Nullable)data SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6Sentry20SentryRRWebSpanEvent")
@interface SentryRRWebSpanEvent : SentryRRWebCustomEvent
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp endTimestamp:(NSDate * _Nonnull)endTimestamp operation:(NSString * _Nonnull)operation description:(NSString * _Nonnull)description data:(NSDictionary<NSString *, id> * _Nonnull)data OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp tag:(NSString * _Nonnull)tag payload:(NSDictionary<NSString *, id> * _Nonnull)payload SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC6Sentry21SentryRRWebVideoEvent")
@interface SentryRRWebVideoEvent : SentryRRWebCustomEvent
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp segmentId:(NSInteger)segmentId size:(NSInteger)size duration:(NSTimeInterval)duration encoding:(NSString * _Nonnull)encoding container:(NSString * _Nonnull)container height:(NSInteger)height width:(NSInteger)width frameCount:(NSInteger)frameCount frameRateType:(NSString * _Nonnull)frameRateType frameRate:(NSInteger)frameRate left:(NSInteger)left top:(NSInteger)top OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithTimestamp:(NSDate * _Nonnull)timestamp tag:(NSString * _Nonnull)tag payload:(NSDictionary<NSString *, id> * _Nonnull)payload SWIFT_UNAVAILABLE;
@end


SWIFT_PROTOCOL("_TtP6Sentry19SentryRedactOptions_")
@protocol SentryRedactOptions
@property (nonatomic, readonly) BOOL redactAllText;
@property (nonatomic, readonly) BOOL redactAllImages;
@end


SWIFT_PROTOCOL("_TtP6Sentry31SentryReplayBreadcrumbConverter_")
@protocol SentryReplayBreadcrumbConverter <NSObject>
- (id <SentryRRWebEvent> _Nullable)convertFrom:(SentryBreadcrumb * _Nonnull)breadcrumb SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC6Sentry19SentryReplayOptions")
@interface SentryReplayOptions : NSObject <SentryRedactOptions>
/// Indicates the percentage in which the replay for the session will be created.
/// note:
/// The value needs to be >= 0.0 and <= 1.0. When setting a value out of range the SDK sets it
/// to the default.
/// note:
/// The default is 0.
/// <ul>
///   <li>
///     Specifying @c 0 means never, @c 1.0 means always.
///   </li>
/// </ul>
@property (nonatomic) float sessionSampleRate;
/// Indicates the percentage in which a 30 seconds replay will be send with error events.
/// note:
/// The value needs to be >= 0.0 and <= 1.0. When setting a value out of range the SDK sets it
/// to the default.
/// note:
/// The default is 0.
/// <ul>
///   <li>
///     Specifying 0 means never, 1.0 means always.
///   </li>
/// </ul>
@property (nonatomic) float errorSampleRate;
/// Indicates whether session replay should redact all text in the app
/// by drawing a black rectangle over it.
/// note:
/// The default is true
@property (nonatomic) BOOL redactAllText;
/// Indicates whether session replay should redact all non-bundled image
/// in the app by drawing a black rectangle over it.
/// note:
/// The default is true
@property (nonatomic) BOOL redactAllImages;
/// Defines the quality of the session replay.
/// Higher bit rates better quality, but also bigger files to transfer.
@property (nonatomic, readonly) NSInteger replayBitRate;
/// The scale related to the window size at which the replay will be created
@property (nonatomic, readonly) float sizeScale;
/// Number of frames per second of the replay.
/// The more the havier the process is.
@property (nonatomic, readonly) NSInteger frameRate;
/// The maximum duration of replays for error events.
@property (nonatomic, readonly) NSTimeInterval errorReplayDuration;
/// The maximum duration of the segment of a session replay.
@property (nonatomic, readonly) NSTimeInterval sessionSegmentDuration;
/// The maximum duration of a replay session.
@property (nonatomic, readonly) NSTimeInterval maximumDuration;
/// Inittialize session replay options disabled
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
/// Initialize session replay options
/// <ul>
///   <li>
///     parameters:
///   </li>
///   <li>
///     sessionSampleRate Indicates the percentage in which the replay for the session will be created.
///   </li>
///   <li>
///     errorSampleRate Indicates the percentage in which a 30 seconds replay will be send with
///     error events.
///   </li>
/// </ul>
- (nonnull instancetype)initWithSessionSampleRate:(float)sessionSampleRate errorSampleRate:(float)errorSampleRate redactAllText:(BOOL)redactAllText redactAllImages:(BOOL)redactAllImages OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithDictionary:(NSDictionary<NSString *, id> * _Nonnull)dictionary;
@end


SWIFT_CLASS("_TtC6Sentry21SentryReplayRecording")
@interface SentryReplayRecording : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SentryReplayEncoding;)
+ (NSString * _Nonnull)SentryReplayEncoding SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SentryReplayContainer;)
+ (NSString * _Nonnull)SentryReplayContainer SWIFT_WARN_UNUSED_RESULT;
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SentryReplayFrameRateType;)
+ (NSString * _Nonnull)SentryReplayFrameRateType SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly) NSInteger segmentId;
@property (nonatomic, readonly, copy) NSArray<SentryRRWebEvent *> * _Nonnull events;
- (nonnull instancetype)initWithSegmentId:(NSInteger)segmentId size:(NSInteger)size start:(NSDate * _Nonnull)start duration:(NSTimeInterval)duration frameCount:(NSInteger)frameCount frameRate:(NSInteger)frameRate height:(NSInteger)height width:(NSInteger)width extraEvents:(NSArray<SentryRRWebEvent *> * _Nullable)extraEvents OBJC_DESIGNATED_INITIALIZER;
- (NSDictionary<NSString *, id> * _Nonnull)headerForReplayRecording SWIFT_WARN_UNUSED_RESULT;
- (NSArray<NSDictionary<NSString *, id> *> * _Nonnull)serialize SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end



SWIFT_CLASS("_TtC6Sentry34SentrySRDefaultBreadcrumbConverter")
@interface SentrySRDefaultBreadcrumbConverter : NSObject <SentryReplayBreadcrumbConverter>
/// This function will convert the SDK breadcrumbs to session replay breadcrumbs in a format that the front-end understands.
/// Any deviation in the information will cause the breadcrumb or the information itself to be discarded
/// in order to avoid unknown behavior in the front-end.
- (id <SentryRRWebEvent> _Nullable)convertFrom:(SentryBreadcrumb * _Nonnull)breadcrumb SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class SentrySession;

SWIFT_PROTOCOL("_TtP6Sentry21SentrySessionListener_")
@protocol SentrySessionListener <NSObject>
- (void)sentrySessionEnded:(SentrySession * _Nonnull)session;
- (void)sentrySessionStarted:(SentrySession * _Nonnull)session;
@end

@class UIEvent;

SWIFT_CLASS("_TtC6Sentry18SentryTouchTracker")
@interface SentryTouchTracker : NSObject
- (nonnull instancetype)initWithDateProvider:(SentryCurrentDateProvider * _Nonnull)dateProvider scale:(float)scale OBJC_DESIGNATED_INITIALIZER;
- (void)trackTouchFromEvent:(UIEvent * _Nonnull)event;
- (void)flushFinishedEvents;
- (NSArray<SentryRRWebEvent *> * _Nonnull)replayEventsFrom:(NSDate * _Nonnull)from until:(NSDate * _Nonnull)until SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

typedef SWIFT_ENUM(NSInteger, SentryTransactionNameSource, open) {
  kSentryTransactionNameSourceCustom SWIFT_COMPILE_NAME("custom") = 0,
  kSentryTransactionNameSourceUrl SWIFT_COMPILE_NAME("url") = 1,
  kSentryTransactionNameSourceRoute SWIFT_COMPILE_NAME("route") = 2,
  kSentryTransactionNameSourceView SWIFT_COMPILE_NAME("view") = 3,
  kSentryTransactionNameSourceComponent SWIFT_COMPILE_NAME("component") = 4,
  kSentryTransactionNameSourceTask SWIFT_COMPILE_NAME("sourceTask") = 5,
};


SWIFT_CLASS("_TtC6Sentry15SentryVideoInfo")
@interface SentryVideoInfo : NSObject
@property (nonatomic, readonly, copy) NSURL * _Nonnull path;
@property (nonatomic, readonly) NSInteger height;
@property (nonatomic, readonly) NSInteger width;
@property (nonatomic, readonly) NSTimeInterval duration;
@property (nonatomic, readonly) NSInteger frameCount;
@property (nonatomic, readonly) NSInteger frameRate;
@property (nonatomic, readonly, copy) NSDate * _Nonnull start;
@property (nonatomic, readonly, copy) NSDate * _Nonnull end;
@property (nonatomic, readonly) NSInteger fileSize;
- (nonnull instancetype)initWithPath:(NSURL * _Nonnull)path height:(NSInteger)height width:(NSInteger)width duration:(NSTimeInterval)duration frameCount:(NSInteger)frameCount frameRate:(NSInteger)frameRate start:(NSDate * _Nonnull)start end:(NSDate * _Nonnull)end fileSize:(NSInteger)fileSize OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIView;

SWIFT_PROTOCOL("_TtP6Sentry28SentryViewScreenshotProvider_")
@protocol SentryViewScreenshotProvider <NSObject>
- (void)imageWithView:(UIView * _Nonnull)view options:(id <SentryRedactOptions> _Nonnull)options onComplete:(void (^ _Nonnull)(UIImage * _Nonnull))onComplete;
@end


SWIFT_CLASS("_TtC6Sentry22SentryViewPhotographer")
@interface SentryViewPhotographer : NSObject <SentryViewScreenshotProvider>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) SentryViewPhotographer * _Nonnull shared;)
+ (SentryViewPhotographer * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (void)imageWithView:(UIView * _Nonnull)view options:(id <SentryRedactOptions> _Nonnull)options onComplete:(void (^ _Nonnull)(UIImage * _Nonnull))onComplete;
- (void)addIgnoreClasses:(NSArray<Class> * _Nonnull)classes;
- (void)addRedactClasses:(NSArray<Class> * _Nonnull)classes;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC6Sentry15SwiftDescriptor")
@interface SwiftDescriptor : NSObject
+ (NSString * _Nonnull)getObjectClassName:(id _Nonnull)object SWIFT_WARN_UNUSED_RESULT;
+ (NSString * _Nullable)getSwiftErrorDescription:(NSError * _Nonnull)error SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSessionTask;

SWIFT_CLASS("_TtC6Sentry20URLSessionTaskHelper")
@interface URLSessionTaskHelper : NSObject
+ (NSString * _Nullable)getGraphQLOperationNameFrom:(NSURLSessionTask * _Nullable)task SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLQueryItem;

SWIFT_CLASS("_TtC6Sentry12UrlSanitized")
@interface UrlSanitized : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull SENSITIVE_DATA_SUBSTITUTE;)
+ (NSString * _Nonnull)SENSITIVE_DATA_SUBSTITUTE SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, readonly, copy) NSString * _Nullable query;
@property (nonatomic, readonly, copy) NSArray<NSURLQueryItem *> * _Nullable queryItems;
@property (nonatomic, readonly, copy) NSString * _Nullable fragment;
- (nonnull instancetype)initWithURL:(NSURL * _Nonnull)url OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly, copy) NSString * _Nullable sanitizedUrl;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
