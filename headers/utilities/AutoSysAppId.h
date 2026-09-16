#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 1 member(s).
namespace ARI::ProcessToken {
class AutoSysAppId {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAppUserModelId@AutoSysAppId@ProcessToken@ARI@@QEBAJIPEAIPEAG@Z
    long GetAppUserModelId(unsigned int, unsigned int *, unsigned short *) const;
};
} // namespace ARI::ProcessToken
