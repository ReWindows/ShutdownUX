#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 9 member(s).
namespace tson {
class output_archive {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?finishNode@output_archive@tson@@QEAAXXZ
    void finishNode();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0output_archive@tson@@QEAA@AEAVwrite_buffer@1@E@Z
    output_archive(WindissectOpaque &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?saveValue@output_archive@tson@@QEAAXUansistring_tag@2@@Z
    void saveValue(WindissectOpaque);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_name@output_archive@tson@@AEAA_N_N@Z
    bool write_name(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?write_string_bytes@output_archive@tson@@AEAAX_KPEAX0@Z
    void write_string_bytes(uint64_t, void *, uint64_t);
};
} // namespace tson
