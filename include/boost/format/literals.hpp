// ------------------------------------------------------------------------------
//  literals.hpp :  user-defined literals for format strings
// ------------------------------------------------------------------------------

//  Copyright Igor Korsunov 2017.
//
//  Distributed under the Boost Software License, Version 1.0. (See
//  accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/format for library home page

// ------------------------------------------------------------------------------

#ifndef BOOST_FORMAT_LITERALS_HPP
#define BOOST_FORMAT_LITERALS_HPP

#include <boost/format/format_fwd.hpp>

#if __cplusplus >= 201103L

namespace boost {

format operator ""_fmt(const char *format_string, const std::size_t unused_format_string_length) {
    return format(format_string);
}

} // namespace boost

#endif // __cplusplus >= 201103L

#endif // BOOST_FORMAT_LITERALS_HPP
