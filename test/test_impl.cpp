// Copyright Antony Polukhin, 2016-2017.
//
// Distributed under the Boost Software License, Version 1.0. (See
// accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)


#include <boost/stacktrace.hpp>
#include <stdexcept>

using namespace boost::stacktrace;

#ifdef BOOST_STACKTRACE_DYN_LINK
#   define BOOST_ST_API BOOST_SYMBOL_EXPORT
#else
#   define BOOST_ST_API
#endif

typedef std::pair<stacktrace, stacktrace> (*foo1_t)(int i);
BOOST_ST_API BOOST_NOINLINE std::pair<stacktrace, stacktrace> foo2(int i, foo1_t foo1) {
    if (i) {
        return foo1(--i);
    } else {
        return foo1(i);
    }
}


namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
namespace very_very_very_very_very_very_long_namespace {
    BOOST_ST_API BOOST_NOINLINE stacktrace get_backtrace_from_nested_namespaces() {
        return stacktrace();
    }
}}}}}}}}}}

BOOST_ST_API BOOST_NOINLINE stacktrace return_from_nested_namespaces() {
    using very_very_very_very_very_very_long_namespace::very_very_very_very_very_very_long_namespace::very_very_very_very_very_very_long_namespace
        ::very_very_very_very_very_very_long_namespace::very_very_very_very_very_very_long_namespace::very_very_very_very_very_very_long_namespace
        ::very_very_very_very_very_very_long_namespace::very_very_very_very_very_very_long_namespace::very_very_very_very_very_very_long_namespace
        ::very_very_very_very_very_very_long_namespace::get_backtrace_from_nested_namespaces;

    return get_backtrace_from_nested_namespaces();
}

BOOST_ST_API BOOST_NOINLINE boost::stacktrace::stacktrace bar1() {
    boost::stacktrace::stacktrace result(0, 4);
    return result;
}

BOOST_ST_API BOOST_NOINLINE boost::stacktrace::stacktrace bar2() {
    boost::stacktrace::stacktrace result(0, 4);
    return result;
}

