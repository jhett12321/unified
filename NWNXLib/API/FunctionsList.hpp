#ifndef NWNXLIB_FUNCTION_NO_VERSION_CHECK
NWNX_EXPECT_VERSION(8193, 35);
#endif

NWNXLIB_FUNCTION(_ZN21CServerExoAppInternal8SaveGameEjR10CExoStringS1_P10CNWSPlayeriS1_, ?SaveGame@CServerExoAppInternal@@QEAAHIAEAVCExoString@@0PEAVCNWSPlayer@@H0@Z)
NWNXLIB_FUNCTION(_ZN16CGameObjectArrayC1Ei, ??0CGameObjectArray@@QEAA@H@Z)
NWNXLIB_FUNCTION(_ZN10CNWSPlayerD0Ev, ??1CNWSPlayer@@UEAA@XZ)
NWNXLIB_FUNCTION(_ZN10CNWSPlayerD1Ev, ??1CNWSPlayer@@UEAA@XZ)
NWNXLIB_FUNCTION(_ZN10CNWSObjectD1Ev, ??1CNWSObject@@UEAA@XZ)
NWNXLIB_FUNCTION(_ZN8CNWSAreaD1Ev, ??1CNWSArea@@UEAA@XZ)
NWNXLIB_FUNCTION(_ZN10CNWSModule15LoadModuleStartE10CExoStringiiRKN6NWSync13AdvertisementE, ?LoadModuleStart@CNWSModule@@QEAAIVCExoString@@HHAEBUAdvertisement@NWSync@@@Z)

// Hooking functions that override a virtual functions doesn't work with the new &Class::Function way...
// .. so we need these!

NWNXLIB_FUNCTION(_ZN11CNWSTrigger12EventHandlerEjjPvjj, ?EventHandler@CNWSTrigger@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN12CNWSCreature12EventHandlerEjjPvjj, ?EventHandler@CNWSCreature@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN12CNWSWaypoint12EventHandlerEjjPvjj, ?EventHandler@CNWSWaypoint@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN13CNWSEncounter12EventHandlerEjjPvjj, ?EventHandler@CNWSEncounter@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN13CNWSPlaceable12EventHandlerEjjPvjj, ?EventHandler@CNWSPlaceable@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN14CNWSPlayerTURD12EventHandlerEjjPvjj, ?EventHandler@CNWSPlayerTURD@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN15CNWSSoundObject12EventHandlerEjjPvjj, ?EventHandler@CNWSSoundObject@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN22CNWSAreaOfEffectObject12EventHandlerEjjPvjj, ?EventHandler@CNWSAreaOfEffectObject@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN8CNWSDoor12EventHandlerEjjPvjj, ?EventHandler@CNWSDoor@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN8CNWSItem12EventHandlerEjjPvjj, ?EventHandler@CNWSItem@@UEAAXIIPEAXII@Z)
NWNXLIB_FUNCTION(_ZN9CNWSStore12EventHandlerEjjPvjj, ?EventHandler@CNWSStore@@UEAAXIIPEAXII@Z)

NWNXLIB_FUNCTION(_ZN11CNWSTrigger8AIUpdateEv, ?AIUpdate@CNWSTrigger@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN12CNWSCreature8AIUpdateEv, ?AIUpdate@CNWSCreature@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN12CNWSWaypoint8AIUpdateEv, ?AIUpdate@CNWSWaypoint@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN13CNWSEncounter8AIUpdateEv, ?AIUpdate@CNWSEncounter@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN13CNWSPlaceable8AIUpdateEv, ?AIUpdate@CNWSPlaceable@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN14CNWSPlayerTURD8AIUpdateEv, ?AIUpdate@CNWSPlayerTURD@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN15CNWSSoundObject8AIUpdateEv, ?AIUpdate@CNWSSoundObject@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN22CNWSAreaOfEffectObject8AIUpdateEv, ?AIUpdate@CNWSAreaOfEffectObject@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN8CNWSDoor8AIUpdateEv, ?AIUpdate@CNWSDoor@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN8CNWSItem8AIUpdateEv, ?AIUpdate@CNWSItem@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN9CNWSStore8AIUpdateEv, ?AIUpdate@CNWSStore@@UEAAXXZ)
NWNXLIB_FUNCTION(_ZN12CNWSCreature11ClearActionEP20CNWSObjectActionNodei, ?ClearAction@CNWSCreature@@MEAAHPEAVCNWSObjectActionNode@@H@Z);

NWNXLIB_FUNCTION(_ZN21CNWSEffectListHandler15OnEffectAppliedEP10CNWSObjectP11CGameEffecti, ?OnEffectApplied@CNWSEffectListHandler@@UEAAHPEAVCNWSObject@@PEAVCGameEffect@@H@Z)
NWNXLIB_FUNCTION(_ZN21CNWSEffectListHandler15OnEffectRemovedEP10CNWSObjectP11CGameEffect, ?OnEffectRemoved@CNWSEffectListHandler@@UEAAHPEAVCNWSObject@@PEAVCGameEffect@@@Z)

NWNXLIB_FUNCTION(_ZN16CNWSAmbientSound15PlayBattleMusicEi, ?PlayBattleMusic@CNWSAmbientSound@@UEAAXH@Z);

NWNXLIB_FUNCTION(_ZN10CNWSObject19GetCurrentHitPointsEi, ?GetCurrentHitPoints@CNWSObject@@UEAAFH@Z);
NWNXLIB_FUNCTION(_ZN12CNWSCreature15GetMaxHitPointsEi, ?GetMaxHitPoints@CNWSCreature@@UEAAFH@Z);

// All other hooked functions - needed for Windows as it has scary pointers for member functions.

NWNXLIB_FUNCTION(_ZN11CAppManager12CreateServerEv, ?CreateServer@CAppManager@@QEAAXXZ)
NWNXLIB_FUNCTION(_ZN25CNWVirtualMachineCommands20ExecuteCommandSetVarEii, ?ExecuteCommandSetVar@CNWVirtualMachineCommands@@QEAAHHH@Z)
NWNXLIB_FUNCTION(_ZN25CNWVirtualMachineCommands20ExecuteCommandGetVarEii, ?ExecuteCommandGetVar@CNWVirtualMachineCommands@@QEAAHHH@Z)
NWNXLIB_FUNCTION(_ZN25CNWVirtualMachineCommands23ExecuteCommandTagEffectEii, ?ExecuteCommandTagEffect@CNWVirtualMachineCommands@@QEAAHHH@Z)
NWNXLIB_FUNCTION(_ZN25CNWVirtualMachineCommands29ExecuteCommandTagItemPropertyEii, ?ExecuteCommandTagItemProperty@CNWVirtualMachineCommands@@QEAAHHH@Z)
NWNXLIB_FUNCTION(_ZN25CNWVirtualMachineCommands23ExecuteCommandPlaySoundEii, ?ExecuteCommandPlaySound@CNWVirtualMachineCommands@@QEAAHHH@Z)
NWNXLIB_FUNCTION(_ZN11CAppManager13DestroyServerEv, ?DestroyServer@CAppManager@@QEAAXXZ)
NWNXLIB_FUNCTION(_ZN21CServerExoAppInternal8MainLoopEv, ?MainLoop@CServerExoAppInternal@@QEAAHXZ)
NWNXLIB_FUNCTION(_ZN10CNWSModule20LoadModuleInProgressEii, ?LoadModuleInProgress@CNWSModule@@QEAAIHH@Z)
NWNXLIB_FUNCTION(_ZN10CNWSModule16LoadModuleFinishEv, ?LoadModuleFinish@CNWSModule@@QEAAIXZ)
NWNXLIB_FUNCTION(_ZN15CVirtualMachine14RunScriptChunkERK10CExoStringjii, ?RunScriptChunk@CVirtualMachine@@QEAAHAEBVCExoString@@IHH@Z)
NWNXLIB_FUNCTION(_ZN15CVirtualMachine18RunScriptSituationEPvji, ?RunScriptSituation@CVirtualMachine@@QEAAHPEAXIH@Z)
NWNXLIB_FUNCTION(_ZN10CNWSPlayer7EatTURDEP14CNWSPlayerTURD, ?EatTURD@CNWSPlayer@@QEAAXPEAVCNWSPlayerTURD@@@Z)
NWNXLIB_FUNCTION(_ZN10CNWSPlayer8DropTURDEv, ?DropTURD@CNWSPlayer@@QEAAXXZ)
NWNXLIB_FUNCTION(_ZN8CNWSUUID9SaveToGffEP7CResGFFP10CResStruct, ?SaveToGff@CNWSUUID@@QEAAXPEAVCResGFF@@PEAVCResStruct@@@Z)
NWNXLIB_FUNCTION(_ZN8CNWSUUID11LoadFromGffEP7CResGFFP10CResStruct, ?LoadFromGff@CNWSUUID@@QEAA_NPEAVCResGFF@@PEAVCResStruct@@@Z)
NWNXLIB_FUNCTION(_ZN8CNWSArea15AddObjectToAreaEji, ?AddObjectToArea@CNWSArea@@QEAAHIH@Z)
NWNXLIB_FUNCTION(_ZN11CNWSMessage32ComputeGameObjectUpdateForObjectEP10CNWSPlayerP10CNWSObjectP16CGameObjectArrayj, ?ComputeGameObjectUpdateForObject@CNWSMessage@@QEAAXPEAVCNWSPlayer@@PEAVCNWSObject@@PEAVCGameObjectArray@@I@Z)
