#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 5 member(s).
class CEnumShutdownChoice {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddChoice@CEnumShutdownChoice@@QEAAJK@Z
    long AddChoice(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CEnumShutdownChoice@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_Next@CEnumShutdownChoice@@MEAAHPEAK@Z
    virtual int _Next(unsigned long *);
};
