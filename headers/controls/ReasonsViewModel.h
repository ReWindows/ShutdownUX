#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 23 member(s).
class ReasonsViewModel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ReasonsViewModel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ReasonsViewModel@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ReasonsViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ReasonsViewModel@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeContinue@ReasonsViewModel@@UEAAJXZ
    virtual long InvokeContinue();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ReasonsViewModel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ReasonsViewModel@@QEAA@XZ
    ReasonsViewModel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ReasonsViewModel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ReasonsViewModel@@QEAAJPEBGPEAUIShutdownActionHandler@@@Z
    long RuntimeClassInitialize(unsigned short const *, IShutdownActionHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContinueLabel@ReasonsViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ContinueLabel(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HeaderText@ReasonsViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_HeaderText(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reasons@ReasonsViewModel@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_Reasons(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SelectedReason@ReasonsViewModel@@UEAAJPEAI@Z
    virtual long get_SelectedReason(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_SelectedReason@ReasonsViewModel@@UEAAJI@Z
    virtual long put_SelectedReason(unsigned int);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ReasonsViewModel@@EEAA@XZ
    virtual ~ReasonsViewModel();
};
