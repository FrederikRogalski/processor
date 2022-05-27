// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VCONTROL_H_
#define VERILATED_VCONTROL_H_  // guard

#include "verilated.h"

class Vcontrol__Syms;
class Vcontrol___024root;

// This class is the main interface to the Verilated model
class Vcontrol VL_NOT_FINAL {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vcontrol__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&op_code,7,0);
    VL_OUT8(&stPC,0,0);
    VL_OUT8(&WE,0,0);
    VL_OUT8(&imm,0,0);
    VL_OUT8(&iem,1,0);
    VL_OUT8(&absJmp,0,0);
    VL_OUT8(&muxB,2,0);
    VL_OUT8(&src2D,0,0);
    VL_OUT8(&muxA,0,0);
    VL_OUT8(&alu2D,0,0);
    VL_OUT8(&aluOp,4,0);
    VL_OUT8(&storeFlags,0,0);
    VL_OUT8(&branch,2,0);
    VL_OUT8(&ramSt,0,0);
    VL_OUT8(&ramLd,0,0);
    VL_OUT8(&ioW,0,0);
    VL_OUT8(&ioR,0,0);
    VL_OUT8(&Retl,0,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vcontrol___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vcontrol(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vcontrol(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vcontrol();
  private:
    VL_UNCOPYABLE(Vcontrol);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Return current simulation context for this model.
    /// Used to get to e.g. simulation time via contextp()->time()
    VerilatedContext* contextp() const;
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
