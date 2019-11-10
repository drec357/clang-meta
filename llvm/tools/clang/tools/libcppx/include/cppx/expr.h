//
// Created by David Rector on 2019-04-11.
//

#ifndef LLVM_EXPR_H
#define LLVM_EXPR_H

//TODO: Expr and EmptyExpr; both should have string

namespace cppx {
  namespace meta {
    inline namespace v2 {

      //DWR TEMP:

      template<reflection_t X>
      struct Expr {
        static constexpr const char *str() {
          return __reflect_as_string(X);
        }
      };

      template<reflection_t X>
      struct EmptyExpr {
        static_assert(X==0,
                "Expected X to always be zero here,"
                " not a big deal if its valid though.")
        static constexpr const char *str() {
          return "";
        }
      };

    } //v2
  } //meta
} //cppx

#endif //LLVM_EXPR_H