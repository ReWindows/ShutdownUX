#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 4 member(s).
class ShutdownViewModelFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@ShutdownViewModelFactory@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateShutdownUXViewModel@ShutdownViewModelFactory@@UEAAJW4ShutdownCallingContext@Shutdown@UI@Internal@Windows@@PEAPEAUIShutdownUXViewModel@3456@@Z
    virtual long CreateShutdownUXViewModel(int, ::Windows::Internal::UI::Shutdown::IShutdownUXViewModel * *);
};
