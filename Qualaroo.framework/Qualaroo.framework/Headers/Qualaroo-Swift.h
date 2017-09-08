// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
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

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
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
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
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
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
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
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"

@interface NSBundle (SWIFT_EXTENSION(Qualaroo))
@end

@class UIImage;
@class UIViewController;

/// Main component of SDK
SWIFT_CLASS("_TtC8Qualaroo8Qualaroo")
@interface Qualaroo : NSObject
/// Instance of Qualaroo class that should be used.
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) Qualaroo * _Nonnull shared;)
+ (Qualaroo * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
/// You need to call this method on Qualaroo.shared to create and configure main component with given credentials
/// \param apiKey String that authenticate user. You can get it from https://app.qualaroo.com/dashboard by tapping on “Setup” when you expand selected site/application.
///
///
/// throws:
/// possible errors SDKError.invalidAPIKey if apiKey was invalid.
- (BOOL)configureWithApiKey:(NSString * _Nonnull)apiKey autotracking:(BOOL)autotracking error:(NSError * _Nullable * _Nullable)error;
/// Set dafault language that you want to use for surveys. If survey won’t support preferred language it will try to use english, if it’s also not supported then it will use first one from supported languages.
/// \param language String that is valid ISO Language Code. Currently Qualaroo is not supporting ISO Country Codes. Example “en” or “fr”. Not supported “en-AU” or “fr-CA”.
///
- (BOOL)setPreferredSurveysLanguage:(NSString * _Nonnull)language error:(NSError * _Nullable * _Nullable)error;
/// Set default theme you want to use for surveys. You can create your own one or use one of predefined be calling Theme.withStyle(_:logo:).
/// \param theme Instance of configured Theme.
///
- (void)setLogo:(UIImage * _Nonnull)logo;
/// Way to identify user. This ID will be sent with every response user gave us. Can be changed between surveys. We still will send same device unique ID, for every response given from this device.
/// \param userID Unique ID of current user.
///
- (void)setUserID:(NSString * _Nonnull)userID;
/// Set custom properties of current user.
/// \param userProporties Dictionary containing additional info about current user. Used for custom survey targeting. Should match schema used by dashboard on web.
///
- (void)setUserProperties:(NSDictionary<NSString *, NSString *> * _Nonnull)userProporties;
/// Add or change one userProperty.
/// \param key String that is used as a key of property we want to add/update.
///
/// \param value New value of property that we are passing.
///
- (void)addUserProperty:(NSString * _Nonnull)key withValue:(NSString * _Nonnull)value;
/// Remove userProperty if there is one. If there is no property with given key nothing happens.
/// \param key String that is used as a key of property we want toremove.
///
- (void)removeUserProperty:(NSString * _Nonnull)key;
/// Gives copy of userProperties.
///
/// returns:
/// Dictionary with previously set userProperties.
- (NSDictionary<NSString *, NSString *> * _Nonnull)userProperties SWIFT_WARN_UNUSED_RESULT;
/// Way to show survey with selected name (alias).
/// \param alias Name of survey we want to show. Can get/set it on “target” section of survey creation/editting.
///
/// \param viewController It will try to use navigationController of given viewController to present survey view, or viewController itself if there it hasn’t got navigation controller. You need to be careful if using with view controllers that are not using full screen.
///
///
/// throws:
/// possible errors SDKError.noSurvey if there is no survey for given alias.
- (BOOL)showSurveyWith:(NSString * _Nonnull)alias on:(UIViewController * _Nonnull)viewController error:(NSError * _Nullable * _Nullable)error;
/// Disabling creation objects of this class others than shared - that’s why it’s private.
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface UIButton (SWIFT_EXTENSION(Qualaroo))
@end


@interface UIColor (SWIFT_EXTENSION(Qualaroo))
@end


@interface UIViewController (SWIFT_EXTENSION(Qualaroo))
@end

#pragma clang diagnostic pop
