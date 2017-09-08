/*
 * Copyright (c) 2016 Thomas Roell.  All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal with the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *  1. Redistributions of source code must retain the above copyright notice,
 *     this list of conditions and the following disclaimers.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimers in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of Thomas Roell, nor the names of its contributors
 *     may be used to endorse or promote products derived from this Software
 *     without specific prior written permission.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
 * CONTRIBUTORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * WITH THE SOFTWARE.
 */

#if !defined(_ARMV7M_ATOMIC_H)
#define _ARMV7M_ATOMIC_H

#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
 extern "C" {
#endif

extern uint32_t armv7m_atomic_load(volatile uint32_t *p_data);
extern void armv7m_atomic_store(volatile uint32_t *p_data, uint32_t data);
extern uint32_t armv7m_atomic_exchange(volatile uint32_t *p_data, uint32_t data);
extern bool armv7m_atomic_compare_exchange(volatile uint32_t *p_data, uint32_t *p_data_expected, uint32_t data);
extern uint32_t armv7m_atomic_add(volatile uint32_t *p_data, uint32_t data);
extern uint32_t armv7m_atomic_sub(volatile uint32_t *p_data, uint32_t data);
extern uint32_t armv7m_atomic_and(volatile uint32_t *p_data, uint32_t data);
extern uint32_t armv7m_atomic_or(volatile uint32_t *p_data, uint32_t data);
extern uint32_t armv7m_atomic_xor(volatile uint32_t *p_data, uint32_t data);
extern uint32_t armv7m_atomic_modify(volatile uint32_t *p_data, uint32_t mask, uint32_t data);

#ifdef __cplusplus
}
#endif

#endif /* _ARMV7M_ATOMIC_H */
