#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 20 member(s).
class ConfirmationViewModel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ConfirmationViewModel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ConfirmationViewModel@@QEAA@XZ
    ConfirmationViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ConfirmationViewModel@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ConfirmationViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ConfirmationViewModel@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeConfirm@ConfirmationViewModel@@UEAAJXZ
    virtual long InvokeConfirm();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ConfirmationViewModel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ConfirmationViewModel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ConfirmationViewModel@@QEAAJPEBG0KPEAUIShutdownActionHandler@@@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned long, IShutdownActionHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ConfirmLabel@ConfirmationViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ConfirmLabel(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Text@ConfirmationViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Text(HSTRING__* *);
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ConfirmationViewModel@@EEAA@XZ
    virtual ~ConfirmationViewModel();
};
