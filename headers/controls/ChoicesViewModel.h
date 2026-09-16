#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 20 member(s).
class ChoicesViewModel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ChoicesViewModel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ChoicesViewModel@@QEAA@XZ
    ChoicesViewModel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ChoicesViewModel@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ChoicesViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ChoicesViewModel@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ChoicesViewModel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ChoicesViewModel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ChoicesViewModel@@QEAAJPEAUIShutdownActionHandler@@@Z
    long RuntimeClassInitialize(IShutdownActionHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Choices@ChoicesViewModel@@UEAAJPEAPEAU?$IVectorView@PEAVShutdownUXOption@Shutdown@UI@Internal@Windows@@@Collections@Foundation@Windows@@@Z
    virtual long get_Choices(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsWarningVisible@ChoicesViewModel@@UEAAJPEAE@Z
    virtual long get_IsWarningVisible(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_WarningText@ChoicesViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_WarningText(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ChoicesViewModel@@UEAA@XZ
    virtual ~ChoicesViewModel();
};
