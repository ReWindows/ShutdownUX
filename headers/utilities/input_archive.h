#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 9 member(s).
namespace tson {
class input_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@input_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?loadValue@input_archive@tson@@QEAAXAEAUansistring_tag@2@@Z
    void loadValue(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?startNode@input_archive@tson@@QEAAXXZ
    void startNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?search@input_archive@tson@@AEAA_NXZ
    bool search();
};
} // namespace tson
