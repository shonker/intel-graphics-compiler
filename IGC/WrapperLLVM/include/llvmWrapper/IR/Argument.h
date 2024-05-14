/*========================== begin_copyright_notice ============================

Copyright (C) 2024 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#ifndef IGCLLVM_IR_ARGUMENT_H
#define IGCLLVM_IR_ARGUMENT_H

#include "llvm/IR/Type.h"
#include "llvm/IR/Argument.h"

#include "Probe/Assertion.h"

namespace IGCLLVM {

inline bool hasByRefAttr(const llvm::Argument *arg) {
#if LLVM_VERSION_MAJOR > 11
  return arg->hasByRefAttr();
#else
  return false;
#endif
}

inline llvm::Type* getParamByRefType(const llvm::Argument *arg) {
#if LLVM_VERSION_MAJOR > 11
  return arg->getParamByRefType();
#else
  return nullptr;
#endif
}
inline void setParamByRefType([[maybe_unused]] llvm::Argument *arg, [[maybe_unused]] llvm::Type *param) {
#if LLVM_VERSION_MAJOR > 11
  arg->addAttr(llvm::Attribute::get(arg->getParent()->getContext(), llvm::Attribute::ByRef, param));
#endif
}

} // namespace IGCLLVM

#endif // IGCLLVM_IR_ARGUMENT_H