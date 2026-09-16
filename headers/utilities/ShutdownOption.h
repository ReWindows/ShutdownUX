#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 21 member(s).
class ShutdownOption {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShutdownOption@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShutdownOption@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShutdownOption@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShutdownOption@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@ShutdownOption@@UEAAJW4ShutdownOptionModifiers@Shutdown@UI@Internal@Windows@@@Z
    virtual long Invoke(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShutdownOption@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShutdownOption@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShutdownOption@@QEAAJPEAUHSTRING__@@0KPEAUIShutdownActionHandler@@@Z
    long RuntimeClassInitialize(HSTRING__*, HSTRING__*, unsigned long, IShutdownActionHandler *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WinRTShutdownChoiceFromClassicEnum@ShutdownOption@@SA?AW4ShutdownChoice@Shutdown@UI@Internal@Windows@@K@Z
    static int WinRTShutdownChoiceFromClassicEnum(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Glyph@ShutdownOption@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Glyph(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Kind@ShutdownOption@@UEAAJPEAW4ShutdownChoice@Shutdown@UI@Internal@Windows@@@Z
    virtual long get_Kind(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Label@ShutdownOption@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Label(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Tooltip@ShutdownOption@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Tooltip(HSTRING__* *);
};
