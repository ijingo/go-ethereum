/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.10
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: /home/jingo/gowork/src/ustore/ustore.i

#define SWIGMODULE ustore

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } SWIGSTRUCTPACKED a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}


#define SWIG_exception(code, msg) _swig_gopanic(msg)


static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include <string>


#include "status.h"


#include "write_batch.h"


#include <stdexcept>


#include <utility>


#include "db.h"

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_ustore_b40e736282a5577d(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_ustore_b40e736282a5577d(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_OK_ustore_b40e736282a5577d() {
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  result = ustore_kvdb::Status::OK();
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_NotFound__SWIG_0_ustore_b40e736282a5577d(_gostring_ _swig_go_0, _gostring_ _swig_go_1) {
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = ustore_kvdb::Status::NotFound((std::string const &)*arg1,(std::string const &)*arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_NotFound__SWIG_1_ustore_b40e736282a5577d(_gostring_ _swig_go_0) {
  std::string *arg1 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  result = ustore_kvdb::Status::NotFound((std::string const &)*arg1);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_Corruption__SWIG_0_ustore_b40e736282a5577d(_gostring_ _swig_go_0, _gostring_ _swig_go_1) {
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = ustore_kvdb::Status::Corruption((std::string const &)*arg1,(std::string const &)*arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_Corruption__SWIG_1_ustore_b40e736282a5577d(_gostring_ _swig_go_0) {
  std::string *arg1 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  result = ustore_kvdb::Status::Corruption((std::string const &)*arg1);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_NotSupported__SWIG_0_ustore_b40e736282a5577d(_gostring_ _swig_go_0, _gostring_ _swig_go_1) {
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = ustore_kvdb::Status::NotSupported((std::string const &)*arg1,(std::string const &)*arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_NotSupported__SWIG_1_ustore_b40e736282a5577d(_gostring_ _swig_go_0) {
  std::string *arg1 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  result = ustore_kvdb::Status::NotSupported((std::string const &)*arg1);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_InvalidArgument__SWIG_0_ustore_b40e736282a5577d(_gostring_ _swig_go_0, _gostring_ _swig_go_1) {
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = ustore_kvdb::Status::InvalidArgument((std::string const &)*arg1,(std::string const &)*arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_InvalidArgument__SWIG_1_ustore_b40e736282a5577d(_gostring_ _swig_go_0) {
  std::string *arg1 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  result = ustore_kvdb::Status::InvalidArgument((std::string const &)*arg1);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_IOError__SWIG_0_ustore_b40e736282a5577d(_gostring_ _swig_go_0, _gostring_ _swig_go_1) {
  std::string *arg1 = 0 ;
  std::string *arg2 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = ustore_kvdb::Status::IOError((std::string const &)*arg1,(std::string const &)*arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_Status_IOError__SWIG_1_ustore_b40e736282a5577d(_gostring_ _swig_go_0) {
  std::string *arg1 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  
  std::string arg1_str(_swig_go_0.p, _swig_go_0.n);
  arg1 = &arg1_str;
  
  
  result = ustore_kvdb::Status::IOError((std::string const &)*arg1);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


bool _wrap_Status_ok_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = (bool)((ustore_kvdb::Status const *)arg1)->ok();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Status_IsNotFound_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = (bool)((ustore_kvdb::Status const *)arg1)->IsNotFound();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Status_IsCorruption_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = (bool)((ustore_kvdb::Status const *)arg1)->IsCorruption();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Status_IsNotSupported_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = (bool)((ustore_kvdb::Status const *)arg1)->IsNotSupported();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Status_IsInvalidArgument_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = (bool)((ustore_kvdb::Status const *)arg1)->IsInvalidArgument();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Status_IsIOError_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = (bool)((ustore_kvdb::Status const *)arg1)->IsIOError();
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_Status_ToString_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  std::string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  result = ((ustore_kvdb::Status const *)arg1)->ToString();
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_new_Status_ustore_b40e736282a5577d() {
  ustore_kvdb::Status *result = 0 ;
  ustore_kvdb::Status *_swig_go_result;
  
  
  result = (ustore_kvdb::Status *)new ustore_kvdb::Status();
  *(ustore_kvdb::Status **)&_swig_go_result = (ustore_kvdb::Status *)result; 
  return _swig_go_result;
}


void _wrap_delete_Status_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0) {
  ustore_kvdb::Status *arg1 = (ustore_kvdb::Status *) 0 ;
  
  arg1 = *(ustore_kvdb::Status **)&_swig_go_0; 
  
  delete arg1;
  
}


void _wrap_WriteBatch_Put_ustore_b40e736282a5577d(ustore_kvdb::WriteBatch *_swig_go_0, _gostring_ _swig_go_1, _gostring_ _swig_go_2) {
  ustore_kvdb::WriteBatch *arg1 = (ustore_kvdb::WriteBatch *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  
  arg1 = *(ustore_kvdb::WriteBatch **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  std::string arg3_str(_swig_go_2.p, _swig_go_2.n);
  arg3 = &arg3_str;
  
  
  (arg1)->Put((std::string const &)*arg2,(std::string const &)*arg3);
  
}


void _wrap_WriteBatch_Delete_ustore_b40e736282a5577d(ustore_kvdb::WriteBatch *_swig_go_0, _gostring_ _swig_go_1) {
  ustore_kvdb::WriteBatch *arg1 = (ustore_kvdb::WriteBatch *) 0 ;
  std::string *arg2 = 0 ;
  
  arg1 = *(ustore_kvdb::WriteBatch **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  (arg1)->Delete((std::string const &)*arg2);
  
}


void _wrap_WriteBatch_Clear_ustore_b40e736282a5577d(ustore_kvdb::WriteBatch *_swig_go_0) {
  ustore_kvdb::WriteBatch *arg1 = (ustore_kvdb::WriteBatch *) 0 ;
  
  arg1 = *(ustore_kvdb::WriteBatch **)&_swig_go_0; 
  
  (arg1)->Clear();
  
}


ustore_kvdb::WriteBatch *_wrap_new_WriteBatch_ustore_b40e736282a5577d() {
  ustore_kvdb::WriteBatch *result = 0 ;
  ustore_kvdb::WriteBatch *_swig_go_result;
  
  
  result = (ustore_kvdb::WriteBatch *)new ustore_kvdb::WriteBatch();
  *(ustore_kvdb::WriteBatch **)&_swig_go_result = (ustore_kvdb::WriteBatch *)result; 
  return _swig_go_result;
}


void _wrap_delete_WriteBatch_ustore_b40e736282a5577d(ustore_kvdb::WriteBatch *_swig_go_0) {
  ustore_kvdb::WriteBatch *arg1 = (ustore_kvdb::WriteBatch *) 0 ;
  
  arg1 = *(ustore_kvdb::WriteBatch **)&_swig_go_0; 
  
  delete arg1;
  
}


std::pair< ustore_kvdb::Status,std::string > *_wrap_new_PairStatusString__SWIG_0_ustore_b40e736282a5577d() {
  std::pair< ustore_kvdb::Status,std::string > *result = 0 ;
  std::pair< ustore_kvdb::Status,std::string > *_swig_go_result;
  
  
  result = (std::pair< ustore_kvdb::Status,std::string > *)new std::pair< ustore_kvdb::Status,std::string >();
  *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_result = (std::pair< ustore_kvdb::Status,std::string > *)result; 
  return _swig_go_result;
}


std::pair< ustore_kvdb::Status,std::string > *_wrap_new_PairStatusString__SWIG_1_ustore_b40e736282a5577d(ustore_kvdb::Status *_swig_go_0, _gostring_ _swig_go_1) {
  ustore_kvdb::Status arg1 ;
  std::string arg2 ;
  ustore_kvdb::Status *argp1 ;
  std::pair< ustore_kvdb::Status,std::string > *result = 0 ;
  std::pair< ustore_kvdb::Status,std::string > *_swig_go_result;
  
  
  argp1 = (ustore_kvdb::Status *)_swig_go_0;
  if (argp1 == NULL) {
    _swig_gopanic("Attempt to dereference null ustore_kvdb::Status");
  }
  arg1 = (ustore_kvdb::Status)*argp1;
  
  (&arg2)->assign(_swig_go_1.p, _swig_go_1.n); 
  
  result = (std::pair< ustore_kvdb::Status,std::string > *)new std::pair< ustore_kvdb::Status,std::string >(arg1,arg2);
  *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_result = (std::pair< ustore_kvdb::Status,std::string > *)result; 
  return _swig_go_result;
}


std::pair< ustore_kvdb::Status,std::string > *_wrap_new_PairStatusString__SWIG_2_ustore_b40e736282a5577d(std::pair< ustore_kvdb::Status,std::string > *_swig_go_0) {
  std::pair< ustore_kvdb::Status,std::string > *arg1 = 0 ;
  std::pair< ustore_kvdb::Status,std::string > *result = 0 ;
  std::pair< ustore_kvdb::Status,std::string > *_swig_go_result;
  
  arg1 = *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_0; 
  
  result = (std::pair< ustore_kvdb::Status,std::string > *)new std::pair< ustore_kvdb::Status,std::string >((std::pair< ustore_kvdb::Status,std::string > const &)*arg1);
  *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_result = (std::pair< ustore_kvdb::Status,std::string > *)result; 
  return _swig_go_result;
}


void _wrap_PairStatusString_first_set_ustore_b40e736282a5577d(std::pair< ustore_kvdb::Status,std::string > *_swig_go_0, ustore_kvdb::Status *_swig_go_1) {
  std::pair< ustore_kvdb::Status,std::string > *arg1 = (std::pair< ustore_kvdb::Status,std::string > *) 0 ;
  ustore_kvdb::Status *arg2 = (ustore_kvdb::Status *) 0 ;
  
  arg1 = *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_0; 
  arg2 = *(ustore_kvdb::Status **)&_swig_go_1; 
  
  if (arg1) (arg1)->first = *arg2;
  
}


ustore_kvdb::Status *_wrap_PairStatusString_first_get_ustore_b40e736282a5577d(std::pair< ustore_kvdb::Status,std::string > *_swig_go_0) {
  std::pair< ustore_kvdb::Status,std::string > *arg1 = (std::pair< ustore_kvdb::Status,std::string > *) 0 ;
  ustore_kvdb::Status *result = 0 ;
  ustore_kvdb::Status *_swig_go_result;
  
  arg1 = *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_0; 
  
  result = (ustore_kvdb::Status *)& ((arg1)->first);
  *(ustore_kvdb::Status **)&_swig_go_result = (ustore_kvdb::Status *)result; 
  return _swig_go_result;
}


void _wrap_PairStatusString_second_set_ustore_b40e736282a5577d(std::pair< ustore_kvdb::Status,std::string > *_swig_go_0, _gostring_ _swig_go_1) {
  std::pair< ustore_kvdb::Status,std::string > *arg1 = (std::pair< ustore_kvdb::Status,std::string > *) 0 ;
  std::string *arg2 = 0 ;
  
  arg1 = *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  if (arg1) (arg1)->second = *arg2;
  
}


_gostring_ _wrap_PairStatusString_second_get_ustore_b40e736282a5577d(std::pair< ustore_kvdb::Status,std::string > *_swig_go_0) {
  std::pair< ustore_kvdb::Status,std::string > *arg1 = (std::pair< ustore_kvdb::Status,std::string > *) 0 ;
  std::string *result = 0 ;
  _gostring_ _swig_go_result;
  
  arg1 = *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_0; 
  
  result = (std::string *) & ((arg1)->second);
  _swig_go_result = Swig_AllocateString((*result).data(), (*result).length()); 
  return _swig_go_result;
}


void _wrap_delete_PairStatusString_ustore_b40e736282a5577d(std::pair< ustore_kvdb::Status,std::string > *_swig_go_0) {
  std::pair< ustore_kvdb::Status,std::string > *arg1 = (std::pair< ustore_kvdb::Status,std::string > *) 0 ;
  
  arg1 = *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_0; 
  
  delete arg1;
  
}


ustore_kvdb::KVDB *_wrap_new_KVDB__SWIG_0_ustore_b40e736282a5577d(intgo _swig_go_0) {
  unsigned int arg1 ;
  ustore_kvdb::KVDB *result = 0 ;
  ustore_kvdb::KVDB *_swig_go_result;
  
  arg1 = (unsigned int)_swig_go_0; 
  
  result = (ustore_kvdb::KVDB *)new ustore_kvdb::KVDB(arg1);
  *(ustore_kvdb::KVDB **)&_swig_go_result = (ustore_kvdb::KVDB *)result; 
  return _swig_go_result;
}


ustore_kvdb::KVDB *_wrap_new_KVDB__SWIG_1_ustore_b40e736282a5577d() {
  ustore_kvdb::KVDB *result = 0 ;
  ustore_kvdb::KVDB *_swig_go_result;
  
  
  result = (ustore_kvdb::KVDB *)new ustore_kvdb::KVDB();
  *(ustore_kvdb::KVDB **)&_swig_go_result = (ustore_kvdb::KVDB *)result; 
  return _swig_go_result;
}


std::pair< ustore_kvdb::Status,std::string > *_wrap_KVDB_Get_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0, _gostring_ _swig_go_1) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  std::string *arg2 = 0 ;
  std::pair< ustore_kvdb::Status,std::string > result;
  std::pair< ustore_kvdb::Status,std::string > *_swig_go_result;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = (arg1)->Get((std::string const &)*arg2);
  *(std::pair< ustore_kvdb::Status,std::string > **)&_swig_go_result = new std::pair< ustore_kvdb::Status,std::string >(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_KVDB_Put_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0, _gostring_ _swig_go_1, _gostring_ _swig_go_2) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  std::string arg3_str(_swig_go_2.p, _swig_go_2.n);
  arg3 = &arg3_str;
  
  
  result = (arg1)->Put((std::string const &)*arg2,(std::string const &)*arg3);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_KVDB_Delete_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0, _gostring_ _swig_go_1) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  std::string *arg2 = 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = (arg1)->Delete((std::string const &)*arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


ustore_kvdb::Status *_wrap_KVDB_Write_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0, ustore_kvdb::WriteBatch *_swig_go_1) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  ustore_kvdb::WriteBatch *arg2 = (ustore_kvdb::WriteBatch *) 0 ;
  ustore_kvdb::Status result;
  ustore_kvdb::Status *_swig_go_result;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  arg2 = *(ustore_kvdb::WriteBatch **)&_swig_go_1; 
  
  result = (arg1)->Write(arg2);
  *(ustore_kvdb::Status **)&_swig_go_result = new ustore_kvdb::Status(result); 
  return _swig_go_result;
}


bool _wrap_KVDB_Exist_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0, _gostring_ _swig_go_1) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  std::string *arg2 = 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  result = (bool)(arg1)->Exist((std::string const &)*arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


ustore_kvdb::Iterator *_wrap_KVDB_NewIterator_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  ustore_kvdb::Iterator *result = 0 ;
  ustore_kvdb::Iterator *_swig_go_result;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  
  result = (ustore_kvdb::Iterator *)(arg1)->NewIterator();
  *(ustore_kvdb::Iterator **)&_swig_go_result = (ustore_kvdb::Iterator *)result; 
  return _swig_go_result;
}


void _wrap_delete_KVDB_ustore_b40e736282a5577d(ustore_kvdb::KVDB *_swig_go_0) {
  ustore_kvdb::KVDB *arg1 = (ustore_kvdb::KVDB *) 0 ;
  
  arg1 = *(ustore_kvdb::KVDB **)&_swig_go_0; 
  
  delete arg1;
  
}


void _wrap_delete_Iterator_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  delete arg1;
  
}


void _wrap_Iterator_Release_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  (arg1)->Release();
  
}


void _wrap_Iterator_SetRange_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0, _gostring_ _swig_go_1, _gostring_ _swig_go_2) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  std::string *arg2 = 0 ;
  std::string *arg3 = 0 ;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  std::string arg3_str(_swig_go_2.p, _swig_go_2.n);
  arg3 = &arg3_str;
  
  
  (arg1)->SetRange((std::string const &)*arg2,(std::string const &)*arg3);
  
}


bool _wrap_Iterator_Valid_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  result = (bool)(arg1)->Valid();
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_Iterator_SeekToFirst_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  (arg1)->SeekToFirst();
  
}


void _wrap_Iterator_SeekToLast_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  (arg1)->SeekToLast();
  
}


void _wrap_Iterator_Seek_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0, _gostring_ _swig_go_1) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  std::string *arg2 = 0 ;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  std::string arg2_str(_swig_go_1.p, _swig_go_1.n);
  arg2 = &arg2_str;
  
  
  (arg1)->Seek((std::string const &)*arg2);
  
}


bool _wrap_Iterator_Next_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  result = (bool)(arg1)->Next();
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_Iterator_Prev_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  result = (bool)(arg1)->Prev();
  _swig_go_result = result; 
  return _swig_go_result;
}


_gostring_ _wrap_Iterator_key_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  std::string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  result = ((ustore_kvdb::Iterator const *)arg1)->key();
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_Iterator_value_ustore_b40e736282a5577d(ustore_kvdb::Iterator *_swig_go_0) {
  ustore_kvdb::Iterator *arg1 = (ustore_kvdb::Iterator *) 0 ;
  std::string result;
  _gostring_ _swig_go_result;
  
  arg1 = *(ustore_kvdb::Iterator **)&_swig_go_0; 
  
  result = ((ustore_kvdb::Iterator const *)arg1)->value();
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


ustore_kvdb::Iterator *_wrap_NewEmptyIterator_ustore_b40e736282a5577d() {
  ustore_kvdb::Iterator *result = 0 ;
  ustore_kvdb::Iterator *_swig_go_result;
  
  
  result = (ustore_kvdb::Iterator *)ustore_kvdb::NewEmptyIterator();
  *(ustore_kvdb::Iterator **)&_swig_go_result = (ustore_kvdb::Iterator *)result; 
  return _swig_go_result;
}


#ifdef __cplusplus
}
#endif

