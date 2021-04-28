#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// AudioController
struct AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338;
// ColourManager
struct ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488;
// DestroyGameObjects
struct DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088;
// DestroyGameObjects/<Wait>d__1
struct U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646;
// DifficultyController
struct DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF;
// GameController
struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3;
// MenuController
struct MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1;
// MoveCamera
struct MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// PlayerCollider
struct PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648;
// PlayerCollider/RockCollected
struct RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A;
// PlayerCollider/TimeCollected
struct TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E;
// ScoreController
struct ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207;
// SliderMovementLeft
struct SliderMovementLeft_tAFC142FF1E98B41C7C719362D888157C6E1B40F5;
// SliderMovementRight
struct SliderMovementRight_tAF632AF1D4DB140A7F7770490887E1F5341A5625;
// SpinnerRotator
struct SpinnerRotator_t583DFFC87FEEC07C51F93F33CC4FD112E4447002;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t053DAB6E2110E276A0339D73497193F464BC1F82;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TimeController
struct TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.Toggle
struct Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

IL2CPP_EXTERN_C RuntimeClass* AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05AEC50720FBC9368ED37C04D1064B0FD1F3631B;
IL2CPP_EXTERN_C String_t* _stringLiteral07D1F5C7BB331ED89DE100316F857ACF7D9D6D56;
IL2CPP_EXTERN_C String_t* _stringLiteral1D1700E0D5D50D42EBF9AC93512AE5E1B3C917DF;
IL2CPP_EXTERN_C String_t* _stringLiteral1EBA140FDD9C6860A1730C408E3064AA417CA2A3;
IL2CPP_EXTERN_C String_t* _stringLiteral282050346C635D829CD0A4C25FC352FD525C27BB;
IL2CPP_EXTERN_C String_t* _stringLiteral2E08BBD34B71B2C51868FD8E74674B6EA930F523;
IL2CPP_EXTERN_C String_t* _stringLiteral30E5259D5EBBC3F7B4939832D91A6961CF305675;
IL2CPP_EXTERN_C String_t* _stringLiteral3D33846949C9780626704D09B4F0331B06442481;
IL2CPP_EXTERN_C String_t* _stringLiteral4135A7F452A17F7FD899AA7A2FFA9D4FC512769D;
IL2CPP_EXTERN_C String_t* _stringLiteral468D79C2E0229E3EF8A5592B4DF3E148050FB828;
IL2CPP_EXTERN_C String_t* _stringLiteral489F4877244A299131D309F0CA10733C1A41251C;
IL2CPP_EXTERN_C String_t* _stringLiteral6C82E6DD86807EE3DB07E3C82BEC1AE1CE00B08B;
IL2CPP_EXTERN_C String_t* _stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE;
IL2CPP_EXTERN_C String_t* _stringLiteral88B33E4E12F75AC8BF792AEBDE41F1A090F3A612;
IL2CPP_EXTERN_C String_t* _stringLiteral929B8E8530D940A9CD576D0115105A139C5BB453;
IL2CPP_EXTERN_C String_t* _stringLiteral9D9CEC22F36FD2BB99D5FE8C4723347BEC202CA5;
IL2CPP_EXTERN_C String_t* _stringLiteralAD9E5DAAD617BCBC21AA8BAFEE5EC88799E6097E;
IL2CPP_EXTERN_C String_t* _stringLiteralB4E3EFEBA10E84F7148DA9F7EFE85E07057D7C7A;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MenuController_U3CStartU3Eb__13_0_mB732AF9C71A0F6C345002EBF2D05FC495896149B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ScoreController_HandleRockCollectedEvent_m9875FC8F691C8115CBDB23CAEFBA83B7D287019B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TimeController_HandleTimeCollectedEvent_m0BEAB8343EBDDF2F065CBF7B68F4565BBEB7020A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitU3Ed__1_System_Collections_IEnumerator_Reset_m441EAF65EE18FA89EA2DC29A0E44FCD975F8E75B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AudioController_Awake_m63E8990C9B5B3905750F6739AF27A29D135A8610_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioController_Start_m934D728F20E34862C4962169AB16E54D5F164E7B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioController_Update_m9F55ED3C55B35FBF480F40F25216AFEF75F5B7A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEAAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_Awake_m48BC1037352BCD0E2FD55E1870D89A145DF8DC40_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_Update_m36AEEC377073B9FB9D7B62AD46D33A1D73B11E31_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager__ctor_m00600632D583B3B35C3EF9007D66ACAFD1541249_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DestroyGameObjects_OnBecameInvisible_m18300E51F334BC167F38A1ABCA7F4B121776667D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DestroyGameObjects_Wait_mB0498AF8341701D447B16FC16E37D419D40A32C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_ResetMovementSpeed_m961600FC51EAA9235BE7D1479EEF11399FB393FD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_ResetRotationSpeed_mB6C19E3B01A1AABE6C20E888D75A8F635AD86367_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController__cctor_m21CC49117CD2B62559F45FB666891F8AE7EA29E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29FAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91DAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Awake_m0F7A2663599EE488BA03E9010D12DF3D9EF623BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_OnApplicationQuit_m7A627651D4C4F9510B8450DD822E1ECFCA65DE8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_RestartWithLastPosition_mEF5251AB55764F142D6AAB9DB3F857A6DAC64325_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_Start_m229BE9A914ADF299ACFF1EFD5F15F27FF146D3C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_createGameObjects_m70C9915680BE0D74187C7F4C59A7ECBB958BE527_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_initGame_m9012221ECAEC2EC58FB501933397FF9DFB20A5F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_Awake_m2BA2C45DAEA686542A3645086F3552E6EF1AC353_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_GoToHomeMenu_m1E688E02D54BFAC47669AFFAB62A94C8C50B032A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_LaunchTimeCounter_m8EB06A9249882E92B265E1986D51065FC5304A44_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_PauseGame_m91D09AF0FF5567F8B7D2BFC62DA82886B8B270BB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_PlayGame_mA572DBB0153FC188DA1A3ED2A157927C1B069129_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_ReplayGame_m55FCD9E8F4F0275219E03F28AA33290B7C844D14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_ResetGame_m12781ABA447E3F3BEA6460A965F16B5BFDF4DC6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_ResumeGame_m195D42498CD27A7ACF8D4043B7C63ED5788F2E2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_Start_m0377779014F00A3FBE313C3BE89091CBDCBF69B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_ToggleValueChanged_m5A1581483C3296198AF50261FBB9CCD93F9BC750_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_Update_m5C9652645E5A96F9983D8F4E4936E951DEC509F8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2BAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveCamera_Awake_mE654527061FF70020E507A5EF313CC6C8F25BD2A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCollider_OnTriggerEnter2D_m0B668733B754D5F7179329815EC402A840FA6C1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCollider_PublishRockCollectedEvent_mF353BE6550596EE2470533F59E11A04BDE00F598_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCollider_PublishTimeCollectedEvent_m24831AB766EAEB6ED242F7E6FAFCB098D4C931DF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCollider_Start_m9C6BEDFA722DB719F5A14FE4C47E0C7094CFEE47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_Awake_mD48A07ED56F8B0B62DA696CEAF5FB6348C195F10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_HandleRockCollectedEvent_m9875FC8F691C8115CBDB23CAEFBA83B7D287019B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_OnDisable_mD5310926925AA68C4687859F4DAE34429405673D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_OnEnable_mBA09C282C11130985533AB6FB898C7C549F372E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SliderMovementLeft_Update_mB6F6BA194CD384F42AB46498DA412A632A700D87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SliderMovementRight_Update_m4D1D4BFB67CE128D2196D00C46123E5F19CEC88B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpinnerRotator_Start_mEA94CD93D27B038275EDF2C3E5056BEE13910A15_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpinnerRotator_Update_mF93CFCDCE799A74A4CD195DC276FD6BF948B585A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_Awake_m9ECBA6F92B3DAB5771CDA168B1FCBE580B913F90_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_OnDisable_m617E9D3E8576C0712CBCEC3B4F88D4FD111FDEAE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_OnEnable_mB54075F6509BFD3608FA1022E69CA3B1DCD970FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEFAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitU3Ed__1_MoveNext_m8AD0B03A01E2CBE5B6EFDD1CD26067F255846A14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CWaitU3Ed__1_System_Collections_IEnumerator_Reset_m441EAF65EE18FA89EA2DC29A0E44FCD975F8E75B_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// DestroyGameObjects_<Wait>d__1
struct  U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646  : public RuntimeObject
{
public:
	// System.Int32 DestroyGameObjects_<Wait>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DestroyGameObjects_<Wait>d__1::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// DestroyGameObjects DestroyGameObjects_<Wait>d__1::<>4__this
	DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646, ___U3CU3E4__this_2)); }
	inline DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct  UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RigidbodyType2D
struct  RigidbodyType2D_t968036685C41EDC99F7D8B6293D3DA20B177DA49 
{
public:
	// System.Int32 UnityEngine.RigidbodyType2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyType2D_t968036685C41EDC99F7D8B6293D3DA20B177DA49, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Toggle_ToggleEvent
struct  ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43  : public UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299
{
public:

public:
};


// UnityEngine.UI.Toggle_ToggleTransition
struct  ToggleTransition_t45980EB1352FF47B2D8D8EBC90385AB68939046D 
{
public:
	// System.Int32 UnityEngine.UI.Toggle_ToggleTransition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ToggleTransition_t45980EB1352FF47B2D8D8EBC90385AB68939046D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Sprite
struct  Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// PlayerCollider_RockCollected
struct  RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A  : public MulticastDelegate_t
{
public:

public:
};


// PlayerCollider_TimeCollected
struct  TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.Boolean>
struct  UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// AudioController
struct  AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AudioSource AudioController::source
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___source_4;
	// UnityEngine.AudioClip AudioController::backgroundMusic
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___backgroundMusic_5;
	// UnityEngine.AudioClip AudioController::playerDies
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___playerDies_6;
	// UnityEngine.AudioClip AudioController::collectRock
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___collectRock_7;
	// UnityEngine.AudioClip AudioController::tapScreen
	AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___tapScreen_8;

public:
	inline static int32_t get_offset_of_source_4() { return static_cast<int32_t>(offsetof(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338, ___source_4)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_source_4() const { return ___source_4; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_source_4() { return &___source_4; }
	inline void set_source_4(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___source_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_4), (void*)value);
	}

	inline static int32_t get_offset_of_backgroundMusic_5() { return static_cast<int32_t>(offsetof(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338, ___backgroundMusic_5)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_backgroundMusic_5() const { return ___backgroundMusic_5; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_backgroundMusic_5() { return &___backgroundMusic_5; }
	inline void set_backgroundMusic_5(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___backgroundMusic_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backgroundMusic_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerDies_6() { return static_cast<int32_t>(offsetof(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338, ___playerDies_6)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_playerDies_6() const { return ___playerDies_6; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_playerDies_6() { return &___playerDies_6; }
	inline void set_playerDies_6(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___playerDies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerDies_6), (void*)value);
	}

	inline static int32_t get_offset_of_collectRock_7() { return static_cast<int32_t>(offsetof(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338, ___collectRock_7)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_collectRock_7() const { return ___collectRock_7; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_collectRock_7() { return &___collectRock_7; }
	inline void set_collectRock_7(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___collectRock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___collectRock_7), (void*)value);
	}

	inline static int32_t get_offset_of_tapScreen_8() { return static_cast<int32_t>(offsetof(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338, ___tapScreen_8)); }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * get_tapScreen_8() const { return ___tapScreen_8; }
	inline AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 ** get_address_of_tapScreen_8() { return &___tapScreen_8; }
	inline void set_tapScreen_8(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * value)
	{
		___tapScreen_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tapScreen_8), (void*)value);
	}
};

struct AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_StaticFields
{
public:
	// AudioController AudioController::<Instance>k__BackingField
	AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * ___U3CInstanceU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_StaticFields, ___U3CInstanceU3Ek__BackingField_9)); }
	inline AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * get_U3CInstanceU3Ek__BackingField_9() const { return ___U3CInstanceU3Ek__BackingField_9; }
	inline AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 ** get_address_of_U3CInstanceU3Ek__BackingField_9() { return &___U3CInstanceU3Ek__BackingField_9; }
	inline void set_U3CInstanceU3Ek__BackingField_9(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * value)
	{
		___U3CInstanceU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_9), (void*)value);
	}
};


// ColourManager
struct  ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Sprite ColourManager::rocketBlue
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___rocketBlue_4;
	// UnityEngine.Sprite ColourManager::rocketYellow
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___rocketYellow_5;
	// UnityEngine.Sprite ColourManager::rocketGreen
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___rocketGreen_6;
	// UnityEngine.Sprite ColourManager::rocketRed
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___rocketRed_7;
	// UnityEngine.GameObject ColourManager::flameBlue
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___flameBlue_8;
	// UnityEngine.GameObject ColourManager::flameYellow
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___flameYellow_9;
	// UnityEngine.GameObject ColourManager::flameGreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___flameGreen_10;
	// UnityEngine.GameObject ColourManager::flameRed
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___flameRed_11;
	// UnityEngine.Sprite[] ColourManager::sprites
	SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* ___sprites_12;
	// System.String[] ColourManager::colourOptions
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* ___colourOptions_13;
	// UnityEngine.SpriteRenderer ColourManager::sr
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___sr_14;

public:
	inline static int32_t get_offset_of_rocketBlue_4() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___rocketBlue_4)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_rocketBlue_4() const { return ___rocketBlue_4; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_rocketBlue_4() { return &___rocketBlue_4; }
	inline void set_rocketBlue_4(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___rocketBlue_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rocketBlue_4), (void*)value);
	}

	inline static int32_t get_offset_of_rocketYellow_5() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___rocketYellow_5)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_rocketYellow_5() const { return ___rocketYellow_5; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_rocketYellow_5() { return &___rocketYellow_5; }
	inline void set_rocketYellow_5(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___rocketYellow_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rocketYellow_5), (void*)value);
	}

	inline static int32_t get_offset_of_rocketGreen_6() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___rocketGreen_6)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_rocketGreen_6() const { return ___rocketGreen_6; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_rocketGreen_6() { return &___rocketGreen_6; }
	inline void set_rocketGreen_6(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___rocketGreen_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rocketGreen_6), (void*)value);
	}

	inline static int32_t get_offset_of_rocketRed_7() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___rocketRed_7)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_rocketRed_7() const { return ___rocketRed_7; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_rocketRed_7() { return &___rocketRed_7; }
	inline void set_rocketRed_7(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___rocketRed_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rocketRed_7), (void*)value);
	}

	inline static int32_t get_offset_of_flameBlue_8() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___flameBlue_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_flameBlue_8() const { return ___flameBlue_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_flameBlue_8() { return &___flameBlue_8; }
	inline void set_flameBlue_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___flameBlue_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flameBlue_8), (void*)value);
	}

	inline static int32_t get_offset_of_flameYellow_9() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___flameYellow_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_flameYellow_9() const { return ___flameYellow_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_flameYellow_9() { return &___flameYellow_9; }
	inline void set_flameYellow_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___flameYellow_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flameYellow_9), (void*)value);
	}

	inline static int32_t get_offset_of_flameGreen_10() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___flameGreen_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_flameGreen_10() const { return ___flameGreen_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_flameGreen_10() { return &___flameGreen_10; }
	inline void set_flameGreen_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___flameGreen_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flameGreen_10), (void*)value);
	}

	inline static int32_t get_offset_of_flameRed_11() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___flameRed_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_flameRed_11() const { return ___flameRed_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_flameRed_11() { return &___flameRed_11; }
	inline void set_flameRed_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___flameRed_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flameRed_11), (void*)value);
	}

	inline static int32_t get_offset_of_sprites_12() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___sprites_12)); }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* get_sprites_12() const { return ___sprites_12; }
	inline SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7** get_address_of_sprites_12() { return &___sprites_12; }
	inline void set_sprites_12(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* value)
	{
		___sprites_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprites_12), (void*)value);
	}

	inline static int32_t get_offset_of_colourOptions_13() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___colourOptions_13)); }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* get_colourOptions_13() const { return ___colourOptions_13; }
	inline StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E** get_address_of_colourOptions_13() { return &___colourOptions_13; }
	inline void set_colourOptions_13(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* value)
	{
		___colourOptions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourOptions_13), (void*)value);
	}

	inline static int32_t get_offset_of_sr_14() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488, ___sr_14)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_sr_14() const { return ___sr_14; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_sr_14() { return &___sr_14; }
	inline void set_sr_14(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___sr_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_14), (void*)value);
	}
};

struct ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_StaticFields
{
public:
	// ColourManager ColourManager::<Instance>k__BackingField
	ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ___U3CInstanceU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_StaticFields, ___U3CInstanceU3Ek__BackingField_15)); }
	inline ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * get_U3CInstanceU3Ek__BackingField_15() const { return ___U3CInstanceU3Ek__BackingField_15; }
	inline ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 ** get_address_of_U3CInstanceU3Ek__BackingField_15() { return &___U3CInstanceU3Ek__BackingField_15; }
	inline void set_U3CInstanceU3Ek__BackingField_15(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * value)
	{
		___U3CInstanceU3Ek__BackingField_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_15), (void*)value);
	}
};


// DestroyGameObjects
struct  DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// DifficultyController
struct  DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};

struct DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields
{
public:
	// System.Single DifficultyController::initialRotationSpeed
	float ___initialRotationSpeed_4;
	// System.Single DifficultyController::initialMovementSpeed
	float ___initialMovementSpeed_5;
	// System.Single DifficultyController::rotationSpeed
	float ___rotationSpeed_6;
	// System.Single DifficultyController::movementSpeed
	float ___movementSpeed_7;

public:
	inline static int32_t get_offset_of_initialRotationSpeed_4() { return static_cast<int32_t>(offsetof(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields, ___initialRotationSpeed_4)); }
	inline float get_initialRotationSpeed_4() const { return ___initialRotationSpeed_4; }
	inline float* get_address_of_initialRotationSpeed_4() { return &___initialRotationSpeed_4; }
	inline void set_initialRotationSpeed_4(float value)
	{
		___initialRotationSpeed_4 = value;
	}

	inline static int32_t get_offset_of_initialMovementSpeed_5() { return static_cast<int32_t>(offsetof(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields, ___initialMovementSpeed_5)); }
	inline float get_initialMovementSpeed_5() const { return ___initialMovementSpeed_5; }
	inline float* get_address_of_initialMovementSpeed_5() { return &___initialMovementSpeed_5; }
	inline void set_initialMovementSpeed_5(float value)
	{
		___initialMovementSpeed_5 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_6() { return static_cast<int32_t>(offsetof(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields, ___rotationSpeed_6)); }
	inline float get_rotationSpeed_6() const { return ___rotationSpeed_6; }
	inline float* get_address_of_rotationSpeed_6() { return &___rotationSpeed_6; }
	inline void set_rotationSpeed_6(float value)
	{
		___rotationSpeed_6 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_7() { return static_cast<int32_t>(offsetof(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields, ___movementSpeed_7)); }
	inline float get_movementSpeed_7() const { return ___movementSpeed_7; }
	inline float* get_address_of_movementSpeed_7() { return &___movementSpeed_7; }
	inline void set_movementSpeed_7(float value)
	{
		___movementSpeed_7 = value;
	}
};


// GameController
struct  GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject GameController::circle
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___circle_4;
	// UnityEngine.GameObject GameController::sliderRight
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sliderRight_5;
	// UnityEngine.GameObject GameController::sliderLeft
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___sliderLeft_6;
	// UnityEngine.GameObject GameController::square
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___square_7;
	// UnityEngine.GameObject GameController::colourSwapper
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___colourSwapper_8;
	// UnityEngine.GameObject GameController::scoreRock
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___scoreRock_9;
	// UnityEngine.GameObject GameController::timeRock
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___timeRock_10;
	// UnityEngine.Transform GameController::prevPosition
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___prevPosition_11;
	// UnityEngine.GameObject GameController::parent
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___parent_12;
	// UnityEngine.GameObject GameController::player
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_13;
	// System.Int32 GameController::numberObstacle
	int32_t ___numberObstacle_14;

public:
	inline static int32_t get_offset_of_circle_4() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___circle_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_circle_4() const { return ___circle_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_circle_4() { return &___circle_4; }
	inline void set_circle_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___circle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___circle_4), (void*)value);
	}

	inline static int32_t get_offset_of_sliderRight_5() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___sliderRight_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sliderRight_5() const { return ___sliderRight_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sliderRight_5() { return &___sliderRight_5; }
	inline void set_sliderRight_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sliderRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderRight_5), (void*)value);
	}

	inline static int32_t get_offset_of_sliderLeft_6() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___sliderLeft_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_sliderLeft_6() const { return ___sliderLeft_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_sliderLeft_6() { return &___sliderLeft_6; }
	inline void set_sliderLeft_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___sliderLeft_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sliderLeft_6), (void*)value);
	}

	inline static int32_t get_offset_of_square_7() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___square_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_square_7() const { return ___square_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_square_7() { return &___square_7; }
	inline void set_square_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___square_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___square_7), (void*)value);
	}

	inline static int32_t get_offset_of_colourSwapper_8() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___colourSwapper_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_colourSwapper_8() const { return ___colourSwapper_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_colourSwapper_8() { return &___colourSwapper_8; }
	inline void set_colourSwapper_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___colourSwapper_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colourSwapper_8), (void*)value);
	}

	inline static int32_t get_offset_of_scoreRock_9() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___scoreRock_9)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_scoreRock_9() const { return ___scoreRock_9; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_scoreRock_9() { return &___scoreRock_9; }
	inline void set_scoreRock_9(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___scoreRock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreRock_9), (void*)value);
	}

	inline static int32_t get_offset_of_timeRock_10() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___timeRock_10)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_timeRock_10() const { return ___timeRock_10; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_timeRock_10() { return &___timeRock_10; }
	inline void set_timeRock_10(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___timeRock_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeRock_10), (void*)value);
	}

	inline static int32_t get_offset_of_prevPosition_11() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___prevPosition_11)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_prevPosition_11() const { return ___prevPosition_11; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_prevPosition_11() { return &___prevPosition_11; }
	inline void set_prevPosition_11(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___prevPosition_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevPosition_11), (void*)value);
	}

	inline static int32_t get_offset_of_parent_12() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___parent_12)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_parent_12() const { return ___parent_12; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_parent_12() { return &___parent_12; }
	inline void set_parent_12(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___parent_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_12), (void*)value);
	}

	inline static int32_t get_offset_of_player_13() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___player_13)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_13() const { return ___player_13; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_13() { return &___player_13; }
	inline void set_player_13(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_13), (void*)value);
	}

	inline static int32_t get_offset_of_numberObstacle_14() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3, ___numberObstacle_14)); }
	inline int32_t get_numberObstacle_14() const { return ___numberObstacle_14; }
	inline int32_t* get_address_of_numberObstacle_14() { return &___numberObstacle_14; }
	inline void set_numberObstacle_14(int32_t value)
	{
		___numberObstacle_14 = value;
	}
};

struct GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields
{
public:
	// GameController GameController::<Instance>k__BackingField
	GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___U3CInstanceU3Ek__BackingField_16;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields, ___U3CInstanceU3Ek__BackingField_16)); }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * get_U3CInstanceU3Ek__BackingField_16() const { return ___U3CInstanceU3Ek__BackingField_16; }
	inline GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 ** get_address_of_U3CInstanceU3Ek__BackingField_16() { return &___U3CInstanceU3Ek__BackingField_16; }
	inline void set_U3CInstanceU3Ek__BackingField_16(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * value)
	{
		___U3CInstanceU3Ek__BackingField_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_16), (void*)value);
	}
};


// MenuController
struct  MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MenuController::pauseMenuUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pauseMenuUI_5;
	// UnityEngine.GameObject MenuController::gameOverMenuUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameOverMenuUI_6;
	// UnityEngine.GameObject MenuController::tutorialMenuUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___tutorialMenuUI_7;
	// UnityEngine.UI.Text MenuController::currentScoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___currentScoreText_8;
	// UnityEngine.UI.Text MenuController::highScoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___highScoreText_9;
	// UnityEngine.UI.Text MenuController::timePlayerText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___timePlayerText_10;
	// UnityEngine.UI.Toggle MenuController::soundToggle
	Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * ___soundToggle_11;

public:
	inline static int32_t get_offset_of_pauseMenuUI_5() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___pauseMenuUI_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pauseMenuUI_5() const { return ___pauseMenuUI_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pauseMenuUI_5() { return &___pauseMenuUI_5; }
	inline void set_pauseMenuUI_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pauseMenuUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseMenuUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverMenuUI_6() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___gameOverMenuUI_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameOverMenuUI_6() const { return ___gameOverMenuUI_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameOverMenuUI_6() { return &___gameOverMenuUI_6; }
	inline void set_gameOverMenuUI_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameOverMenuUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverMenuUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_tutorialMenuUI_7() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___tutorialMenuUI_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_tutorialMenuUI_7() const { return ___tutorialMenuUI_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_tutorialMenuUI_7() { return &___tutorialMenuUI_7; }
	inline void set_tutorialMenuUI_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___tutorialMenuUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMenuUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_currentScoreText_8() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___currentScoreText_8)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_currentScoreText_8() const { return ___currentScoreText_8; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_currentScoreText_8() { return &___currentScoreText_8; }
	inline void set_currentScoreText_8(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___currentScoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentScoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_highScoreText_9() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___highScoreText_9)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_highScoreText_9() const { return ___highScoreText_9; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_highScoreText_9() { return &___highScoreText_9; }
	inline void set_highScoreText_9(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___highScoreText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___highScoreText_9), (void*)value);
	}

	inline static int32_t get_offset_of_timePlayerText_10() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___timePlayerText_10)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_timePlayerText_10() const { return ___timePlayerText_10; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_timePlayerText_10() { return &___timePlayerText_10; }
	inline void set_timePlayerText_10(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___timePlayerText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timePlayerText_10), (void*)value);
	}

	inline static int32_t get_offset_of_soundToggle_11() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1, ___soundToggle_11)); }
	inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * get_soundToggle_11() const { return ___soundToggle_11; }
	inline Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 ** get_address_of_soundToggle_11() { return &___soundToggle_11; }
	inline void set_soundToggle_11(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * value)
	{
		___soundToggle_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundToggle_11), (void*)value);
	}
};

struct MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields
{
public:
	// System.Boolean MenuController::isGamePaused
	bool ___isGamePaused_4;
	// MenuController MenuController::<Instance>k__BackingField
	MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * ___U3CInstanceU3Ek__BackingField_12;

public:
	inline static int32_t get_offset_of_isGamePaused_4() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields, ___isGamePaused_4)); }
	inline bool get_isGamePaused_4() const { return ___isGamePaused_4; }
	inline bool* get_address_of_isGamePaused_4() { return &___isGamePaused_4; }
	inline void set_isGamePaused_4(bool value)
	{
		___isGamePaused_4 = value;
	}

	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields, ___U3CInstanceU3Ek__BackingField_12)); }
	inline MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * get_U3CInstanceU3Ek__BackingField_12() const { return ___U3CInstanceU3Ek__BackingField_12; }
	inline MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 ** get_address_of_U3CInstanceU3Ek__BackingField_12() { return &___U3CInstanceU3Ek__BackingField_12; }
	inline void set_U3CInstanceU3Ek__BackingField_12(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * value)
	{
		___U3CInstanceU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_12), (void*)value);
	}
};


// MoveCamera
struct  MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform MoveCamera::playerObject
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerObject_4;

public:
	inline static int32_t get_offset_of_playerObject_4() { return static_cast<int32_t>(offsetof(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717, ___playerObject_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerObject_4() const { return ___playerObject_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerObject_4() { return &___playerObject_4; }
	inline void set_playerObject_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerObject_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerObject_4), (void*)value);
	}
};

struct MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_StaticFields
{
public:
	// MoveCamera MoveCamera::<Instance>k__BackingField
	MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * ___U3CInstanceU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_StaticFields, ___U3CInstanceU3Ek__BackingField_5)); }
	inline MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * get_U3CInstanceU3Ek__BackingField_5() const { return ___U3CInstanceU3Ek__BackingField_5; }
	inline MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 ** get_address_of_U3CInstanceU3Ek__BackingField_5() { return &___U3CInstanceU3Ek__BackingField_5; }
	inline void set_U3CInstanceU3Ek__BackingField_5(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * value)
	{
		___U3CInstanceU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_5), (void*)value);
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Player::jumpSpeed
	float ___jumpSpeed_4;
	// System.Single Player::fallThreshold
	float ___fallThreshold_5;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_6;

public:
	inline static int32_t get_offset_of_jumpSpeed_4() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___jumpSpeed_4)); }
	inline float get_jumpSpeed_4() const { return ___jumpSpeed_4; }
	inline float* get_address_of_jumpSpeed_4() { return &___jumpSpeed_4; }
	inline void set_jumpSpeed_4(float value)
	{
		___jumpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_fallThreshold_5() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___fallThreshold_5)); }
	inline float get_fallThreshold_5() const { return ___fallThreshold_5; }
	inline float* get_address_of_fallThreshold_5() { return &___fallThreshold_5; }
	inline void set_fallThreshold_5(float value)
	{
		___fallThreshold_5 = value;
	}

	inline static int32_t get_offset_of_rb_6() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___rb_6)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_6() const { return ___rb_6; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_6() { return &___rb_6; }
	inline void set_rb_6(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_6), (void*)value);
	}
};


// PlayerCollider
struct  PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.SpriteRenderer PlayerCollider::sr
	SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * ___sr_4;
	// System.Int32 PlayerCollider::scoreValue
	int32_t ___scoreValue_5;

public:
	inline static int32_t get_offset_of_sr_4() { return static_cast<int32_t>(offsetof(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648, ___sr_4)); }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * get_sr_4() const { return ___sr_4; }
	inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F ** get_address_of_sr_4() { return &___sr_4; }
	inline void set_sr_4(SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * value)
	{
		___sr_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_4), (void*)value);
	}

	inline static int32_t get_offset_of_scoreValue_5() { return static_cast<int32_t>(offsetof(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648, ___scoreValue_5)); }
	inline int32_t get_scoreValue_5() const { return ___scoreValue_5; }
	inline int32_t* get_address_of_scoreValue_5() { return &___scoreValue_5; }
	inline void set_scoreValue_5(int32_t value)
	{
		___scoreValue_5 = value;
	}
};

struct PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields
{
public:
	// PlayerCollider_RockCollected PlayerCollider::RockCollectedEvent
	RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * ___RockCollectedEvent_6;
	// PlayerCollider_TimeCollected PlayerCollider::TimeCollectedEvent
	TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * ___TimeCollectedEvent_7;

public:
	inline static int32_t get_offset_of_RockCollectedEvent_6() { return static_cast<int32_t>(offsetof(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields, ___RockCollectedEvent_6)); }
	inline RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * get_RockCollectedEvent_6() const { return ___RockCollectedEvent_6; }
	inline RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A ** get_address_of_RockCollectedEvent_6() { return &___RockCollectedEvent_6; }
	inline void set_RockCollectedEvent_6(RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * value)
	{
		___RockCollectedEvent_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RockCollectedEvent_6), (void*)value);
	}

	inline static int32_t get_offset_of_TimeCollectedEvent_7() { return static_cast<int32_t>(offsetof(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields, ___TimeCollectedEvent_7)); }
	inline TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * get_TimeCollectedEvent_7() const { return ___TimeCollectedEvent_7; }
	inline TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E ** get_address_of_TimeCollectedEvent_7() { return &___TimeCollectedEvent_7; }
	inline void set_TimeCollectedEvent_7(TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * value)
	{
		___TimeCollectedEvent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeCollectedEvent_7), (void*)value);
	}
};


// ScoreController
struct  ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text ScoreController::scoreText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___scoreText_4;
	// System.Int32 ScoreController::playerScore
	int32_t ___playerScore_5;

public:
	inline static int32_t get_offset_of_scoreText_4() { return static_cast<int32_t>(offsetof(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207, ___scoreText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_scoreText_4() const { return ___scoreText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_scoreText_4() { return &___scoreText_4; }
	inline void set_scoreText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___scoreText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerScore_5() { return static_cast<int32_t>(offsetof(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207, ___playerScore_5)); }
	inline int32_t get_playerScore_5() const { return ___playerScore_5; }
	inline int32_t* get_address_of_playerScore_5() { return &___playerScore_5; }
	inline void set_playerScore_5(int32_t value)
	{
		___playerScore_5 = value;
	}
};

struct ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_StaticFields
{
public:
	// ScoreController ScoreController::<Instance>k__BackingField
	ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ___U3CInstanceU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_StaticFields, ___U3CInstanceU3Ek__BackingField_6)); }
	inline ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * get_U3CInstanceU3Ek__BackingField_6() const { return ___U3CInstanceU3Ek__BackingField_6; }
	inline ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 ** get_address_of_U3CInstanceU3Ek__BackingField_6() { return &___U3CInstanceU3Ek__BackingField_6; }
	inline void set_U3CInstanceU3Ek__BackingField_6(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * value)
	{
		___U3CInstanceU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_6), (void*)value);
	}
};


// SliderMovementLeft
struct  SliderMovementLeft_tAFC142FF1E98B41C7C719362D888157C6E1B40F5  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// SliderMovementRight
struct  SliderMovementRight_tAF632AF1D4DB140A7F7770490887E1F5341A5625  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// SpinnerRotator
struct  SpinnerRotator_t583DFFC87FEEC07C51F93F33CC4FD112E4447002  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// TimeController
struct  TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.UI.Text TimeController::TimeText
	Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * ___TimeText_4;
	// System.Single TimeController::gameTimer
	float ___gameTimer_5;
	// System.Single TimeController::timer
	float ___timer_6;
	// System.Int32 TimeController::playerTime
	int32_t ___playerTime_7;

public:
	inline static int32_t get_offset_of_TimeText_4() { return static_cast<int32_t>(offsetof(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8, ___TimeText_4)); }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * get_TimeText_4() const { return ___TimeText_4; }
	inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 ** get_address_of_TimeText_4() { return &___TimeText_4; }
	inline void set_TimeText_4(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * value)
	{
		___TimeText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeText_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameTimer_5() { return static_cast<int32_t>(offsetof(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8, ___gameTimer_5)); }
	inline float get_gameTimer_5() const { return ___gameTimer_5; }
	inline float* get_address_of_gameTimer_5() { return &___gameTimer_5; }
	inline void set_gameTimer_5(float value)
	{
		___gameTimer_5 = value;
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_playerTime_7() { return static_cast<int32_t>(offsetof(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8, ___playerTime_7)); }
	inline int32_t get_playerTime_7() const { return ___playerTime_7; }
	inline int32_t* get_address_of_playerTime_7() { return &___playerTime_7; }
	inline void set_playerTime_7(int32_t value)
	{
		___playerTime_7 = value;
	}
};

struct TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_StaticFields
{
public:
	// TimeController TimeController::<Instance>k__BackingField
	TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * ___U3CInstanceU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CInstanceU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_StaticFields, ___U3CInstanceU3Ek__BackingField_11)); }
	inline TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * get_U3CInstanceU3Ek__BackingField_11() const { return ___U3CInstanceU3Ek__BackingField_11; }
	inline TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 ** get_address_of_U3CInstanceU3Ek__BackingField_11() { return &___U3CInstanceU3Ek__BackingField_11; }
	inline void set_U3CInstanceU3Ek__BackingField_11(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * value)
	{
		___U3CInstanceU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInstanceU3Ek__BackingField_11), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_6)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_8)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_9)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_12)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_18)); }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_t053DAB6E2110E276A0339D73497193F464BC1F82 * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_30;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_32;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_33;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_34;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IsMaskingGraphic_29)); }
	inline bool get_m_IsMaskingGraphic_29() const { return ___m_IsMaskingGraphic_29; }
	inline bool* get_address_of_m_IsMaskingGraphic_29() { return &___m_IsMaskingGraphic_29; }
	inline void set_m_IsMaskingGraphic_29(bool value)
	{
		___m_IsMaskingGraphic_29 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_30)); }
	inline bool get_m_IncludeForMasking_30() const { return ___m_IncludeForMasking_30; }
	inline bool* get_address_of_m_IncludeForMasking_30() { return &___m_IncludeForMasking_30; }
	inline void set_m_IncludeForMasking_30(bool value)
	{
		___m_IncludeForMasking_30 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_31)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_31() const { return ___m_OnCullStateChanged_31; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_31() { return &___m_OnCullStateChanged_31; }
	inline void set_m_OnCullStateChanged_31(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_32)); }
	inline bool get_m_ShouldRecalculate_32() const { return ___m_ShouldRecalculate_32; }
	inline bool* get_address_of_m_ShouldRecalculate_32() { return &___m_ShouldRecalculate_32; }
	inline void set_m_ShouldRecalculate_32(bool value)
	{
		___m_ShouldRecalculate_32 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_33)); }
	inline int32_t get_m_StencilValue_33() const { return ___m_StencilValue_33; }
	inline int32_t* get_address_of_m_StencilValue_33() { return &___m_StencilValue_33; }
	inline void set_m_StencilValue_33(int32_t value)
	{
		___m_StencilValue_33 = value;
	}

	inline static int32_t get_offset_of_m_Corners_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_34)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_34() const { return ___m_Corners_34; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_34() { return &___m_Corners_34; }
	inline void set_m_Corners_34(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_34), (void*)value);
	}
};


// UnityEngine.UI.Toggle
struct  Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.UI.Toggle_ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_19;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___graphic_20;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * ___m_Group_21;
	// UnityEngine.UI.Toggle_ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * ___onValueChanged_22;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_23;

public:
	inline static int32_t get_offset_of_toggleTransition_19() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___toggleTransition_19)); }
	inline int32_t get_toggleTransition_19() const { return ___toggleTransition_19; }
	inline int32_t* get_address_of_toggleTransition_19() { return &___toggleTransition_19; }
	inline void set_toggleTransition_19(int32_t value)
	{
		___toggleTransition_19 = value;
	}

	inline static int32_t get_offset_of_graphic_20() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___graphic_20)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_graphic_20() const { return ___graphic_20; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_graphic_20() { return &___graphic_20; }
	inline void set_graphic_20(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___graphic_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___graphic_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Group_21() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___m_Group_21)); }
	inline ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * get_m_Group_21() const { return ___m_Group_21; }
	inline ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 ** get_address_of_m_Group_21() { return &___m_Group_21; }
	inline void set_m_Group_21(ToggleGroup_t11E2B254D3C968C7D0DA11C606CC06D7D7F0D786 * value)
	{
		___m_Group_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Group_21), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_22() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___onValueChanged_22)); }
	inline ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * get_onValueChanged_22() const { return ___onValueChanged_22; }
	inline ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 ** get_address_of_onValueChanged_22() { return &___onValueChanged_22; }
	inline void set_onValueChanged_22(ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * value)
	{
		___onValueChanged_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_IsOn_23() { return static_cast<int32_t>(offsetof(Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106, ___m_IsOn_23)); }
	inline bool get_m_IsOn_23() const { return ___m_IsOn_23; }
	inline bool* get_address_of_m_IsOn_23() { return &___m_IsOn_23; }
	inline void set_m_IsOn_23(bool value)
	{
		___m_IsOn_23 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_35;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_38;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_40;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_41;

public:
	inline static int32_t get_offset_of_m_FontData_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_35)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_35() const { return ___m_FontData_35; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_35() { return &___m_FontData_35; }
	inline void set_m_FontData_35(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_36)); }
	inline String_t* get_m_Text_36() const { return ___m_Text_36; }
	inline String_t** get_address_of_m_Text_36() { return &___m_Text_36; }
	inline void set_m_Text_36(String_t* value)
	{
		___m_Text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_37() const { return ___m_TextCache_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_37() { return &___m_TextCache_37; }
	inline void set_m_TextCache_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_38)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_38() const { return ___m_TextCacheForLayout_38; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_38() { return &___m_TextCacheForLayout_38; }
	inline void set_m_TextCacheForLayout_38(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_40)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_40() const { return ___m_DisableFontTextureRebuiltCallback_40; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_40() { return &___m_DisableFontTextureRebuiltCallback_40; }
	inline void set_m_DisableFontTextureRebuiltCallback_40(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_40 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_41() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_41)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_41() const { return ___m_TempVerts_41; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_41() { return &___m_TempVerts_41; }
	inline void set_m_TempVerts_41(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_41), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_39;

public:
	inline static int32_t get_offset_of_s_DefaultText_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_39() const { return ___s_DefaultText_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_39() { return &___s_DefaultText_39; }
	inline void set_s_DefaultText_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_39), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * m_Items[1];

public:
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5_gshared (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF_gshared (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___call0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);

// AudioController AudioController::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Void AudioController::set_Instance(AudioController)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEA_inline (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void AudioController::playBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playBackgroundMusic_mDC95E618849BCAC16FCB66F3928BCC9D3A828832 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_mute_m04D579849D7D37D6CC39DE31DB928176B2A9C2CF (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA (RuntimeArray * __this, RuntimeObject * ___value0, int32_t ___index1, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// ColourManager ColourManager::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_inline (const RuntimeMethod* method);
// System.Void ColourManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_Init_mFD49BF7C58B017CD5C71347B457807A236AB0560 (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method);
// System.Void ColourManager::set_Instance(ColourManager)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13_inline (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// System.Void ColourManager::setPlayerColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611 (SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * __this, Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_set_tag_mDA1291B5CDF5CA42AF8247004DF7FD95F3684047 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator DestroyGameObjects::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyGameObjects_Wait_mB0498AF8341701D447B16FC16E37D419D40A32C0 (DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void DestroyGameObjects/<Wait>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__1__ctor_m0D1CD76459C246609848F976F83D580167F53B30 (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// GameController GameController::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_inline (const RuntimeMethod* method);
// System.Void GameController::set_Instance(GameController)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD (String_t* ___name0, const RuntimeMethod* method);
// System.Void GameController::initGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_initGame_m9012221ECAEC2EC58FB501933397FF9DFB20A5F8 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Int32 GameController::SetNewNumberObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameController_SetNewNumberObstacles_m7CC2EA654020C26ACD4530A9E01F2354D949275B (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void GameController::createGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_createGameObjects_m70C9915680BE0D74187C7F4C59A7ECBB958BE527 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m352D452C728667C9C76C942525CDE26444568ECD_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// System.Void GameController::CreateRockObject(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position0, const RuntimeMethod* method);
// System.Void GameController::IncreaseSpeedComponant(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, int32_t ___levelSwitch0, const RuntimeMethod* method);
// System.Single DifficultyController::get_MovementSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_inline (const RuntimeMethod* method);
// System.Void DifficultyController::set_MovementSpeed(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91D_inline (float ___value0, const RuntimeMethod* method);
// System.Single DifficultyController::get_RotationSpeed()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline (const RuntimeMethod* method);
// System.Void DifficultyController::set_RotationSpeed(System.Single)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_inline (float ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m129DEF8A66683189ED44B21496135824743EF617_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody2D::set_bodyType(UnityEngine.RigidbodyType2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_bodyType_m239CDB6FFA033FD3B5BAC061A3F96DC9264D9900 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// MoveCamera MoveCamera::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11_inline (const RuntimeMethod* method);
// System.Void MoveCamera::RepositionCameraPlayer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera_RepositionCameraPlayer_m27D70D1F8FF9B01D745C43E00AFF07EDAB463646 (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * __this, float ___positionComponant0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_mE0D76FF284F638715170DB52728B7595B41B6E8C (String_t* ___key0, const RuntimeMethod* method);
// MenuController MenuController::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_inline (const RuntimeMethod* method);
// System.Void MenuController::set_Instance(MenuController)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2B_inline (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5 (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 * __this, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tE1EF042798523847EEBB2A12FA37C4003C1B1299 *, UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *, const RuntimeMethod*))UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF_gshared)(__this, ___call0, method);
}
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.Convert::ToBoolean(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Convert_ToBoolean_mBC3AC315D316ED5271A20F82C94A5EC60700648D (String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301 (bool* __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.Void MenuController::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ResumeGame_m195D42498CD27A7ACF8D4043B7C63ED5788F2E2E (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
// System.Void MenuController::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_PauseGame_m91D09AF0FF5567F8B7D2BFC62DA82886B8B270BB (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
// System.Void MenuController::LaunchTimeCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LaunchTimeCounter_m8EB06A9249882E92B265E1986D51065FC5304A44 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF (float ___value0, const RuntimeMethod* method);
// TimeController TimeController::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Int32 TimeController::CountDownTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeController_CountDownTimer_mBDC4A74FEC99C2EC057E02118A23C3D9CF17D470 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method);
// System.Void MenuController::GameOverDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
// ScoreController ScoreController::get_Instance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3_inline (const RuntimeMethod* method);
// System.Int32 ScoreController::get_PlayerScore()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ScoreController_get_PlayerScore_mE6146588E3462307E83878171D468BD231897E92_inline (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Int32 TimeController::get_PlayerTime()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TimeController_get_PlayerTime_mA95A5E63C069B7175CB24260E8B5BE6F55D0E3E7_inline (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method);
// System.Boolean MenuController::isVideoWatched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MenuController_isVideoWatched_mC8458A183D808822E1D03E6B99440CA81903CE80 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
// System.Void TimeController::RestartTimePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_RestartTimePlay_m30F7E0B00E551FE8DD2AE85591F08F2B3311C800 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method);
// System.Void GameController::RestartWithLastPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_RestartWithLastPosition_mEF5251AB55764F142D6AAB9DB3F857A6DAC64325 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method);
// System.Void MenuController::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ResetGame_m12781ABA447E3F3BEA6460A965F16B5BFDF4DC6D (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method);
// System.Void DifficultyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController__ctor_mA6B5CBF6B8510E6E426A07B62C8C333A1B7C7026 (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * __this, const RuntimeMethod* method);
// System.Void DifficultyController::ResetMovementSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_ResetMovementSpeed_m961600FC51EAA9235BE7D1479EEF11399FB393FD (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * __this, const RuntimeMethod* method);
// System.Void DifficultyController::ResetRotationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_ResetRotationSpeed_mB6C19E3B01A1AABE6C20E888D75A8F635AD86367 (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2 (Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m9721867D46BC827D58271AD235267B0B0865F115 (String_t* ___sceneName0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Void MenuController::ToggleValueChanged(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ToggleValueChanged_m5A1581483C3296198AF50261FBB9CCD93F9BC750 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * ___change0, const RuntimeMethod* method);
// System.Void MoveCamera::set_Instance(MoveCamera)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348_inline (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0 (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// System.Void AudioController::playTapClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playTapClip_mB0BB5A423F50D909873BD970522EF9F65A1F4023 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mD4382B2843BA9A61A01A8F9D7B9813D060F9C9CA_gshared)(__this, method);
}
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void AudioController::playCollectRockClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playCollectRockClip_m621B32346B4AC9DA3D9290B9CC5822E776F443C5 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method);
// System.Void PlayerCollider::PublishRockCollectedEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider_PublishRockCollectedEvent_mF353BE6550596EE2470533F59E11A04BDE00F598 (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method);
// System.Void PlayerCollider::PublishTimeCollectedEvent(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider_PublishTimeCollectedEvent_m24831AB766EAEB6ED242F7E6FAFCB098D4C931DF (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method);
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void AudioController::playPlayerDiesClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playPlayerDiesClip_mBE5FC10229CAEB8BB33D0FBB1EB9DC4528BD212A (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method);
// System.Void PlayerCollider/RockCollected::Invoke(PlayerCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RockCollected_Invoke_m7E902879C79011D37A3E022A9334EA01AF9EA00C (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * __this, PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * ___pc0, const RuntimeMethod* method);
// System.Void PlayerCollider/TimeCollected::Invoke(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeCollected_Invoke_mEB75C1650A834520267AF764BCEB0FDE52B62A31 (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method);
// System.Void ScoreController::set_Instance(ScoreController)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603_inline (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ___value0, const RuntimeMethod* method);
// System.Void PlayerCollider/RockCollected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RockCollected__ctor_m387C0A780F2D41FA0CE82FA1DB8A6205D77B2BDA (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Int32 PlayerCollider::get_ScoreValue()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerCollider_get_ScoreValue_mB56B773A6345295DA53F110FD5E7AD849E1BECC9_inline (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.Void TimeController::set_Instance(TimeController)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059_inline (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * ___value0, const RuntimeMethod* method);
// System.Void PlayerCollider/TimeCollected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeCollected__ctor_m9DC0DDC70367A844AE1FEC5C739F357D0BF65445 (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 TimeController::ConvertInSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeController_ConvertInSeconds_m0B5418B38B7B553BF2D023B4A64C2698A4DBB4FB (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, float ___time0, const RuntimeMethod* method);
// System.Void TimeController::UpdateTimeField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_UpdateTimeField_m1C5D5700A9251511B4442E879CBC815A65F3FA7A (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, int32_t ___time0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// AudioController AudioController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AudioController Instance { get; private set; }
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_0 = ((AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_9();
		return L_0;
	}
}
// System.Void AudioController::set_Instance(AudioController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEA (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AudioController Instance { get; private set; }
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_0 = ___value0;
		((AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_9(L_0);
		return;
	}
}
// System.Void AudioController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Awake_m63E8990C9B5B3905750F6739AF27A29D135A8610 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_Awake_m63E8990C9B5B3905750F6739AF27A29D135A8610_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_0 = AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEA_inline(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void AudioController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Start_m934D728F20E34862C4962169AB16E54D5F164E7B (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_Start_m934D728F20E34862C4962169AB16E54D5F164E7B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// source = GetComponent<AudioSource>();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_source_4(L_0);
		// playBackgroundMusic();
		AudioController_playBackgroundMusic_mDC95E618849BCAC16FCB66F3928BCC9D3A828832(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Update_m9F55ED3C55B35FBF480F40F25216AFEF75F5B7A5 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_Update_m9F55ED3C55B35FBF480F40F25216AFEF75F5B7A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetString("Sound") == "True")
		String_t* L_0 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteralB4E3EFEBA10E84F7148DA9F7EFE85E07057D7C7A, /*hidden argument*/NULL);
		bool L_1 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_0, _stringLiteral88B33E4E12F75AC8BF792AEBDE41F1A090F3A612, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// source.mute = false;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = __this->get_source_4();
		NullCheck(L_2);
		AudioSource_set_mute_m04D579849D7D37D6CC39DE31DB928176B2A9C2CF(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0023:
	{
		// source.mute = true;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_3 = __this->get_source_4();
		NullCheck(L_3);
		AudioSource_set_mute_m04D579849D7D37D6CC39DE31DB928176B2A9C2CF(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::playBackgroundMusic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playBackgroundMusic_mDC95E618849BCAC16FCB66F3928BCC9D3A828832 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	{
		// source.clip = backgroundMusic;
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_source_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = __this->get_backgroundMusic_5();
		NullCheck(L_0);
		AudioSource_set_clip_mF574231E0B749E0167CAF9E4FCBA06BAA0F9ED9B(L_0, L_1, /*hidden argument*/NULL);
		// source.Play();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = __this->get_source_4();
		NullCheck(L_2);
		AudioSource_Play_m0BA206481892AA4AF7DB2900A0B0805076516164(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::playPlayerDiesClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playPlayerDiesClip_mBE5FC10229CAEB8BB33D0FBB1EB9DC4528BD212A (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	{
		// source.PlayOneShot(playerDies);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_source_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = __this->get_playerDies_6();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::playCollectRockClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playCollectRockClip_m621B32346B4AC9DA3D9290B9CC5822E776F443C5 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	{
		// source.PlayOneShot(collectRock);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_source_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = __this->get_collectRock_7();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::playTapClip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playTapClip_mB0BB5A423F50D909873BD970522EF9F65A1F4023 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	{
		// source.PlayOneShot(tapScreen);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = __this->get_source_4();
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_1 = __this->get_tapScreen_8();
		NullCheck(L_0);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ctor_m163A21D6CEECD13E4CCBA57FACA93BD931CBEDF3 (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// ColourManager ColourManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ColourManager Instance { get; private set; }
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_0 = ((ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_StaticFields*)il2cpp_codegen_static_fields_for(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void ColourManager::set_Instance(ColourManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13 (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ColourManager Instance { get; private set; }
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_0 = ___value0;
		((ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_StaticFields*)il2cpp_codegen_static_fields_for(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_15(L_0);
		return;
	}
}
// System.Void ColourManager::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_Init_mFD49BF7C58B017CD5C71347B457807A236AB0560 (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method)
{
	{
		// sprites.SetValue(rocketGreen, 0);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_0 = __this->get_sprites_12();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_1 = __this->get_rocketGreen_6();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA((RuntimeArray *)(RuntimeArray *)L_0, L_1, 0, /*hidden argument*/NULL);
		// sprites.SetValue(rocketYellow, 1);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_2 = __this->get_sprites_12();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_3 = __this->get_rocketYellow_5();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_2);
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA((RuntimeArray *)(RuntimeArray *)L_2, L_3, 1, /*hidden argument*/NULL);
		// sprites.SetValue(rocketBlue, 2);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_4 = __this->get_sprites_12();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_5 = __this->get_rocketBlue_4();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_4);
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA((RuntimeArray *)(RuntimeArray *)L_4, L_5, 2, /*hidden argument*/NULL);
		// sprites.SetValue(rocketRed, 3);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_6 = __this->get_sprites_12();
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_7 = __this->get_rocketRed_7();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_6);
		Array_SetValue_m3C6811CE9C45D1E461404B5D2FBD4EC1A054FDCA((RuntimeArray *)(RuntimeArray *)L_6, L_7, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColourManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_Update_m36AEEC377073B9FB9D7B62AD46D33A1D73B11E31 (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_Update_m36AEEC377073B9FB9D7B62AD46D33A1D73B11E31_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (sr.sprite == sprites[0])
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_0 = __this->get_sr_14();
		NullCheck(L_0);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_1 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_0, /*hidden argument*/NULL);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_2 = __this->get_sprites_12();
		NullCheck(L_2);
		int32_t L_3 = 0;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_1, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// flameGreen.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = __this->get_flameGreen_10();
		NullCheck(L_6);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_6, (bool)1, /*hidden argument*/NULL);
		// flameYellow.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_flameYellow_9();
		NullCheck(L_7);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_7, (bool)0, /*hidden argument*/NULL);
		// flameBlue.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_flameBlue_8();
		NullCheck(L_8);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_8, (bool)0, /*hidden argument*/NULL);
		// flameRed.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_flameRed_11();
		NullCheck(L_9);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_9, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004b:
	{
		// else if (sr.sprite == sprites[1])
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_10 = __this->get_sr_14();
		NullCheck(L_10);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_11 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_10, /*hidden argument*/NULL);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_12 = __this->get_sprites_12();
		NullCheck(L_12);
		int32_t L_13 = 1;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_15 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_11, L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0096;
		}
	}
	{
		// flameGreen.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = __this->get_flameGreen_10();
		NullCheck(L_16);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)0, /*hidden argument*/NULL);
		// flameYellow.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_flameYellow_9();
		NullCheck(L_17);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_17, (bool)1, /*hidden argument*/NULL);
		// flameBlue.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_flameBlue_8();
		NullCheck(L_18);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_18, (bool)0, /*hidden argument*/NULL);
		// flameRed.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_19 = __this->get_flameRed_11();
		NullCheck(L_19);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_19, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0096:
	{
		// else if (sr.sprite == sprites[2])
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_20 = __this->get_sr_14();
		NullCheck(L_20);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_21 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_20, /*hidden argument*/NULL);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_22 = __this->get_sprites_12();
		NullCheck(L_22);
		int32_t L_23 = 2;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_25 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_21, L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00e1;
		}
	}
	{
		// flameGreen.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_26 = __this->get_flameGreen_10();
		NullCheck(L_26);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_26, (bool)0, /*hidden argument*/NULL);
		// flameYellow.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = __this->get_flameYellow_9();
		NullCheck(L_27);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_27, (bool)0, /*hidden argument*/NULL);
		// flameBlue.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_28 = __this->get_flameBlue_8();
		NullCheck(L_28);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_28, (bool)1, /*hidden argument*/NULL);
		// flameRed.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = __this->get_flameRed_11();
		NullCheck(L_29);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_29, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00e1:
	{
		// else if (sr.sprite == sprites[3])
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_30 = __this->get_sr_14();
		NullCheck(L_30);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_31 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_30, /*hidden argument*/NULL);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_32 = __this->get_sprites_12();
		NullCheck(L_32);
		int32_t L_33 = 3;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_31, L_34, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_012b;
		}
	}
	{
		// flameGreen.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_36 = __this->get_flameGreen_10();
		NullCheck(L_36);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_36, (bool)0, /*hidden argument*/NULL);
		// flameYellow.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = __this->get_flameYellow_9();
		NullCheck(L_37);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_37, (bool)0, /*hidden argument*/NULL);
		// flameBlue.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_38 = __this->get_flameBlue_8();
		NullCheck(L_38);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_38, (bool)0, /*hidden argument*/NULL);
		// flameRed.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_39 = __this->get_flameRed_11();
		NullCheck(L_39);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_39, (bool)1, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void ColourManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_Awake_m48BC1037352BCD0E2FD55E1870D89A145DF8DC40 (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_Awake_m48BC1037352BCD0E2FD55E1870D89A145DF8DC40_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_0 = ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// Init();
		ColourManager_Init_mFD49BF7C58B017CD5C71347B457807A236AB0560(__this, /*hidden argument*/NULL);
		// Instance = this;
		ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13_inline(__this, /*hidden argument*/NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void ColourManager::setPlayerColour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int index = Random.Range(0, sprites.Length);
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_0 = __this->get_sprites_12();
		NullCheck(L_0);
		int32_t L_1 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, (((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_1;
		// if (sprites[index] == sr.sprite)
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_2 = __this->get_sprites_12();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_6 = __this->get_sr_14();
		NullCheck(L_6);
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_7 = SpriteRenderer_get_sprite_m08636289E3194AF5DF47954C8F01FE7F50E85900(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0030;
		}
	}
	{
		// setPlayerColour();
		ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// sr.sprite = sprites[index];
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_9 = __this->get_sr_14();
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_10 = __this->get_sprites_12();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_9);
		SpriteRenderer_set_sprite_m9F5C8B2007AA03FAB66F0CB61260349DF1E28611(L_9, L_13, /*hidden argument*/NULL);
		// sr.tag = colourOptions[index];
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_14 = __this->get_sr_14();
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_15 = __this->get_colourOptions_13();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		String_t* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Component_set_tag_mDA1291B5CDF5CA42AF8247004DF7FD95F3684047(L_14, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ColourManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColourManager__ctor_m00600632D583B3B35C3EF9007D66ACAFD1541249 (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager__ctor_m00600632D583B3B35C3EF9007D66ACAFD1541249_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Sprite[] sprites = new Sprite[4];
		SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7* L_0 = (SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7*)(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7*)SZArrayNew(SpriteU5BU5D_tF94AD07E062BC08ECD019A21E7A7B861654905F7_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_sprites_12(L_0);
		// private string[] colourOptions = new string[4] { "GreenTag", "YellowTag", "BlueTag", "RedTag" };
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_1 = (StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E*)SZArrayNew(StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral4135A7F452A17F7FD899AA7A2FFA9D4FC512769D);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4135A7F452A17F7FD899AA7A2FFA9D4FC512769D);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral30E5259D5EBBC3F7B4939832D91A6961CF305675);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral30E5259D5EBBC3F7B4939832D91A6961CF305675);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral1D1700E0D5D50D42EBF9AC93512AE5E1B3C917DF);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral1D1700E0D5D50D42EBF9AC93512AE5E1B3C917DF);
		StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral3D33846949C9780626704D09B4F0331B06442481);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3D33846949C9780626704D09B4F0331B06442481);
		__this->set_colourOptions_13(L_5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DestroyGameObjects::OnBecameInvisible()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyGameObjects_OnBecameInvisible_m18300E51F334BC167F38A1ABCA7F4B121776667D (DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyGameObjects_OnBecameInvisible_m18300E51F334BC167F38A1ABCA7F4B121776667D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			// if(gameObject.activeInHierarchy)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
			NullCheck(L_0);
			bool L_1 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001a;
			}
		}

IL_000d:
		{
			// StartCoroutine(Wait());
			RuntimeObject* L_2 = DestroyGameObjects_Wait_mB0498AF8341701D447B16FC16E37D419D40A32C0(__this, /*hidden argument*/NULL);
			MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_2, /*hidden argument*/NULL);
		}

IL_001a:
		{
			// }
			goto IL_001f;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_001c;
		throw e;
	}

CATCH_001c:
	{ // begin catch(System.Object)
		// catch {}
		// catch {}
		goto IL_001f;
	} // end catch (depth: 1)

IL_001f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DestroyGameObjects::Wait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DestroyGameObjects_Wait_mB0498AF8341701D447B16FC16E37D419D40A32C0 (DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DestroyGameObjects_Wait_mB0498AF8341701D447B16FC16E37D419D40A32C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * L_0 = (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 *)il2cpp_codegen_object_new(U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646_il2cpp_TypeInfo_var);
		U3CWaitU3Ed__1__ctor_m0D1CD76459C246609848F976F83D580167F53B30(L_0, 0, /*hidden argument*/NULL);
		U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void DestroyGameObjects::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DestroyGameObjects__ctor_m41332DAD1CD293518C1B2C3496B93C02BB4C866D (DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DestroyGameObjects_<Wait>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__1__ctor_m0D1CD76459C246609848F976F83D580167F53B30 (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void DestroyGameObjects_<Wait>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__1_System_IDisposable_Dispose_m0B6AF97D6C4669B38A9A4C1339D54D063F248B52 (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean DestroyGameObjects_<Wait>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitU3Ed__1_MoveNext_m8AD0B03A01E2CBE5B6EFDD1CD26067F255846A14 (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitU3Ed__1_MoveNext_m8AD0B03A01E2CBE5B6EFDD1CD26067F255846A14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_4 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_4, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		// Destroy(gameObject);
		DestroyGameObjects_t4EA9D02AEBE72B58ABE4EC8DD77CCB7A7D300088 * L_5 = V_1;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
		// }
		goto IL_004e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (RuntimeObject_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_004b;
		throw e;
	}

CATCH_004b:
	{ // begin catch(System.Object)
		// catch{}
		// catch{}
		goto IL_004e;
	} // end catch (depth: 1)

IL_004e:
	{
		// }
		return (bool)0;
	}
}
// System.Object DestroyGameObjects_<Wait>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE90DEC7F5299420BE5F0DF4D1727E034D628DF8B (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void DestroyGameObjects_<Wait>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitU3Ed__1_System_Collections_IEnumerator_Reset_m441EAF65EE18FA89EA2DC29A0E44FCD975F8E75B (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CWaitU3Ed__1_System_Collections_IEnumerator_Reset_m441EAF65EE18FA89EA2DC29A0E44FCD975F8E75B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CWaitU3Ed__1_System_Collections_IEnumerator_Reset_m441EAF65EE18FA89EA2DC29A0E44FCD975F8E75B_RuntimeMethod_var);
	}
}
// System.Object DestroyGameObjects_<Wait>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitU3Ed__1_System_Collections_IEnumerator_get_Current_m34C9351046AE758834FD1BEF534FBFE332073D82 (U3CWaitU3Ed__1_t0348776F708D19FF18A0AA130B3788781EB6A646 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DifficultyController::get_RotationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return rotationSpeed; }
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_rotationSpeed_6();
		return L_0;
	}
}
// System.Void DifficultyController::set_RotationSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01 (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { rotationSpeed = value; }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_rotationSpeed_6(L_0);
		// set { rotationSpeed = value; }
		return;
	}
}
// System.Single DifficultyController::get_MovementSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return movementSpeed; }
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_movementSpeed_7();
		return L_0;
	}
}
// System.Void DifficultyController::set_MovementSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91D (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { movementSpeed = value; }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_movementSpeed_7(L_0);
		// set { movementSpeed = value; }
		return;
	}
}
// System.Void DifficultyController::ResetRotationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_ResetRotationSpeed_mB6C19E3B01A1AABE6C20E888D75A8F635AD86367 (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_ResetRotationSpeed_mB6C19E3B01A1AABE6C20E888D75A8F635AD86367_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rotationSpeed = initialRotationSpeed;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_initialRotationSpeed_4();
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_rotationSpeed_6(L_0);
		// }
		return;
	}
}
// System.Void DifficultyController::ResetMovementSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController_ResetMovementSpeed_m961600FC51EAA9235BE7D1479EEF11399FB393FD (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_ResetMovementSpeed_m961600FC51EAA9235BE7D1479EEF11399FB393FD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// movementSpeed = initialMovementSpeed;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_initialMovementSpeed_5();
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_movementSpeed_7(L_0);
		// }
		return;
	}
}
// System.Void DifficultyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController__ctor_mA6B5CBF6B8510E6E426A07B62C8C333A1B7C7026 (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void DifficultyController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DifficultyController__cctor_m21CC49117CD2B62559F45FB666891F8AE7EA29E8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController__cctor_m21CC49117CD2B62559F45FB666891F8AE7EA29E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static float initialRotationSpeed = 85f;
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_initialRotationSpeed_4((85.0f));
		// private static float initialMovementSpeed = 0.015f;
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_initialMovementSpeed_5((0.015f));
		// private static float rotationSpeed = initialRotationSpeed;
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_initialRotationSpeed_4();
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_rotationSpeed_6(L_0);
		// private static float movementSpeed = initialMovementSpeed;
		float L_1 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_initialMovementSpeed_5();
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_movementSpeed_7(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// GameController GameController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Instance { get; private set; }
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_16();
		return L_0;
	}
}
// System.Void GameController::set_Instance(GameController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Instance { get; private set; }
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = ___value0;
		((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_16(L_0);
		return;
	}
}
// System.Void GameController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Awake_m0F7A2663599EE488BA03E9010D12DF3D9EF623BE (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Awake_m0F7A2663599EE488BA03E9010D12DF3D9EF623BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8_inline(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void GameController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Start_m229BE9A914ADF299ACFF1EFD5F15F27FF146D3C0 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_Start_m229BE9A914ADF299ACFF1EFD5F15F27FF146D3C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.Find("Player");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		__this->set_player_13(L_0);
		// initGame();
		GameController_initGame_m9012221ECAEC2EC58FB501933397FF9DFB20A5F8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::initGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_initGame_m9012221ECAEC2EC58FB501933397FF9DFB20A5F8 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_initGame_m9012221ECAEC2EC58FB501933397FF9DFB20A5F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// parent = GameObject.Find("GameObjectContainer");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteral929B8E8530D940A9CD576D0115105A139C5BB453, /*hidden argument*/NULL);
		__this->set_parent_12(L_0);
		// PlayerPrefs.SetInt("LevelSwitch", 0);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, 0, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("Obstacle", 0);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral07D1F5C7BB331ED89DE100316F857ACF7D9D6D56, 0, /*hidden argument*/NULL);
		// numberObstacle = SetNewNumberObstacles();
		int32_t L_1 = GameController_SetNewNumberObstacles_m7CC2EA654020C26ACD4530A9E01F2354D949275B(__this, /*hidden argument*/NULL);
		__this->set_numberObstacle_14(L_1);
		// createGameObjects();
		GameController_createGameObjects_m70C9915680BE0D74187C7F4C59A7ECBB958BE527(__this, /*hidden argument*/NULL);
		// ColourManager.Instance.setPlayerColour();
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_2 = ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E(L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::createGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_createGameObjects_m70C9915680BE0D74187C7F4C59A7ECBB958BE527 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_createGameObjects_m70C9915680BE0D74187C7F4C59A7ECBB958BE527_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_7;
	memset((&V_7), 0, sizeof(V_7));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_8 = NULL;
	{
		// int levelSwitch = PlayerPrefs.GetInt("LevelSwitch");
		int32_t L_0 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (levelSwitch == 0)
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0114;
		}
	}
	{
		// Vector2 circlePos = new Vector2(0, 0);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), (0.0f), (0.0f), /*hidden argument*/NULL);
		// GameObject newCircle = null;
		V_2 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// if (prevPosition == null)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = __this->get_prevPosition_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// circlePos = new Vector2(0, 1.2f);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_1), (0.0f), (1.2f), /*hidden argument*/NULL);
		// }
		goto IL_0072;
	}

IL_0045:
	{
		// circlePos = prevPosition.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_prevPosition_11();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// circlePos.x = 0;
		(&V_1)->set_x_0((0.0f));
		// circlePos.y += 5f;
		float* L_7 = (&V_1)->get_address_of_y_1();
		float* L_8 = L_7;
		float L_9 = *((float*)L_8);
		*((float*)L_8) = (float)((float)il2cpp_codegen_add((float)L_9, (float)(5.0f)));
	}

IL_0072:
	{
		// newCircle = Instantiate(circle, circlePos, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_10 = __this->get_circle_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_10, L_12, L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_2 = L_14;
		// newCircle.transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_15 = V_2;
		NullCheck(L_15);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_15, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_parent_12();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_16, L_18, (bool)0, /*hidden argument*/NULL);
		// CreateRockObject(circlePos);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_19 = V_1;
		GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6(__this, L_19, /*hidden argument*/NULL);
		// prevPosition = newCircle.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_20 = V_2;
		NullCheck(L_20);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_21 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_20, /*hidden argument*/NULL);
		__this->set_prevPosition_11(L_21);
		// circlePos.y += 2.75f;
		float* L_22 = (&V_1)->get_address_of_y_1();
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		*((float*)L_23) = (float)((float)il2cpp_codegen_add((float)L_24, (float)(2.75f)));
		// Instantiate(colourSwapper, circlePos, Quaternion.identity).transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_25 = __this->get_colourSwapper_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_26 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_26, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_28 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_29 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_25, L_27, L_28, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_29);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_29, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_31 = __this->get_parent_12();
		NullCheck(L_31);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_31, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_30, L_32, (bool)0, /*hidden argument*/NULL);
		// prevPosition = newCircle.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_33 = V_2;
		NullCheck(L_33);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_34 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_33, /*hidden argument*/NULL);
		__this->set_prevPosition_11(L_34);
		// PlayerPrefs.SetInt("LevelSwitch", UnityEngine.Random.Range(0, 3));
		int32_t L_35 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 3, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, L_35, /*hidden argument*/NULL);
		// IncreaseSpeedComponant(levelSwitch);
		int32_t L_36 = V_0;
		GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9(__this, L_36, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0114:
	{
		// else if (levelSwitch == 1)
		int32_t L_37 = V_0;
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_0297;
		}
	}
	{
		// Vector2 sliderPos = new Vector2(0, 0);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_3), (0.0f), (0.0f), /*hidden argument*/NULL);
		// GameObject newSlider = null;
		V_4 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// int numbSlider = UnityEngine.Random.Range(2, 4);
		int32_t L_38 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(2, 4, /*hidden argument*/NULL);
		V_5 = L_38;
		// for (int i = 0; i < numbSlider; i++)
		V_6 = 0;
		goto IL_0220;
	}

IL_0140:
	{
		// sliderPos = prevPosition.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = __this->get_prevPosition_11();
		NullCheck(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_40, /*hidden argument*/NULL);
		V_3 = L_41;
		// if (i == 1)
		int32_t L_42 = V_6;
		if ((!(((uint32_t)L_42) == ((uint32_t)1))))
		{
			goto IL_0164;
		}
	}
	{
		// sliderPos.x = 8.45f;
		(&V_3)->set_x_0((8.45f));
		goto IL_0170;
	}

IL_0164:
	{
		// sliderPos.x = 2.81f;
		(&V_3)->set_x_0((2.81f));
	}

IL_0170:
	{
		// if (i == 0)
		int32_t L_43 = V_6;
		if (L_43)
		{
			goto IL_0186;
		}
	}
	{
		// sliderPos.y += 4.5f;
		float* L_44 = (&V_3)->get_address_of_y_1();
		float* L_45 = L_44;
		float L_46 = *((float*)L_45);
		*((float*)L_45) = (float)((float)il2cpp_codegen_add((float)L_46, (float)(4.5f)));
		goto IL_0196;
	}

IL_0186:
	{
		// sliderPos.y += 3f;
		float* L_47 = (&V_3)->get_address_of_y_1();
		float* L_48 = L_47;
		float L_49 = *((float*)L_48);
		*((float*)L_48) = (float)((float)il2cpp_codegen_add((float)L_49, (float)(3.0f)));
	}

IL_0196:
	{
		// if (i == 1)
		int32_t L_50 = V_6;
		if ((!(((uint32_t)L_50) == ((uint32_t)1))))
		{
			goto IL_01b5;
		}
	}
	{
		// newSlider = Instantiate(sliderLeft, sliderPos, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_51 = __this->get_sliderLeft_6();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_52 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_53 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_52, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_54 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_55 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_51, L_53, L_54, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_4 = L_55;
		goto IL_01cd;
	}

IL_01b5:
	{
		// newSlider = Instantiate(sliderRight, sliderPos, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_56 = __this->get_sliderRight_5();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_57 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_58 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_59 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_60 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_56, L_58, L_59, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_4 = L_60;
	}

IL_01cd:
	{
		// newSlider.transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_61 = V_4;
		NullCheck(L_61);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_62 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_61, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_63 = __this->get_parent_12();
		NullCheck(L_63);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_64 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_63, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_62, L_64, (bool)0, /*hidden argument*/NULL);
		// if (i < 1)
		int32_t L_65 = V_6;
		if ((((int32_t)L_65) >= ((int32_t)1)))
		{
			goto IL_020d;
		}
	}
	{
		// sliderPos.x = 0;
		(&V_3)->set_x_0((0.0f));
		// sliderPos.y += 1.5f;
		float* L_66 = (&V_3)->get_address_of_y_1();
		float* L_67 = L_66;
		float L_68 = *((float*)L_67);
		*((float*)L_67) = (float)((float)il2cpp_codegen_add((float)L_68, (float)(1.5f)));
		// CreateRockObject(sliderPos);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_69 = V_3;
		GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6(__this, L_69, /*hidden argument*/NULL);
	}

IL_020d:
	{
		// prevPosition = newSlider.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_70 = V_4;
		NullCheck(L_70);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_71 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_70, /*hidden argument*/NULL);
		__this->set_prevPosition_11(L_71);
		// for (int i = 0; i < numbSlider; i++)
		int32_t L_72 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_72, (int32_t)1));
	}

IL_0220:
	{
		// for (int i = 0; i < numbSlider; i++)
		int32_t L_73 = V_6;
		int32_t L_74 = V_5;
		if ((((int32_t)L_73) < ((int32_t)L_74)))
		{
			goto IL_0140;
		}
	}
	{
		// sliderPos.x = 0;
		(&V_3)->set_x_0((0.0f));
		// sliderPos.y += 3f;
		float* L_75 = (&V_3)->get_address_of_y_1();
		float* L_76 = L_75;
		float L_77 = *((float*)L_76);
		*((float*)L_76) = (float)((float)il2cpp_codegen_add((float)L_77, (float)(3.0f)));
		// Instantiate(colourSwapper, sliderPos, Quaternion.identity).transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_78 = __this->get_colourSwapper_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_79 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_80 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_79, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_81 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_82 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_78, L_80, L_81, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_82);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_83 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_82, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_84 = __this->get_parent_12();
		NullCheck(L_84);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_85 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_84, /*hidden argument*/NULL);
		NullCheck(L_83);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_83, L_85, (bool)0, /*hidden argument*/NULL);
		// prevPosition = newSlider.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_86 = V_4;
		NullCheck(L_86);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_87 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_86, /*hidden argument*/NULL);
		__this->set_prevPosition_11(L_87);
		// PlayerPrefs.SetInt("LevelSwitch", UnityEngine.Random.Range(0, 3));
		int32_t L_88 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 3, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, L_88, /*hidden argument*/NULL);
		// IncreaseSpeedComponant(levelSwitch);
		int32_t L_89 = V_0;
		GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9(__this, L_89, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0297:
	{
		// Vector2 squarePos = new Vector2(0, 0);
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((Vector2_tA85D2DD88578276CA8A8796756458277E72D073D *)(&V_7), (0.0f), (0.0f), /*hidden argument*/NULL);
		// GameObject newSquare = null;
		V_8 = (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
		// squarePos = prevPosition.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_90 = __this->get_prevPosition_11();
		NullCheck(L_90);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_91 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_90, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_92 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_91, /*hidden argument*/NULL);
		V_7 = L_92;
		// squarePos.x = 0;
		(&V_7)->set_x_0((0.0f));
		// squarePos.y += 5.5f;
		float* L_93 = (&V_7)->get_address_of_y_1();
		float* L_94 = L_93;
		float L_95 = *((float*)L_94);
		*((float*)L_94) = (float)((float)il2cpp_codegen_add((float)L_95, (float)(5.5f)));
		// newSquare = Instantiate(square, squarePos, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_96 = __this->get_square_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_97 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_98 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_97, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_99 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_100 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_96, L_98, L_99, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_8 = L_100;
		// newSquare.transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_101 = V_8;
		NullCheck(L_101);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_102 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_101, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_103 = __this->get_parent_12();
		NullCheck(L_103);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_104 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_103, /*hidden argument*/NULL);
		NullCheck(L_102);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_102, L_104, (bool)0, /*hidden argument*/NULL);
		// CreateRockObject(squarePos);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_105 = V_7;
		GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6(__this, L_105, /*hidden argument*/NULL);
		// prevPosition = newSquare.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_106 = V_8;
		NullCheck(L_106);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_107 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_106, /*hidden argument*/NULL);
		__this->set_prevPosition_11(L_107);
		// squarePos.y += 2.75f;
		float* L_108 = (&V_7)->get_address_of_y_1();
		float* L_109 = L_108;
		float L_110 = *((float*)L_109);
		*((float*)L_109) = (float)((float)il2cpp_codegen_add((float)L_110, (float)(2.75f)));
		// Instantiate(colourSwapper, squarePos, Quaternion.identity).transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_111 = __this->get_colourSwapper_8();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_112 = V_7;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_113 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_112, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_114 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_115 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_111, L_113, L_114, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_115);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_116 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_115, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_117 = __this->get_parent_12();
		NullCheck(L_117);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_118 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_117, /*hidden argument*/NULL);
		NullCheck(L_116);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_116, L_118, (bool)0, /*hidden argument*/NULL);
		// prevPosition = newSquare.transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_119 = V_8;
		NullCheck(L_119);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_120 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_119, /*hidden argument*/NULL);
		__this->set_prevPosition_11(L_120);
		// PlayerPrefs.SetInt("LevelSwitch", UnityEngine.Random.Range(0, 3));
		int32_t L_121 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 3, /*hidden argument*/NULL);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, L_121, /*hidden argument*/NULL);
		// IncreaseSpeedComponant(levelSwitch);
		int32_t L_122 = V_0;
		GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9(__this, L_122, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::IncreaseSpeedComponant(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, int32_t ___levelSwitch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_IncreaseSpeedComponant_mD09696B2F6D640E0B76F3277222BDCE61DEBE4A9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (levelSwitch == 1)
		int32_t L_0 = ___levelSwitch0;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		// DifficultyController.MovementSpeed += 0.001f;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_1 = DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_inline(/*hidden argument*/NULL);
		DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91D_inline(((float)il2cpp_codegen_add((float)L_1, (float)(0.001f))), /*hidden argument*/NULL);
		// }
		return;
	}

IL_0015:
	{
		// if (DifficultyController.RotationSpeed < 0)
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_2 = DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline(/*hidden argument*/NULL);
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0032;
		}
	}
	{
		// DifficultyController.RotationSpeed -= 11.5f;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_3 = DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline(/*hidden argument*/NULL);
		DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_inline(((float)il2cpp_codegen_subtract((float)L_3, (float)(11.5f))), /*hidden argument*/NULL);
		return;
	}

IL_0032:
	{
		// DifficultyController.RotationSpeed += 11.5f;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_4 = DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline(/*hidden argument*/NULL);
		DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_inline(((float)il2cpp_codegen_add((float)L_4, (float)(11.5f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::CreateRockObject(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___position0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_CreateRockObject_mB56BC82F796F11698130024C446303DD01C002E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int obstacle = PlayerPrefs.GetInt("Obstacle");
		int32_t L_0 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral07D1F5C7BB331ED89DE100316F857ACF7D9D6D56, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (obstacle < numberObstacle)
		int32_t L_1 = V_0;
		int32_t L_2 = __this->get_numberObstacle_14();
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0046;
		}
	}
	{
		// Instantiate(scoreRock, position, Quaternion.identity).transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_scoreRock_9();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_3, L_5, L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_7);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_7, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_parent_12();
		NullCheck(L_9);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_8, L_10, (bool)0, /*hidden argument*/NULL);
		// obstacle++;
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		// }
		goto IL_0080;
	}

IL_0046:
	{
		// Instantiate(timeRock, position, Quaternion.identity).transform.SetParent(parent.transform, false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = __this->get_timeRock_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = ___position0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_12, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		NullCheck(L_16);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_16, /*hidden argument*/NULL);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = __this->get_parent_12();
		NullCheck(L_18);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_SetParent_m268E3814921D90882EFECE244A797264DE2A5E35(L_17, L_19, (bool)0, /*hidden argument*/NULL);
		// numberObstacle = SetNewNumberObstacles();
		int32_t L_20 = GameController_SetNewNumberObstacles_m7CC2EA654020C26ACD4530A9E01F2354D949275B(__this, /*hidden argument*/NULL);
		__this->set_numberObstacle_14(L_20);
		// obstacle = 0;
		V_0 = 0;
	}

IL_0080:
	{
		// PlayerPrefs.SetInt("Obstacle", obstacle);
		int32_t L_21 = V_0;
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral07D1F5C7BB331ED89DE100316F857ACF7D9D6D56, L_21, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 GameController::SetNewNumberObstacles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameController_SetNewNumberObstacles_m7CC2EA654020C26ACD4530A9E01F2354D949275B (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		// return UnityEngine.Random.Range(MAX_ROCK_TIME, MAX_ROCK_TIME + 2);
		int32_t L_0 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(6, 8, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void GameController::RestartWithLastPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_RestartWithLastPosition_mEF5251AB55764F142D6AAB9DB3F857A6DAC64325 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_RestartWithLastPosition_mEF5251AB55764F142D6AAB9DB3F857A6DAC64325_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		// float prevComponantPosition = prevPosition.position.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_prevPosition_11();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		V_0 = L_2;
		// float playerPosition = player.gameObject.transform.localPosition.y;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_player_13();
		NullCheck(L_3);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		V_1 = L_7;
		// float newPosition = Math.Abs(prevComponantPosition - playerPosition) > 3 ? playerPosition - 1.8f : prevComponantPosition - 2.55f;
		float L_8 = V_0;
		float L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tFB388E53C7FDC6FCCF9A19ABF5A4E521FBD52E19_il2cpp_TypeInfo_var);
		float L_10 = fabsf(((float)il2cpp_codegen_subtract((float)L_8, (float)L_9)));
		if ((((float)L_10) > ((float)(3.0f))))
		{
			goto IL_0044;
		}
	}
	{
		float L_11 = V_0;
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)L_11, (float)(2.55f)));
		goto IL_004b;
	}

IL_0044:
	{
		float L_12 = V_1;
		G_B3_0 = ((float)il2cpp_codegen_subtract((float)L_12, (float)(1.8f)));
	}

IL_004b:
	{
		V_2 = G_B3_0;
		// player.gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Static;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_player_13();
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = GameObject_get_gameObject_mB8D6D847ABF95430B098554F3F2D63EC1D30C815(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_16 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(L_15, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		NullCheck(L_16);
		Rigidbody2D_set_bodyType_m239CDB6FFA033FD3B5BAC061A3F96DC9264D9900(L_16, 2, /*hidden argument*/NULL);
		// player.transform.position = new Vector2(0, newPosition);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = __this->get_player_13();
		NullCheck(L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_18 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_17, /*hidden argument*/NULL);
		float L_19 = V_2;
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_20), (0.0f), L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_20, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_18, L_21, /*hidden argument*/NULL);
		// MoveCamera.Instance.RepositionCameraPlayer(newPosition);
		MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * L_22 = MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11_inline(/*hidden argument*/NULL);
		float L_23 = V_2;
		NullCheck(L_22);
		MoveCamera_RepositionCameraPlayer_m27D70D1F8FF9B01D745C43E00AFF07EDAB463646(L_22, L_23, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_OnApplicationQuit_m7A627651D4C4F9510B8450DD822E1ECFCA65DE8D (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_OnApplicationQuit_m7A627651D4C4F9510B8450DD822E1ECFCA65DE8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.DeleteKey("LevelSwitch");
		PlayerPrefs_DeleteKey_mE0D76FF284F638715170DB52728B7595B41B6E8C(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m839A9CFB9635B009C1DA139BEAD0E38467E57464 (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MenuController MenuController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MenuController Instance { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_0 = ((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_12();
		return L_0;
	}
}
// System.Void MenuController::set_Instance(MenuController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2B (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MenuController Instance { get; private set; }
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_12(L_0);
		return;
	}
}
// System.Void MenuController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Awake_m2BA2C45DAEA686542A3645086F3552E6EF1AC353 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_Awake_m2BA2C45DAEA686542A3645086F3552E6EF1AC353_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_0 = MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2B_inline(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MenuController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Start_m0377779014F00A3FBE313C3BE89091CBDCBF69B5 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_Start_m0377779014F00A3FBE313C3BE89091CBDCBF69B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// soundToggle.onValueChanged.AddListener(delegate {
		//     ToggleValueChanged(soundToggle);
		// });
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_0 = __this->get_soundToggle_11();
		NullCheck(L_0);
		ToggleEvent_t50D925F8E220FB47DA738411CEF9C57FF7E1DC43 * L_1 = L_0->get_onValueChanged_22();
		UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC * L_2 = (UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC *)il2cpp_codegen_object_new(UnityAction_1_tB994D127B02789CE2010397AEF756615E5F84FDC_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5(L_2, __this, (intptr_t)((intptr_t)MenuController_U3CStartU3Eb__13_0_mB732AF9C71A0F6C345002EBF2D05FC495896149B_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mBB2754F539A754A4BA916AF035A54BCEC7A00CA5_RuntimeMethod_var);
		NullCheck(L_1);
		UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF(L_1, L_2, /*hidden argument*/UnityEvent_1_AddListener_m5A6D7B15EFC39EFA12721981E727CBD81E3051AF_RuntimeMethod_var);
		// if (PlayerPrefs.HasKey("Sound"))
		bool L_3 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteralB4E3EFEBA10E84F7148DA9F7EFE85E07057D7C7A, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// bool toggle = Convert.ToBoolean(PlayerPrefs.GetString("Sound"));
		String_t* L_4 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteralB4E3EFEBA10E84F7148DA9F7EFE85E07057D7C7A, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_5 = Convert_ToBoolean_mBC3AC315D316ED5271A20F82C94A5EC60700648D(L_4, /*hidden argument*/NULL);
		// if (!toggle)
		if (L_5)
		{
			goto IL_0064;
		}
	}
	{
		// soundToggle.isOn = false;
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_6 = __this->get_soundToggle_11();
		NullCheck(L_6);
		Toggle_set_isOn_mCAA660F49688DBA29E896B961E0054154C42EA2B(L_6, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_0064;
	}

IL_0047:
	{
		// PlayerPrefs.SetString("Sound", soundToggle.isOn.ToString());
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_7 = __this->get_soundToggle_11();
		NullCheck(L_7);
		bool L_8 = Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteralB4E3EFEBA10E84F7148DA9F7EFE85E07057D7C7A, L_9, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// PlayerPrefs.SetString("Revive", Boolean.FalseString);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var);
		String_t* L_10 = ((Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields*)il2cpp_codegen_static_fields_for(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var))->get_FalseString_6();
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteral2E08BBD34B71B2C51868FD8E74674B6EA930F523, L_10, /*hidden argument*/NULL);
		// isGamePaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)0);
		// }
		return;
	}
}
// System.Void MenuController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_Update_m5C9652645E5A96F9983D8F4E4936E951DEC509F8 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_Update_m5C9652645E5A96F9983D8F4E4936E951DEC509F8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		// if (isGamePaused)
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		bool L_1 = ((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->get_isGamePaused_4();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// ResumeGame();
		MenuController_ResumeGame_m195D42498CD27A7ACF8D4043B7C63ED5788F2E2E(__this, /*hidden argument*/NULL);
		// }
		goto IL_001e;
	}

IL_0018:
	{
		// PauseGame();
		MenuController_PauseGame_m91D09AF0FF5567F8B7D2BFC62DA82886B8B270BB(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// if (!isGamePaused)
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		bool L_2 = ((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->get_isGamePaused_4();
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		// LaunchTimeCounter();
		MenuController_LaunchTimeCounter_m8EB06A9249882E92B265E1986D51065FC5304A44(__this, /*hidden argument*/NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void MenuController::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ResumeGame_m195D42498CD27A7ACF8D4043B7C63ED5788F2E2E (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_ResumeGame_m195D42498CD27A7ACF8D4043B7C63ED5788F2E2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_pauseMenuUI_5();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((1.0f), /*hidden argument*/NULL);
		// isGamePaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)0);
		// }
		return;
	}
}
// System.Void MenuController::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_PauseGame_m91D09AF0FF5567F8B7D2BFC62DA82886B8B270BB (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_PauseGame_m91D09AF0FF5567F8B7D2BFC62DA82886B8B270BB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pauseMenuUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_pauseMenuUI_5();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		// isGamePaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)1);
		// }
		return;
	}
}
// System.Void MenuController::LaunchTimeCounter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_LaunchTimeCounter_m8EB06A9249882E92B265E1986D51065FC5304A44 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_LaunchTimeCounter_m8EB06A9249882E92B265E1986D51065FC5304A44_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TimeController.Instance != null) {
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_0 = TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// if (TimeController.Instance.CountDownTimer() == 0)
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_2 = TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline(/*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = TimeController_CountDownTimer_mBDC4A74FEC99C2EC057E02118A23C3D9CF17D470(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001f;
		}
	}
	{
		// GameOverDisplay();
		MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void MenuController::GameOverDisplay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// gameOverMenuUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_gameOverMenuUI_6();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// isGamePaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)1);
		// if (PlayerPrefs.HasKey("Score"))
		bool L_1 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_005a;
		}
	}
	{
		// currentScoreText.text = ScoreController.Instance.PlayerScore.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_2 = __this->get_currentScoreText_8();
		ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * L_3 = ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4 = ScoreController_get_PlayerScore_mE6146588E3462307E83878171D468BD231897E92_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_5);
		// highScoreText.text = PlayerPrefs.GetInt("Score").ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_6 = __this->get_highScoreText_9();
		int32_t L_7 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, /*hidden argument*/NULL);
		V_1 = L_7;
		String_t* L_8 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		goto IL_0065;
	}

IL_005a:
	{
		// PlayerPrefs.SetInt("Score", 0);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, 0, /*hidden argument*/NULL);
	}

IL_0065:
	{
		// int timeplayer = TimeController.Instance.PlayerTime;
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_9 = TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline(/*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = TimeController_get_PlayerTime_mA95A5E63C069B7175CB24260E8B5BE6F55D0E3E7_inline(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		// timePlayerText.text = timeplayer.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_11 = __this->get_timePlayerText_10();
		String_t* L_12 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
		// PlayerPrefs.SetInt("Time", timeplayer);
		int32_t L_13 = V_0;
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral6C82E6DD86807EE3DB07E3C82BEC1AE1CE00B08B, L_13, /*hidden argument*/NULL);
		// bool recimRevive = Convert.ToBoolean(PlayerPrefs.GetString("Revive"));
		String_t* L_14 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteral2E08BBD34B71B2C51868FD8E74674B6EA930F523, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		Convert_ToBoolean_mBC3AC315D316ED5271A20F82C94A5EC60700648D(L_14, /*hidden argument*/NULL);
		// int recimScore = PlayerPrefs.GetInt("Score");
		PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, /*hidden argument*/NULL);
		// int recimTime = PlayerPrefs.GetInt("Time");
		PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral6C82E6DD86807EE3DB07E3C82BEC1AE1CE00B08B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::DisplayTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_DisplayTutorial_m60335B2E4A1F7875F9E5743CD504020748B3CFA7 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// tutorialMenuUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_tutorialMenuUI_7();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::CloseTutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_CloseTutorial_m0BDBAAF395A778F59F0A40D85CE0BDAD6E7AF5F4 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// tutorialMenuUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_tutorialMenuUI_7();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::ToggleValueChanged(UnityEngine.UI.Toggle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ToggleValueChanged_m5A1581483C3296198AF50261FBB9CCD93F9BC750 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * ___change0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_ToggleValueChanged_m5A1581483C3296198AF50261FBB9CCD93F9BC750_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// PlayerPrefs.SetString("Sound", soundToggle.isOn.ToString());
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_0 = __this->get_soundToggle_11();
		NullCheck(L_0);
		bool L_1 = Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Boolean_ToString_m62D1EFD5F6D5F6B6AF0D14A07BF5741C94413301((bool*)(&V_0), /*hidden argument*/NULL);
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteralB4E3EFEBA10E84F7148DA9F7EFE85E07057D7C7A, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::ReplayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ReplayGame_m55FCD9E8F4F0275219E03F28AA33290B7C844D14 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_ReplayGame_m55FCD9E8F4F0275219E03F28AA33290B7C844D14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool revive = Convert.ToBoolean(PlayerPrefs.GetString("Revive"));
		String_t* L_0 = PlayerPrefs_GetString_m3031AD2D5DEAB97677A9EF629618541437F079F1(_stringLiteral2E08BBD34B71B2C51868FD8E74674B6EA930F523, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1C7A851BFB2F0782FD7F72F6AA1DCBB7B53A9C7E_il2cpp_TypeInfo_var);
		bool L_1 = Convert_ToBoolean_mBC3AC315D316ED5271A20F82C94A5EC60700648D(L_0, /*hidden argument*/NULL);
		// if (!revive)
		if (L_1)
		{
			goto IL_0050;
		}
	}
	{
		// if (isVideoWatched())
		bool L_2 = MenuController_isVideoWatched_mC8458A183D808822E1D03E6B99440CA81903CE80(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0056;
		}
	}
	{
		// isGamePaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)0);
		// gameOverMenuUI.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = __this->get_gameOverMenuUI_6();
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Revive", Boolean.TrueString);
		IL2CPP_RUNTIME_CLASS_INIT(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var);
		String_t* L_4 = ((Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields*)il2cpp_codegen_static_fields_for(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var))->get_TrueString_5();
		PlayerPrefs_SetString_m7AC4E332A5DCA04E0AD91544AF836744BA8C2583(_stringLiteral2E08BBD34B71B2C51868FD8E74674B6EA930F523, L_4, /*hidden argument*/NULL);
		// TimeController.Instance.RestartTimePlay();
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_5 = TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline(/*hidden argument*/NULL);
		NullCheck(L_5);
		TimeController_RestartTimePlay_m30F7E0B00E551FE8DD2AE85591F08F2B3311C800(L_5, /*hidden argument*/NULL);
		// GameController.Instance.RestartWithLastPosition();
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_6 = GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_inline(/*hidden argument*/NULL);
		NullCheck(L_6);
		GameController_RestartWithLastPosition_mEF5251AB55764F142D6AAB9DB3F857A6DAC64325(L_6, /*hidden argument*/NULL);
		// }
		goto IL_0056;
	}

IL_0050:
	{
		// ResetGame();
		MenuController_ResetGame_m12781ABA447E3F3BEA6460A965F16B5BFDF4DC6D(__this, /*hidden argument*/NULL);
	}

IL_0056:
	{
		// Time.timeScale = 1f;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((1.0f), /*hidden argument*/NULL);
		// isGamePaused = false;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)0);
		// }
		return;
	}
}
// System.Boolean MenuController::isVideoWatched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MenuController_isVideoWatched_mC8458A183D808822E1D03E6B99440CA81903CE80 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// return true;
		return (bool)1;
	}
}
// System.Void MenuController::ResetGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_ResetGame_m12781ABA447E3F3BEA6460A965F16B5BFDF4DC6D (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_ResetGame_m12781ABA447E3F3BEA6460A965F16B5BFDF4DC6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// PlayerPrefs.DeleteKey("LevelSwitch");
		PlayerPrefs_DeleteKey_mE0D76FF284F638715170DB52728B7595B41B6E8C(_stringLiteral7270A5D53EFF41E3179AECDF576B97CDCA3CE7DE, /*hidden argument*/NULL);
		// DifficultyController dc = new DifficultyController();
		DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * L_0 = (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF *)il2cpp_codegen_object_new(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		DifficultyController__ctor_mA6B5CBF6B8510E6E426A07B62C8C333A1B7C7026(L_0, /*hidden argument*/NULL);
		// dc.ResetMovementSpeed();
		DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * L_1 = L_0;
		NullCheck(L_1);
		DifficultyController_ResetMovementSpeed_m961600FC51EAA9235BE7D1479EEF11399FB393FD(L_1, /*hidden argument*/NULL);
		// dc.ResetRotationSpeed();
		NullCheck(L_1);
		DifficultyController_ResetRotationSpeed_mB6C19E3B01A1AABE6C20E888D75A8F635AD86367(L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
		Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2  L_2 = SceneManager_GetActiveScene_mD583193D329EBF540D8AB8A062681B1C2AB5EA51(/*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = Scene_get_buildIndex_m764659943B7357F5D6C9165F68EDCFBBDDD6C3C2((Scene_t942E023788C2BC9FBB7EC8356B4FB0088B2CFED2 *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::GoToHomeMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_GoToHomeMenu_m1E688E02D54BFAC47669AFFAB62A94C8C50B032A (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_GoToHomeMenu_m1E688E02D54BFAC47669AFFAB62A94C8C50B032A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// new DifficultyController().ResetRotationSpeed();
		DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF * L_0 = (DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF *)il2cpp_codegen_object_new(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		DifficultyController__ctor_mA6B5CBF6B8510E6E426A07B62C8C333A1B7C7026(L_0, /*hidden argument*/NULL);
		NullCheck(L_0);
		DifficultyController_ResetRotationSpeed_mB6C19E3B01A1AABE6C20E888D75A8F635AD86367(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("HomeMenu", LoadSceneMode.Single);
		SceneManager_LoadScene_m9721867D46BC827D58271AD235267B0B0865F115(_stringLiteral282050346C635D829CD0A4C25FC352FD525C27BB, 0, /*hidden argument*/NULL);
		// Time.timeScale = 1f;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((1.0f), /*hidden argument*/NULL);
		// isGamePaused = true;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_isGamePaused_4((bool)1);
		// }
		return;
	}
}
// System.Void MenuController::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_PlayGame_mA572DBB0153FC188DA1A3ED2A157927C1B069129 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_PlayGame_mA572DBB0153FC188DA1A3ED2A157927C1B069129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("MainGame", LoadSceneMode.Single);
		SceneManager_LoadScene_m9721867D46BC827D58271AD235267B0B0865F115(_stringLiteralAD9E5DAAD617BCBC21AA8BAFEE5EC88799E6097E, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_QuitGame_m00CC508C2D9C3C5194C0674938244E7AB8332190 (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MenuController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__ctor_m0A49072B3618F238E83C251C33488007F711316E (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController__cctor_mA9E3A8D15DD26C76A1527D8E1FA168C797CD8925 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MenuController::<Start>b__13_0(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MenuController_U3CStartU3Eb__13_0_mB732AF9C71A0F6C345002EBF2D05FC495896149B (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * __this, bool ___U3Cp0U3E0, const RuntimeMethod* method)
{
	{
		// ToggleValueChanged(soundToggle);
		Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * L_0 = __this->get_soundToggle_11();
		MenuController_ToggleValueChanged_m5A1581483C3296198AF50261FBB9CCD93F9BC750(__this, L_0, /*hidden argument*/NULL);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// MoveCamera MoveCamera::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MoveCamera Instance { get; private set; }
		MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * L_0 = ((MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_StaticFields*)il2cpp_codegen_static_fields_for(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void MoveCamera::set_Instance(MoveCamera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348 (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MoveCamera Instance { get; private set; }
		MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * L_0 = ___value0;
		((MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_StaticFields*)il2cpp_codegen_static_fields_for(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void MoveCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera_Awake_mE654527061FF70020E507A5EF313CC6C8F25BD2A (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveCamera_Awake_mE654527061FF70020E507A5EF313CC6C8F25BD2A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * L_0 = MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348_inline(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void MoveCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera_Update_m80BBBC728F4AB1260B929A348622EF70A3A38D27 (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * __this, const RuntimeMethod* method)
{
	{
		// if (playerObject.position.y > transform.position.y)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_playerObject_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		if ((!(((float)L_2) > ((float)L_5))))
		{
			goto IL_0062;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, playerObject.position.y, transform.position.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = __this->get_playerObject_4();
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_13 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_13, /*hidden argument*/NULL);
		float L_15 = L_14.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_16), L_9, L_12, L_15, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_16, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void MoveCamera::RepositionCameraPlayer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera_RepositionCameraPlayer_m27D70D1F8FF9B01D745C43E00AFF07EDAB463646 (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * __this, float ___positionComponant0, const RuntimeMethod* method)
{
	{
		// if (playerObject.position.y <= transform.position.y - 5.0f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_playerObject_4();
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		if ((!(((float)L_2) <= ((float)((float)il2cpp_codegen_subtract((float)L_5, (float)(5.0f)))))))
		{
			goto IL_0059;
		}
	}
	{
		// transform.position = new Vector3(transform.position.x, positionComponant , transform.position.z);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		float L_9 = L_8.get_x_2();
		float L_10 = ___positionComponant0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_z_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_14), L_9, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_14, /*hidden argument*/NULL);
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Void MoveCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveCamera__ctor_mA8404A3902E86503C2A3F61CCEB4272A8E8E1345 (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mE9ACCAA7FEBF4020693FFB73C0839CF3AAD0B0C4 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Jump") || Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.UpArrow))
		bool L_0 = Input_GetButtonDown_m1E80BAC5CCBE9E0151491B8F8F5FFD6AB050BBF0(_stringLiteral1EBA140FDD9C6860A1730C408E3064AA417CA2A3, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		bool L_1 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		bool L_2 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)273), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005b;
		}
	}

IL_0020:
	{
		// AudioController.Instance.playTapClip();
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_3 = AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline(/*hidden argument*/NULL);
		NullCheck(L_3);
		AudioController_playTapClip_mB0BB5A423F50D909873BD970522EF9F65A1F4023(L_3, /*hidden argument*/NULL);
		// gameObject.transform.GetComponent<Rigidbody2D>().bodyType = RigidbodyType2D.Dynamic;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_6 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(L_5, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		NullCheck(L_6);
		Rigidbody2D_set_bodyType_m239CDB6FFA033FD3B5BAC061A3F96DC9264D9900(L_6, 0, /*hidden argument*/NULL);
		// rb.velocity = Vector2.up * jumpSpeed;
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_7 = __this->get_rb_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_8 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_9 = __this->get_jumpSpeed_4();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_10 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_7, L_10, /*hidden argument*/NULL);
	}

IL_005b:
	{
		// if (transform.position.y < fallThreshold)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_11 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		float L_14 = __this->get_fallThreshold_5();
		if ((!(((float)L_13) < ((float)L_14))))
		{
			goto IL_007d;
		}
	}
	{
		// MenuController.Instance.GameOverDisplay();
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_15 = MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_inline(/*hidden argument*/NULL);
		NullCheck(L_15);
		MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46(L_15, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		// private float jumpSpeed = 10.0f;
		__this->set_jumpSpeed_4((10.0f));
		// private float fallThreshold = -5.0f;
		__this->set_fallThreshold_5((-5.0f));
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 PlayerCollider::get_ScoreValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerCollider_get_ScoreValue_mB56B773A6345295DA53F110FD5E7AD849E1BECC9 (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method)
{
	{
		// public int ScoreValue { get { return scoreValue; } }
		int32_t L_0 = __this->get_scoreValue_5();
		return L_0;
	}
}
// System.Void PlayerCollider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider_Start_m9C6BEDFA722DB719F5A14FE4C47E0C7094CFEE47 (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCollider_Start_m9C6BEDFA722DB719F5A14FE4C47E0C7094CFEE47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject player = GameObject.Find("Player");
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = GameObject_Find_m1470FB04EB6DB15CCC0D9745B70EE987B318E9BD(_stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		V_0 = L_0;
		// sr = player.GetComponent<SpriteRenderer>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = V_0;
		NullCheck(L_1);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_2 = GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538(L_1, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F_mD25CEAAA219FA1235F8E88F914D2F8AC57303538_RuntimeMethod_var);
		__this->set_sr_4(L_2);
		// }
		return;
	}
}
// System.Void PlayerCollider::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider_OnTriggerEnter2D_m0B668733B754D5F7179329815EC402A840FA6C1B (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCollider_OnTriggerEnter2D_m0B668733B754D5F7179329815EC402A840FA6C1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.tag == "ChangeColour")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteral05AEC50720FBC9368ED37C04D1064B0FD1F3631B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// ColourManager.Instance.setPlayerColour();
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_4 = ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_inline(/*hidden argument*/NULL);
		NullCheck(L_4);
		ColourManager_setPlayerColour_m7DA3BB53C179019FAE7E03DB3D5167E033E4231E(L_4, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_5 = ___collision0;
		NullCheck(L_5);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_6, /*hidden argument*/NULL);
		// GameController.Instance.createGameObjects();
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_7 = GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_inline(/*hidden argument*/NULL);
		NullCheck(L_7);
		GameController_createGameObjects_m70C9915680BE0D74187C7F4C59A7ECBB958BE527(L_7, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0037:
	{
		// if (collision.gameObject.tag == "Rock")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_9, /*hidden argument*/NULL);
		bool L_11 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_10, _stringLiteral468D79C2E0229E3EF8A5592B4DF3E148050FB828, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_006a;
		}
	}
	{
		// AudioController.Instance.playCollectRockClip();
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_12 = AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline(/*hidden argument*/NULL);
		NullCheck(L_12);
		AudioController_playCollectRockClip_m621B32346B4AC9DA3D9290B9CC5822E776F443C5(L_12, /*hidden argument*/NULL);
		// PublishRockCollectedEvent();
		PlayerCollider_PublishRockCollectedEvent_mF353BE6550596EE2470533F59E11A04BDE00F598(__this, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_13 = ___collision0;
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_14, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_006a:
	{
		// if (collision.gameObject.tag == "Timer")
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_15 = ___collision0;
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		String_t* L_17 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_16, /*hidden argument*/NULL);
		bool L_18 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_17, _stringLiteral9D9CEC22F36FD2BB99D5FE8C4723347BEC202CA5, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009e;
		}
	}
	{
		// AudioController.Instance.playCollectRockClip();
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_19 = AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline(/*hidden argument*/NULL);
		NullCheck(L_19);
		AudioController_playCollectRockClip_m621B32346B4AC9DA3D9290B9CC5822E776F443C5(L_19, /*hidden argument*/NULL);
		// PublishTimeCollectedEvent(collision);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_20 = ___collision0;
		PlayerCollider_PublishTimeCollectedEvent_m24831AB766EAEB6ED242F7E6FAFCB098D4C931DF(__this, L_20, /*hidden argument*/NULL);
		// Destroy(collision.gameObject);
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_21 = ___collision0;
		NullCheck(L_21);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_22, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_009e:
	{
		// if (collision.tag != sr.tag)
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_23 = ___collision0;
		NullCheck(L_23);
		String_t* L_24 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_23, /*hidden argument*/NULL);
		SpriteRenderer_tCD51E875611195DBB91123B68434881D3441BC6F * L_25 = __this->get_sr_4();
		NullCheck(L_25);
		String_t* L_26 = Component_get_tag_mA183075586ED6BFA81D303804359AE6B02C477CC(L_25, /*hidden argument*/NULL);
		bool L_27 = String_op_Inequality_m0BD184A74F453A72376E81CC6CAEE2556B80493E(L_24, L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d5;
		}
	}
	{
		// AudioController.Instance.playPlayerDiesClip();
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_28 = AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline(/*hidden argument*/NULL);
		NullCheck(L_28);
		AudioController_playPlayerDiesClip_mBE5FC10229CAEB8BB33D0FBB1EB9DC4528BD212A(L_28, /*hidden argument*/NULL);
		// Time.timeScale = 0f;
		Time_set_timeScale_mAB89C3BB5DEE81934159C23F103397A77AC3F4AF((0.0f), /*hidden argument*/NULL);
		// MenuController.Instance.GameOverDisplay();
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_29 = MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_inline(/*hidden argument*/NULL);
		NullCheck(L_29);
		MenuController_GameOverDisplay_m89374731FCC1F841E770393B86F2274F64E50B46(L_29, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.Void PlayerCollider::PublishRockCollectedEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider_PublishRockCollectedEvent_mF353BE6550596EE2470533F59E11A04BDE00F598 (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCollider_PublishRockCollectedEvent_mF353BE6550596EE2470533F59E11A04BDE00F598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (RockCollectedEvent != null)
		RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * L_0 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_RockCollectedEvent_6();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// RockCollectedEvent(this);
		RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * L_1 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_RockCollectedEvent_6();
		NullCheck(L_1);
		RockCollected_Invoke_m7E902879C79011D37A3E022A9334EA01AF9EA00C(L_1, __this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void PlayerCollider::PublishTimeCollectedEvent(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider_PublishTimeCollectedEvent_m24831AB766EAEB6ED242F7E6FAFCB098D4C931DF (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCollider_PublishTimeCollectedEvent_m24831AB766EAEB6ED242F7E6FAFCB098D4C931DF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (TimeCollectedEvent != null)
		TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * L_0 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_TimeCollectedEvent_7();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// TimeCollectedEvent(collision);
		TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * L_1 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_TimeCollectedEvent_7();
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_2 = ___collision0;
		NullCheck(L_1);
		TimeCollected_Invoke_mEB75C1650A834520267AF764BCEB0FDE52B62A31(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void PlayerCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollider__ctor_m28193152BEE8A859C78E89BF118ACC0429D19067 (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method)
{
	{
		// private int scoreValue = 1;
		__this->set_scoreValue_5(1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerCollider_RockCollected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RockCollected__ctor_m387C0A780F2D41FA0CE82FA1DB8A6205D77B2BDA (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayerCollider_RockCollected::Invoke(PlayerCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RockCollected_Invoke_m7E902879C79011D37A3E022A9334EA01AF9EA00C (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * __this, PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * ___pc0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pc0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___pc0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___pc0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___pc0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___pc0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___pc0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___pc0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___pc0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * >::Invoke(targetMethod, targetThis, ___pc0);
					else
						GenericVirtActionInvoker1< PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * >::Invoke(targetMethod, targetThis, ___pc0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___pc0);
					else
						VirtActionInvoker1< PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___pc0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___pc0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___pc0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult PlayerCollider_RockCollected::BeginInvoke(PlayerCollider,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RockCollected_BeginInvoke_mC9D5C270C56F558F4C33184AFA5749D9215B74BC (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * __this, PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * ___pc0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___pc0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void PlayerCollider_RockCollected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RockCollected_EndInvoke_mBB2089A8F9308D091AAE7E32A8F51F0F0E496BBB (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void PlayerCollider_TimeCollected::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeCollected__ctor_m9DC0DDC70367A844AE1FEC5C739F357D0BF65445 (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void PlayerCollider_TimeCollected::Invoke(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeCollected_Invoke_mEB75C1650A834520267AF764BCEB0FDE52B62A31 (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collision0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___collision0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___collision0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___collision0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___collision0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___collision0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___collision0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___collision0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(targetMethod, targetThis, ___collision0);
					else
						GenericVirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(targetMethod, targetThis, ___collision0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___collision0);
					else
						VirtActionInvoker1< Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___collision0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___collision0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___collision0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult PlayerCollider_TimeCollected::BeginInvoke(UnityEngine.Collider2D,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TimeCollected_BeginInvoke_m10F52EB5E6D798314493B9B3417ACE34B8FB33E8 (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collision0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void PlayerCollider_TimeCollected::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeCollected_EndInvoke_m2EA61786C9ACE3029329FCF95A73ACA268369F2D (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 ScoreController::get_PlayerScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScoreController_get_PlayerScore_mE6146588E3462307E83878171D468BD231897E92 (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerScore { get { return playerScore; } }
		int32_t L_0 = __this->get_playerScore_5();
		return L_0;
	}
}
// ScoreController ScoreController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ScoreController Instance { get; private set; }
		ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * L_0 = ((ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_StaticFields*)il2cpp_codegen_static_fields_for(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void ScoreController::set_Instance(ScoreController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603 (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ScoreController Instance { get; private set; }
		ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * L_0 = ___value0;
		((ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_StaticFields*)il2cpp_codegen_static_fields_for(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void ScoreController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_Awake_mD48A07ED56F8B0B62DA696CEAF5FB6348C195F10 (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_Awake_mD48A07ED56F8B0B62DA696CEAF5FB6348C195F10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * L_0 = ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603_inline(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void ScoreController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnEnable_mBA09C282C11130985533AB6FB898C7C549F372E7 (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_OnEnable_mBA09C282C11130985533AB6FB898C7C549F372E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerCollider.RockCollectedEvent += HandleRockCollectedEvent;
		RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * L_0 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_RockCollectedEvent_6();
		RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * L_1 = (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A *)il2cpp_codegen_object_new(RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A_il2cpp_TypeInfo_var);
		RockCollected__ctor_m387C0A780F2D41FA0CE82FA1DB8A6205D77B2BDA(L_1, __this, (intptr_t)((intptr_t)ScoreController_HandleRockCollectedEvent_m9875FC8F691C8115CBDB23CAEFBA83B7D287019B_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_0, L_1, /*hidden argument*/NULL);
		((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->set_RockCollectedEvent_6(((RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A *)CastclassSealed((RuntimeObject*)L_2, RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ScoreController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_OnDisable_mD5310926925AA68C4687859F4DAE34429405673D (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_OnDisable_mD5310926925AA68C4687859F4DAE34429405673D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerCollider.RockCollectedEvent -= HandleRockCollectedEvent;
		RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * L_0 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_RockCollectedEvent_6();
		RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A * L_1 = (RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A *)il2cpp_codegen_object_new(RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A_il2cpp_TypeInfo_var);
		RockCollected__ctor_m387C0A780F2D41FA0CE82FA1DB8A6205D77B2BDA(L_1, __this, (intptr_t)((intptr_t)ScoreController_HandleRockCollectedEvent_m9875FC8F691C8115CBDB23CAEFBA83B7D287019B_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_0, L_1, /*hidden argument*/NULL);
		((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->set_RockCollectedEvent_6(((RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A *)CastclassSealed((RuntimeObject*)L_2, RockCollected_t3A2E279590B12037FD466AFCD6E86EA0B8D0465A_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void ScoreController::HandleRockCollectedEvent(PlayerCollider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController_HandleRockCollectedEvent_m9875FC8F691C8115CBDB23CAEFBA83B7D287019B (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * ___pc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_HandleRockCollectedEvent_m9875FC8F691C8115CBDB23CAEFBA83B7D287019B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerScore += pc.ScoreValue;
		int32_t L_0 = __this->get_playerScore_5();
		PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * L_1 = ___pc0;
		NullCheck(L_1);
		int32_t L_2 = PlayerCollider_get_ScoreValue_mB56B773A6345295DA53F110FD5E7AD849E1BECC9_inline(L_1, /*hidden argument*/NULL);
		__this->set_playerScore_5(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_2)));
		// scoreText.text = playerScore.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_3 = __this->get_scoreText_4();
		int32_t* L_4 = __this->get_address_of_playerScore_5();
		String_t* L_5 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// if (PlayerPrefs.HasKey("Score"))
		bool L_6 = PlayerPrefs_HasKey_mD87D3051ACE7EC6F5B54F4FC9E18572C917CA0D1(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// if (playerScore >= PlayerPrefs.GetInt("Score"))
		int32_t L_7 = __this->get_playerScore_5();
		int32_t L_8 = PlayerPrefs_GetInt_m318D2B42E0FCAF179BF86D6C2353B38A58089BAD(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, /*hidden argument*/NULL);
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_0063;
		}
	}
	{
		// PlayerPrefs.SetInt("Score", playerScore);
		int32_t L_9 = __this->get_playerScore_5();
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, L_9, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// PlayerPrefs.SetInt("Score", 0);
		PlayerPrefs_SetInt_mBF4101DF829B4738CCC293E1C2D173AEE45EFE62(_stringLiteral489F4877244A299131D309F0CA10733C1A41251C, 0, /*hidden argument*/NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void ScoreController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreController__ctor_mF696E9AEDE1200519DF2EEF752C5C1E0810EF649 (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SliderMovementLeft::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMovementLeft_Update_mB6F6BA194CD384F42AB46498DA412A632A700D87 (SliderMovementLeft_tAFC142FF1E98B41C7C719362D888157C6E1B40F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SliderMovementLeft_Update_mB6F6BA194CD384F42AB46498DA412A632A700D87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position -= new Vector3(DifficultyController.MovementSpeed, 0, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = L_0;
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_3 = DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_inline(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_5, /*hidden argument*/NULL);
		// if (transform.position.x < 2.8f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		if ((!(((float)L_8) < ((float)(2.8f)))))
		{
			goto IL_006b;
		}
	}
	{
		// transform.position = new Vector3(8.45f, transform.position.y, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (8.45f), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_9, L_13, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void SliderMovementLeft::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMovementLeft__ctor_mC45D7E89E7DD76DCDBC55F9C877DD72B25ED975F (SliderMovementLeft_tAFC142FF1E98B41C7C719362D888157C6E1B40F5 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SliderMovementRight::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMovementRight_Update_m4D1D4BFB67CE128D2196D00C46123E5F19CEC88B (SliderMovementRight_tAF632AF1D4DB140A7F7770490887E1F5341A5625 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SliderMovementRight_Update_m4D1D4BFB67CE128D2196D00C46123E5F19CEC88B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.position += new Vector3(DifficultyController.MovementSpeed, 0, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = L_0;
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_3 = DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_inline(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_4), L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_2, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_1, L_5, /*hidden argument*/NULL);
		// if (transform.position.x > 8.45f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		if ((!(((float)L_8) > ((float)(8.45f)))))
		{
			goto IL_006b;
		}
	}
	{
		// transform.position = new Vector3(2.8f, transform.position.y, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_13), (2.8f), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_9, L_13, /*hidden argument*/NULL);
	}

IL_006b:
	{
		// }
		return;
	}
}
// System.Void SliderMovementRight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderMovementRight__ctor_m697D756203F9F9E2AED02AF1BA463899E9C5EEEF (SliderMovementRight_tAF632AF1D4DB140A7F7770490887E1F5341A5625 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void SpinnerRotator::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerRotator_Start_mEA94CD93D27B038275EDF2C3E5056BEE13910A15 (SpinnerRotator_t583DFFC87FEEC07C51F93F33CC4FD112E4447002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpinnerRotator_Start_mEA94CD93D27B038275EDF2C3E5056BEE13910A15_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int randomDirection = Random.Range(0, 2);
		int32_t L_0 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 2, /*hidden argument*/NULL);
		// if (randomDirection == 1)
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}
	{
		// DifficultyController.RotationSpeed *= -1;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_1 = DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline(/*hidden argument*/NULL);
		DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_inline(((float)il2cpp_codegen_multiply((float)L_1, (float)(-1.0f))), /*hidden argument*/NULL);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void SpinnerRotator::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerRotator_Update_mF93CFCDCE799A74A4CD195DC276FD6BF948B585A (SpinnerRotator_t583DFFC87FEEC07C51F93F33CC4FD112E4447002 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpinnerRotator_Update_mF93CFCDCE799A74A4CD195DC276FD6BF948B585A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Rotate(0f, 0f, DifficultyController.RotationSpeed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_1 = DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline(/*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Rotate_mEEA80F3DA5A4C93611D7165DF54763E578477EF9(L_0, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpinnerRotator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinnerRotator__ctor_m83D6D1A71ABB64696328C98463C2D42CAD6704DC (SpinnerRotator_t583DFFC87FEEC07C51F93F33CC4FD112E4447002 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 TimeController::get_PlayerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeController_get_PlayerTime_mA95A5E63C069B7175CB24260E8B5BE6F55D0E3E7 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerTime { get { return playerTime; } }
		int32_t L_0 = __this->get_playerTime_7();
		return L_0;
	}
}
// TimeController TimeController::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeController Instance { get; private set; }
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_0 = ((TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_StaticFields*)il2cpp_codegen_static_fields_for(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_11();
		return L_0;
	}
}
// System.Void TimeController::set_Instance(TimeController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeController Instance { get; private set; }
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_0 = ___value0;
		((TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_StaticFields*)il2cpp_codegen_static_fields_for(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_11(L_0);
		return;
	}
}
// System.Void TimeController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_Awake_m9ECBA6F92B3DAB5771CDA168B1FCBE580B913F90 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_Awake_m9ECBA6F92B3DAB5771CDA168B1FCBE580B913F90_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Instance == null)
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_0 = TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// Instance = this;
		TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059_inline(__this, /*hidden argument*/NULL);
	}

IL_0013:
	{
		// }
		return;
	}
}
// System.Void TimeController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_OnEnable_mB54075F6509BFD3608FA1022E69CA3B1DCD970FF (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_OnEnable_mB54075F6509BFD3608FA1022E69CA3B1DCD970FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerCollider.TimeCollectedEvent += HandleTimeCollectedEvent;
		TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * L_0 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_TimeCollectedEvent_7();
		TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * L_1 = (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E *)il2cpp_codegen_object_new(TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E_il2cpp_TypeInfo_var);
		TimeCollected__ctor_m9DC0DDC70367A844AE1FEC5C739F357D0BF65445(L_1, __this, (intptr_t)((intptr_t)TimeController_HandleTimeCollectedEvent_m0BEAB8343EBDDF2F065CBF7B68F4565BBEB7020A_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_0, L_1, /*hidden argument*/NULL);
		((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->set_TimeCollectedEvent_7(((TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E *)CastclassSealed((RuntimeObject*)L_2, TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Void TimeController::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_OnDisable_m617E9D3E8576C0712CBCEC3B4F88D4FD111FDEAE (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_OnDisable_m617E9D3E8576C0712CBCEC3B4F88D4FD111FDEAE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerCollider.TimeCollectedEvent -= HandleTimeCollectedEvent;
		TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * L_0 = ((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->get_TimeCollectedEvent_7();
		TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E * L_1 = (TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E *)il2cpp_codegen_object_new(TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E_il2cpp_TypeInfo_var);
		TimeCollected__ctor_m9DC0DDC70367A844AE1FEC5C739F357D0BF65445(L_1, __this, (intptr_t)((intptr_t)TimeController_HandleTimeCollectedEvent_m0BEAB8343EBDDF2F065CBF7B68F4565BBEB7020A_RuntimeMethod_var), /*hidden argument*/NULL);
		Delegate_t * L_2 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_0, L_1, /*hidden argument*/NULL);
		((PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_StaticFields*)il2cpp_codegen_static_fields_for(PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648_il2cpp_TypeInfo_var))->set_TimeCollectedEvent_7(((TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E *)CastclassSealed((RuntimeObject*)L_2, TimeCollected_t8C9AEAAA5216E30E1BD35080B106C3D50C03BF2E_il2cpp_TypeInfo_var)));
		// }
		return;
	}
}
// System.Int32 TimeController::CountDownTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeController_CountDownTimer_mBDC4A74FEC99C2EC057E02118A23C3D9CF17D470 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// timer -= Time.deltaTime;
		float L_0 = __this->get_timer_6();
		float L_1 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timer_6(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// gameTimer += Time.deltaTime;
		float L_2 = __this->get_gameTimer_5();
		float L_3 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_gameTimer_5(((float)il2cpp_codegen_add((float)L_2, (float)L_3)));
		// playerTime = (int)gameTimer % 1000;
		float L_4 = __this->get_gameTimer_5();
		__this->set_playerTime_7(((int32_t)((int32_t)(((int32_t)((int32_t)L_4)))%(int32_t)((int32_t)1000))));
		// int result = ConvertInSeconds(timer);
		float L_5 = __this->get_timer_6();
		int32_t L_6 = TimeController_ConvertInSeconds_m0B5418B38B7B553BF2D023B4A64C2698A4DBB4FB(__this, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// UpdateTimeField(result);
		int32_t L_7 = V_0;
		TimeController_UpdateTimeField_m1C5D5700A9251511B4442E879CBC815A65F3FA7A(__this, L_7, /*hidden argument*/NULL);
		// return result;
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Int32 TimeController::ConvertInSeconds(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeController_ConvertInSeconds_m0B5418B38B7B553BF2D023B4A64C2698A4DBB4FB (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		// int timeSeconds = (int) timer % 1000;
		float L_0 = __this->get_timer_6();
		// return timeSeconds + TIMING;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)L_0)))%(int32_t)((int32_t)1000))), (int32_t)((int32_t)120)));
	}
}
// System.Void TimeController::HandleTimeCollectedEvent(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_HandleTimeCollectedEvent_m0BEAB8343EBDDF2F065CBF7B68F4565BBEB7020A (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	{
		// timer += TIME_BONUS;
		float L_0 = __this->get_timer_6();
		__this->set_timer_6(((float)il2cpp_codegen_add((float)L_0, (float)(10.0f))));
		// }
		return;
	}
}
// System.Void TimeController::RestartTimePlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_RestartTimePlay_m30F7E0B00E551FE8DD2AE85591F08F2B3311C800 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	{
		// if (ConvertInSeconds(timer) == 0) {
		float L_0 = __this->get_timer_6();
		int32_t L_1 = TimeController_ConvertInSeconds_m0B5418B38B7B553BF2D023B4A64C2698A4DBB4FB(__this, L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// timer += RESTART_TIME;
		float L_2 = __this->get_timer_6();
		__this->set_timer_6(((float)il2cpp_codegen_add((float)L_2, (float)(20.0f))));
	}

IL_0020:
	{
		// }
		return;
	}
}
// System.Void TimeController::UpdateTimeField(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController_UpdateTimeField_m1C5D5700A9251511B4442E879CBC815A65F3FA7A (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, int32_t ___time0, const RuntimeMethod* method)
{
	{
		// TimeText.text = time.ToString();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_0 = __this->get_TimeText_4();
		String_t* L_1 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&___time0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void TimeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeController__ctor_mC1E4821F095ACB90A84AD4B15D1906D28D71F4E5 (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_get_Instance_m24FADBDDA404935B9CA219C54613506EC5633809AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AudioController Instance { get; private set; }
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_0 = ((AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEA_inline (AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioController_set_Instance_m0A943BC85822CD9C27F9657012592DF875CC5FEAAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static AudioController Instance { get; private set; }
		AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338 * L_0 = ___value0;
		((AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_t5F4B72F4CD9846263F5543C2E15F5DACCD4F9338_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_9(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_get_Instance_m463C29CDFEF686B5CE4798C4DD3A2E26DD69E428AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ColourManager Instance { get; private set; }
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_0 = ((ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_StaticFields*)il2cpp_codegen_static_fields_for(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_15();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13_inline (ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ColourManager_set_Instance_m60ED3968ABD5EC4F78947AC9E49F16D066B68D13AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ColourManager Instance { get; private set; }
		ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488 * L_0 = ___value0;
		((ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_StaticFields*)il2cpp_codegen_static_fields_for(ColourManager_tF4B13C8CAA18D7A45D3D23F2BD64E2A7B9FFB488_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_get_Instance_m09158B7BBCCFF92421E94BF6D92041BEAD10D260AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Instance { get; private set; }
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = ((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_16();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8_inline (GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_set_Instance_m82EB235C74B908591E4150B2E51D5407603B50E8AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static GameController Instance { get; private set; }
		GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3 * L_0 = ___value0;
		((GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_StaticFields*)il2cpp_codegen_static_fields_for(GameController_t8BB0D3CE8992C95BED5FB508588730F0A74009A3_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_16(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_get_MovementSpeed_mFEFB4B5534BD63D3343F467AFAEFA0FBFD1BC0A9AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return movementSpeed; }
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_movementSpeed_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91D_inline (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_set_MovementSpeed_mFD51F97CD82DBD4B89D1372788270BADE817D91DAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { movementSpeed = value; }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_movementSpeed_7(L_0);
		// set { movementSpeed = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR float DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29F_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_get_RotationSpeed_mCA93A3862C25A8CFC4CC1899426C49F3A2D5C29FAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return rotationSpeed; }
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		float L_0 = ((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->get_rotationSpeed_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01_inline (float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DifficultyController_set_RotationSpeed_mD84BD67AA02B4ED1CDAAC14FC2E84915EE674B01AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { rotationSpeed = value; }
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var);
		((DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_StaticFields*)il2cpp_codegen_static_fields_for(DifficultyController_t826637EAF7855AEBDA5FC51448FE43C5F1C124AF_il2cpp_TypeInfo_var))->set_rotationSpeed_6(L_0);
		// set { rotationSpeed = value; }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveCamera_get_Instance_m661029B8E3002A0CB1D908C9D0426D9F171B6F11AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MoveCamera Instance { get; private set; }
		MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * L_0 = ((MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_StaticFields*)il2cpp_codegen_static_fields_for(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_get_Instance_m8284FA616BAB1F25E260C0DD832D8C1F57DE6D25AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MenuController Instance { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_0 = ((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2B_inline (MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuController_set_Instance_m7BF3EB182C1314817EA2138FC5F5B56FEBCB8B2BAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MenuController Instance { get; private set; }
		MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var);
		((MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_StaticFields*)il2cpp_codegen_static_fields_for(MenuController_t244BC6F4B06B69D85522469F892EA8375E376DA1_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_12(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Toggle_get_isOn_mA34B03BED48C7189F0AB8498F986485B4CD6B44A_inline (Toggle_t9ADD572046F831945ED0E48A01B50FEA1CA52106 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->get_m_IsOn_23();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEF_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_get_Instance_m39505CEF7F57B49E6362E5A5422FA3BAD414DCEFAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeController Instance { get; private set; }
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_0 = ((TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_StaticFields*)il2cpp_codegen_static_fields_for(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_get_Instance_mAE2C79B6262154A1D28753B22A37E64F60367FE3AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ScoreController Instance { get; private set; }
		ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * L_0 = ((ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_StaticFields*)il2cpp_codegen_static_fields_for(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_il2cpp_TypeInfo_var))->get_U3CInstanceU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t ScoreController_get_PlayerScore_mE6146588E3462307E83878171D468BD231897E92_inline (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerScore { get { return playerScore; } }
		int32_t L_0 = __this->get_playerScore_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t TimeController_get_PlayerTime_mA95A5E63C069B7175CB24260E8B5BE6F55D0E3E7_inline (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * __this, const RuntimeMethod* method)
{
	{
		// public int PlayerTime { get { return playerTime; } }
		int32_t L_0 = __this->get_playerTime_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348_inline (MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveCamera_set_Instance_mC4F5377796BF62543673CCE9D6800BB0CF578348AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static MoveCamera Instance { get; private set; }
		MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717 * L_0 = ___value0;
		((MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_StaticFields*)il2cpp_codegen_static_fields_for(MoveCamera_t4AAFFD5563F6281CDC5A4A6DE319AD10CD8C1717_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603_inline (ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScoreController_set_Instance_mC84505997C139EE5DC5AAA36BFBD880652AEB603AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static ScoreController Instance { get; private set; }
		ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207 * L_0 = ___value0;
		((ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_StaticFields*)il2cpp_codegen_static_fields_for(ScoreController_t922A5B08EFA00C15E3A48C8AD2C0729E9B2D5207_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t PlayerCollider_get_ScoreValue_mB56B773A6345295DA53F110FD5E7AD849E1BECC9_inline (PlayerCollider_t14EEF9FFBE79409E3AA01655640ACF64D27A9648 * __this, const RuntimeMethod* method)
{
	{
		// public int ScoreValue { get { return scoreValue; } }
		int32_t L_0 = __this->get_scoreValue_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059_inline (TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeController_set_Instance_m6BCA65C6DA846BC33C50E9DD874A6CDC8289A059AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static TimeController Instance { get; private set; }
		TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8 * L_0 = ___value0;
		((TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_StaticFields*)il2cpp_codegen_static_fields_for(TimeController_tB89B0D556CE1C0A63D39D2BC1FC59BF6E45F72F8_il2cpp_TypeInfo_var))->set_U3CInstanceU3Ek__BackingField_11(L_0);
		return;
	}
}
