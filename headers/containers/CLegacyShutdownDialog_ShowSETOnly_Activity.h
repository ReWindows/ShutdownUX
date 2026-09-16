#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 2 member(s).
namespace ShutdownTelemetry {
class CLegacyShutdownDialog_ShowSETOnly_Activity {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@CLegacyShutdownDialog_ShowSETOnly_Activity@ShutdownTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@CLegacyShutdownDialog_ShowSETOnly_Activity@ShutdownTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ShutdownTelemetry
