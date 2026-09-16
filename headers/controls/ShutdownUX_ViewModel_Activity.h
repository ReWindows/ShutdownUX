#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 7 member(s).
namespace ShutdownTelemetry {
class ShutdownUX_ViewModel_Activity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@ShutdownUX_ViewModel_Activity@ShutdownTelemetry@@QEAAXW4ShutdownCallingContext@Shutdown@UI@Internal@Windows@@@Z
    void StartActivity(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@ShutdownUX_ViewModel_Activity@ShutdownTelemetry@@QEAAXW4ShutdownChoice@Shutdown@UI@Internal@Windows@@K@Z
    void Stop(int, unsigned long);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownUX_ViewModel_Activity@ShutdownTelemetry@@QEAA@XZ
    ~ShutdownUX_ViewModel_Activity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@ShutdownUX_ViewModel_Activity@ShutdownTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@ShutdownUX_ViewModel_Activity@ShutdownTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ShutdownTelemetry
