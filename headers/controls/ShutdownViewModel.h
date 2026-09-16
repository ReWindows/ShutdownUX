#pragma once
#include "../windissect_forwards.h"

// Reconstructed from ShutdownUX.dll by Windissect. 45 member(s).
class ShutdownViewModel {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@ShutdownViewModel@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@ShutdownViewModel@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@ShutdownViewModel@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@ShutdownViewModel@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@ShutdownViewModel@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@ShutdownViewModel@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LaunchSettingsSignInOptions@ShutdownViewModel@@UEAAJXZ
    virtual long LaunchSettingsSignInOptions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdownChoiceSelected@ShutdownViewModel@@UEAAJK@Z
    virtual long OnShutdownChoiceSelected(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdownConfirmed@ShutdownViewModel@@UEAAJK@Z
    virtual long OnShutdownConfirmed(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShutdownReasonSelected@ShutdownViewModel@@UEAAJK@Z
    virtual long OnShutdownReasonSelected(unsigned long);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ShutdownViewModel@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@ShutdownViewModel@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@ShutdownViewModel@@QEAAJW4ShutdownCallingContext@Shutdown@UI@Internal@Windows@@@Z
    long RuntimeClassInitialize(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRestartApps@ShutdownViewModel@@UEAAJE@Z
    virtual long SetRestartApps(unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ShutdownViewModel@@QEAA@XZ
    ShutdownViewModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_ActiveViewChanged@ShutdownViewModel@@UEAAJPEAU?$ITypedEventHandler@PEAVShutdownUXViewModel@Shutdown@UI@Internal@Windows@@W4ShutdownView@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_ActiveViewChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_OnPowerTransitionDetected@ShutdownViewModel@@UEAAJPEAU?$ITypedEventHandler@PEAVShutdownUXViewModel@Shutdown@UI@Internal@Windows@@W4ShutdownChoice@2345@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_OnPowerTransitionDetected(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActiveView@ShutdownViewModel@@UEAAJPEAW4ShutdownView@Shutdown@UI@Internal@Windows@@@Z
    virtual long get_ActiveView(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Choices@ShutdownViewModel@@UEAAJPEAPEAUIShutdownChoicesViewModel@Shutdown@UI@Internal@Windows@@@Z
    virtual long get_Choices(::Windows::Internal::UI::Shutdown::IShutdownChoicesViewModel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Confirmation@ShutdownViewModel@@UEAAJPEAPEAUIShutdownConfirmationViewModel@Shutdown@UI@Internal@Windows@@@Z
    virtual long get_Confirmation(::Windows::Internal::UI::Shutdown::IShutdownConfirmationViewModel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Reasons@ShutdownViewModel@@UEAAJPEAPEAUIShutdownReasonsViewModel@Shutdown@UI@Internal@Windows@@@Z
    virtual long get_Reasons(::Windows::Internal::UI::Shutdown::IShutdownReasonsViewModel * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_ActiveViewChanged@ShutdownViewModel@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_ActiveViewChanged(EventRegistrationToken);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_OnPowerTransitionDetected@ShutdownViewModel@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_OnPowerTransitionDetected(EventRegistrationToken);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InitiatePowerTransition@ShutdownViewModel@@AEAAXXZ
    void _InitiatePowerTransition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_PromptForConfirmation@ShutdownViewModel@@AEAA_NK@Z
    bool _PromptForConfirmation(unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_SwitchView@ShutdownViewModel@@AEAAXW4ShutdownView@Shutdown@UI@Internal@Windows@@@Z
    void _SwitchView(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_WriteBootUXLanguage@ShutdownViewModel@@AEAAXXZ
    void _WriteBootUXLanguage();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ShutdownViewModel@@EEAA@XZ
    virtual ~ShutdownViewModel();
};
