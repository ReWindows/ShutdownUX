#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 12 member(s).
namespace Microsoft::WRL {
class Details {
public:
    class EventTargetArray;
    class ModuleBase;
    class WeakReferenceImpl;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateWeakReference@Details@WRL@Microsoft@@YAPEAVWeakReferenceImpl@123@PEAUIUnknown@@@Z
    WindissectOpaque * CreateWeakReference(IUnknown *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z
    long GetCacheEntry(WindissectOpaque *, unsigned int *, _GUID const &, WindissectOpaque const *, IUnknown * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z
    void RaiseException(long, unsigned long);
};
} // namespace Microsoft::WRL
