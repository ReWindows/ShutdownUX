#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 15 member(s).
class CShutdownChoices {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CShutdownChoices@@QEAA@XZ
    CShutdownChoices();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChoiceDesc@CShutdownChoices@@UEAAJKPEAGI@Z
    virtual long GetChoiceDesc(unsigned long, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChoiceEnumerator@CShutdownChoices@@UEAAJPEAPEAUIEnumShutdownChoices@@@Z
    virtual long GetChoiceEnumerator(IEnumShutdownChoices * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChoiceMask@CShutdownChoices@@UEAAXPEAK@Z
    virtual void GetChoiceMask(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChoiceName@CShutdownChoices@@UEAAJKHPEAGI@Z
    virtual long GetChoiceName(unsigned long, int, unsigned short *, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultChoice@CShutdownChoices@@UEAAJPEAK@Z
    virtual long GetDefaultChoice(unsigned long *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultUIChoiceMask@CShutdownChoices@@UEAAXPEAK@Z
    virtual void GetDefaultUIChoiceMask(unsigned long *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@CShutdownChoices@@UEAAJXZ
    virtual long Refresh();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetChoiceMask@CShutdownChoices@@UEAAJK@Z
    virtual long SetChoiceMask(unsigned long);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShowBadChoices@CShutdownChoices@@UEAAJH@Z
    virtual long SetShowBadChoices(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserHasShutdownRights@CShutdownChoices@@UEAAHXZ
    virtual int UserHasShutdownRights();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnumerateSleepChoices@CShutdownChoices@@AEAAJKPEAVCEnumShutdownChoice@@@Z
    long _EnumerateSleepChoices(unsigned long, CEnumShutdownChoice *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_IsBitlockerEnabledForOSPartition@CShutdownChoices@@AEAA_NXZ
    bool _IsBitlockerEnabledForOSPartition();
};
