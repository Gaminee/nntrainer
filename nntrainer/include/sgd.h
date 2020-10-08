// SPDX-License-Identifier: Apache-2.0
/**
 * Copyright (C) 2020 Parichay Kapoor <pk.kapoor@samsung.com>
 *
 * @file	sgd.h
 * @date	6 October 2020
 * @see		https://github.com/nnstreamer/nntrainer
 * @author	Jijoong Moon <jijoong.moon@samsung.com>
 * @author	Parichay Kapoor <pk.kapoor@samsung.com>
 * @bug		No known bugs except for NYI items
 * @brief	This is the SGD optimizer.
 */
#ifndef __SGD_H__
#define __SGD_H__
#ifdef __cplusplus

#include <optimizer.h>

namespace nntrainer {

/**
 * @class   SGD optimizer class
 * @brief   Stochastic Gradient Descent optimizer class
 */
class SGD : public Optimizer {
public:
  /**
   * @brief     Constructor of Optimizer Class
   */
  template <typename... Args>
  SGD(float lr = 0.0001f, Args... args) :
    Optimizer(OptType::sgd, lr, args...) {}

  /**
   * @copydoc apply_gradient(Weight &weight, int tensor_idx, double updated_lr,
   * int iteration)
   */
  void apply_gradient(Weight &weight, int tensor_idx, double updated_lr,
                      int iteration);

  /**
   * @brief     get the base name for the optimizer
   * @retval    base name of the optimizer
   */
  std::string getBaseName() { return "SGD"; };
};
} /* namespace nntrainer */

#endif /* __cplusplus */
#endif /* __SGD_H__ */
