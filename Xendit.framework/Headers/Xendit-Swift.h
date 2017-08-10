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
@import ObjectiveC;
@import Foundation;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSNumber;

SWIFT_CLASS_NAMED("AuthenticationData")
@interface XENAuthenticationData : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified tokenId;
@property (nonatomic, copy) NSString * _Null_unspecified cardCvn;
@property (nonatomic, strong) NSNumber * _Null_unspecified amount;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS_NAMED("CardData")
@interface XENCardData : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified cardNumber;
@property (nonatomic, copy) NSString * _Null_unspecified cardExpMonth;
@property (nonatomic, copy) NSString * _Null_unspecified cardExpYear;
@property (nonatomic, copy) NSString * _Nullable cardCvn;
@property (nonatomic, strong) NSNumber * _Null_unspecified amount;
@property (nonatomic) BOOL isMultipleUse;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface NSRegularExpression (SWIFT_EXTENSION(Xendit))
@end


SWIFT_CLASS("_TtC6Xendit16WebViewConstants")
@interface WebViewConstants : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nonnull templateHTMLWithAuthenticateURL;)
+ (NSString * _Nonnull)templateHTMLWithAuthenticateURL SWIFT_WARN_UNUSED_RESULT;
+ (void)setTemplateHTMLWithAuthenticateURL:(NSString * _Nonnull)value;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIViewController;
@class XENCCToken;
@class XENError;
@class XENAuthentication;

SWIFT_CLASS_NAMED("Xendit")
@interface Xendit : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, copy) NSString * _Nullable publishableKey;)
+ (NSString * _Nullable)publishableKey SWIFT_WARN_UNUSED_RESULT;
+ (void)setPublishableKey:(NSString * _Nullable)value;
+ (void)createTokenFromViewController:(UIViewController * _Nonnull)fromViewController cardData:(XENCardData * _Null_unspecified)cardData shouldAuthenticate:(BOOL)shouldAuthenticate completion:(void (^ _Nonnull)(XENCCToken * _Nullable, XENError * _Nullable))completion;
+ (void)createTokenFromViewController:(UIViewController * _Nonnull)fromViewController cardData:(XENCardData * _Null_unspecified)cardData completion:(void (^ _Nonnull)(XENCCToken * _Nullable, XENError * _Nullable))completion;
+ (void)createAuthenticationFromViewController:(UIViewController * _Nonnull)fromViewController tokenId:(NSString * _Nonnull)tokenId amount:(NSNumber * _Nonnull)amount cardCVN:(NSString * _Nonnull)cardCVN completion:(void (^ _Nonnull)(XENAuthentication * _Nullable, XENError * _Nullable))completion;
+ (void)createAuthenticationFromViewController:(UIViewController * _Nonnull)fromViewController tokenId:(NSString * _Nonnull)tokenId amount:(NSNumber * _Nonnull)amount completion:(void (^ _Nonnull)(XENAuthentication * _Nullable, XENError * _Nullable))completion;
+ (BOOL)isCardNumberValidWithCardNumber:(NSString * _Nonnull)cardNumber SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isExpiryValidWithCardExpirationMonth:(NSString * _Nonnull)cardExpirationMonth cardExpirationYear:(NSString * _Nonnull)cardExpirationYear SWIFT_WARN_UNUSED_RESULT;
+ (BOOL)isCvnValidWithCreditCardCVN:(NSString * _Nonnull)creditCardCVN SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface Xendit (SWIFT_EXTENSION(Xendit))
@end


SWIFT_CLASS_NAMED("XenditAuthentication")
@interface XENAuthentication : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified authenticationID;
@property (nonatomic, copy) NSString * _Null_unspecified status;
@property (nonatomic, copy) NSString * _Nullable authenticationURL;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface XENAuthentication (SWIFT_EXTENSION(Xendit))
@end


SWIFT_CLASS_NAMED("XenditCCToken")
@interface XENCCToken : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified tokenID;
@property (nonatomic, copy) NSString * _Null_unspecified status;
@property (nonatomic, copy) NSString * _Null_unspecified authenticationId;
@property (nonatomic, copy) NSString * _Nullable authenticationURL;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface XENCCToken (SWIFT_EXTENSION(Xendit))
@end


SWIFT_CLASS_NAMED("XenditError")
@interface XENError : NSObject
@property (nonatomic, copy) NSString * _Null_unspecified errorCode;
@property (nonatomic, copy) NSString * _Null_unspecified message;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface XENError (SWIFT_EXTENSION(Xendit))
@end

#pragma clang diagnostic pop
