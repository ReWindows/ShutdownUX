#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 3 member(s).
namespace ShutdownTelemetry {
class EnumerateShutdownChoices_Activity {
public:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1EnumerateShutdownChoices_Activity@ShutdownTelemetry@@QEAA@XZ
    ~EnumerateShutdownChoices_Activity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@EnumerateShutdownChoices_Activity@ShutdownTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@EnumerateShutdownChoices_Activity@ShutdownTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace ShutdownTelemetry
