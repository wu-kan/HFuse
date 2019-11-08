//
// Created by Leo Li on 2019-10-24.
//

#ifndef SMART_FUSER_KERNELFUSETOOL_H
#define SMART_FUSER_KERNELFUSETOOL_H

#include <clang/ASTMatchers/ASTMatchFinder.h>
#include <clang/Tooling/Execution.h>
#include <clang/Rewrite/Core/Rewriter.h>

#include "KernelFusion.h"
#include "BarrierAnalyzer.h"

using namespace clang;

namespace kernel_fusion {

class KernelFuseTool: public BarrierAnalyzer {
public:
  explicit KernelFuseTool(struct Context &Context) : BarrierAnalyzer(Context){}
  void onEndOfTranslationUnit() override;
};
}

#endif // SMART_FUSER_KERNELFUSETOOL_H
