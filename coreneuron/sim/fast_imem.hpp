/*
# =============================================================================
# Copyright (C) 2016-2021 Blue Brain Project
#
# See top-level LICENSE file for details.
# =============================================================================
*/

#ifndef fast_imem_h
#define fast_imem_h

#include "coreneuron/sim/multicore.hpp"

namespace coreneuron {

/* Bool global variable to define if the fast_imem
 * calculations should be enabled.
 */
extern bool nrn_use_fast_imem;

/* Free memory allocated for the fast current membrane calculation.
 * Found in src/nrnoc/multicore.c in NEURON.
 */
void fast_imem_free();

/* fast_imem_alloc() wrapper.
 * Found in src/nrnoc/multicore.c in NEURON.
 */
void nrn_fast_imem_alloc();

/* Calculate the new values of rhs array at every timestep.
 * Found in src/nrnoc/fadvance.c in NEURON.
 */
void nrn_calc_fast_imem(NrnThread* _nt);

}  // namespace coreneuron
#endif //fast_imem_h
