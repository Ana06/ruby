#ifndef RUBY3_ARITHMETIC_MODE_T_H                    /*-*-C++-*-vi:se ft=cpp:*/
#define RUBY3_ARITHMETIC_MODE_T_H
/**
 * @file
 * @author     Ruby developers <ruby-core@ruby-lang.org>
 * @copyright  This  file  is   a  part  of  the   programming  language  Ruby.
 *             Permission  is hereby  granted,  to  either redistribute  and/or
 *             modify this file, provided that  the conditions mentioned in the
 *             file COPYING are met.  Consult the file for details.
 * @warning    Symbols   prefixed   with   either  `RUBY3`   or   `ruby3`   are
 *             implementation details.   Don't take  them as canon.  They could
 *             rapidly appear then vanish.  The name (path) of this header file
 *             is also an  implementation detail.  Do not expect  it to persist
 *             at the place it is now.  Developers are free to move it anywhere
 *             anytime at will.
 * @note       To  ruby-core:  remember  that   this  header  can  be  possibly
 *             recursively included  from extension  libraries written  in C++.
 *             Do not  expect for  instance `__VA_ARGS__` is  always available.
 *             We assume C99  for ruby itself but we don't  assume languages of
 *             extension libraries. They could be written in C++98.
 * @brief      Arithmetic conversion between C's `mode_t` and Ruby's.
 */
#include "ruby/3/config.h"
#include "ruby/3/arithmetic/int.h"

#ifndef NUM2MODET
# define NUM2MODET RB_NUM2INT
#endif

#ifndef MODET2NUM
# define MODET2NUM RB_INT2NUM
#endif

#endif /* RUBY3_ARITHMETIC_MODE_T_H */
