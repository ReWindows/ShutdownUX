#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 2 member(s).
class UsoCommitHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAndModifyShutdownFlags@UsoCommitHelper@@SAJKAEAK@Z
    static long SetAndModifyShutdownFlags(unsigned long, unsigned long &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveCommitStatusKey@UsoCommitHelper@@CAJXZ
    static long RemoveCommitStatusKey();
};
