#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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

// Enemy
struct Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627;
// EnemyFollow
struct EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424;
// EnemySpawner
struct EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E;
// DitzelGames.FastIK.FastIKFabric
struct FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8;
// DitzelGames.FastIK.FastIKLook
struct FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameController
struct GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274;
// GameOver
struct GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582;
// Health
struct Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96;
// HeartSlot
struct HeartSlot_t0FB8096562C3C762DECEB4D8416D7020709EEAAE;
// HighScore
struct HighScore_tE521702BF43BC092726A498168F5E00DAC878753;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_t4D7C2C115C9A65FB6B24304700B1E9167410EB54;
// Inventory
struct Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805;
// LegMovement
struct LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76;
// Menu
struct Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6;
// MouseLook
struct MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA;
// ObjectPooler
struct ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C;
// Player
struct Player_t5689617909B48F7640EA0892D85C92C13CC22C6F;
// PlayerManager
struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// PowerUp
struct PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3;
// PowerUpSpawner
struct PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D;
// Readme
struct Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// Rifle
struct Rifle_t7E89F5AC8ADD1399D3A37B9627ECE964275379E5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityTemplateProjects.SimpleCameraController
struct SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2;
// Speed
struct Speed_tD8F11577123FC649C83FC5E2B1ABA56A720DC895;
// SpiderMovement
struct SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E;
// TMPro.TMP_Character
struct TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714;
// TMPro.TMP_Style
struct TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E;
// TMPro.TMP_TextElement
struct TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547;
// UI
struct UI_t3E798C446A347CD6BDC09248946045F3D3DE3376;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Weapon
struct Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// GameController/<ExitToMainMenu>d__13
struct U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Player/<StarSpeedPowerUpTime>d__3
struct U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53;
// Readme/Section
struct Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D;
// UnityTemplateProjects.SimpleCameraController/CameraState
struct CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Decimal[]
struct DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF;
// LegMovement[]
struct LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// Readme/Section[]
struct SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552;
// TMPro.TMP_Text
struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548;

IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC;
IL2CPP_EXTERN_C String_t* _stringLiteral35273EF570E955E417841668D4DF01E317817BD6;
IL2CPP_EXTERN_C String_t* _stringLiteral3FBFABE4A45ED2780DB67B940DF06B09D18C5BA3;
IL2CPP_EXTERN_C String_t* _stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral6724752CB487F8CB8CFE53574AAB2AFC0D14D72A;
IL2CPP_EXTERN_C String_t* _stringLiteral68B8DEBED212A277911E2A4827C5A0E30BF70D94;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral76564205DF3204E3F1A415C4327AA36F62D7DA7E;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteralA97E51C480F71CAF058622299ACEB9C97B722625;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE4FB3FB3BD2D5548B01BCAA7045346BFE8EA0AE3;
IL2CPP_EXTERN_C String_t* _stringLiteralE7178A8D7000E8E0905E05FCC00178CFBE987CEC;
IL2CPP_EXTERN_C String_t* _stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m2B3FEF49563E1E1F30D1DED19FC080B4C4A00449_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m7E6690ECD1F1847047690CEA07DCF6AD375B9D92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CExitToMainMenuU3Ed__13_System_Collections_IEnumerator_Reset_mA08C6E8C02933EC5831D5A0713956CB50A26C391_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_IEnumerator_Reset_mAFE8966B5C542F1EFC726F3F40F6C472B3F6D66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyFollow_FaceTarget_m67B7C309E774EA6F2573F06502D88B11079FA34D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyFollow_Start_mA494EE67D59E30DB540CB52D7621E41BF6771A00_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyFollow_Update_m93E1941810AE9F9FCFB46BEC614596794EBC50A7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemySpawner_Update_mE9B85A2C67A3E6E48ADC531A0426ECF999A4C2A3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_OnTriggerEnter_mC91FFDE471C63A39A97C086223C815D9085CA6D8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_TakeDamage_m8ED97095FA9B507B51F93662632CEC2FD5A6304F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKFabric_ResolveIK_mEA7812EEA550D803C77F8FB9B45DD57A9E5B3D1B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKFabric_SetPositionRootSpace_m719C2B5045265C1A6765C6A96404F5F164F29EFD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKFabric_SetRotationRootSpace_m847D24B4E47118A009569961C04F31CEBA39018D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKLook_Awake_mF3D96D6F541AD6B57D9DAA6CBBE42BB32FD3E995_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FastIKLook_Update_m9FC44F7D83869A5B9D78E0D228ECF17EAD96A0AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_ExitToMainMenu_m67960153BE8A799A06273E67A072E9B63A359B60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_PlayerDied_m088191F23F58F6E4B2689B4DE64A603FE11E413E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_UpdatePlayerHealth_m5B78160B63C97FE5E467A8323F7099091FF1CA25_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_UpdateScore_m7213221D246340228C796E0905CA3555EF021CEF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameController_UpdateTimer_m4774DF097E9402987DA70EDE59F36F673AA07B98_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Health_OnTriggerEnter_m9D198A79F1DAB1D33BC57CE7C06183A2976CD101_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Health_Start_m67B788A33501A2CF22C3231FD3FCCD6D1D63A77F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HighScore_Start_mD1A2913A860B3CBBFB1D354359191D5AEFAFDB8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LegMovement_StepCurve_m98F04B65704CE7411E1E5069B63B06DA9E7F88A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LegMovement_TakeStep_mAA0176EFF5E9BE8529E5BC17786EC796EB316C64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LegMovement_Update_mA6F9CDCF2E285DF32E986A9D0CE43C9154C671DD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Menu_PlayGame_m81BF64DE8850EA8E28746F7A1C8FD0D4943F6B4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Menu_QuitGame_mC0A307F2681D0D684232694A10404FAAA8269A7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MouseLook_Update_m3D49361C94E0433BB35499708EE783B4543D83D5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPooler_Initialize_m25160B5469E27CF5BA52B18DFE4755E7B8222482_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ObjectPooler_Spawn_mB87826BA0423874699DB1221EF74FCE0BDF1ECA3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerManager_Awake_m4E0FE19C5F34114E28F28F04CCF33C2E34C743E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_OnTriggerEnter_mE273002981E5225ABE0C891B825A78BB9FE905E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_StarSpeedPowerUpTime_mBF7D5FD2F6A01DD9C03ECF8188D90BA6511C9040_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PowerUpSpawner_Update_m0239C945AA4B2EDEECAE174827EB2242C7426E16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController_Update_m0E587F33074BE72C54BA835B2217B0E8EC94F24A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SimpleCameraController__ctor_mC6AE2509DDF461856450EC7DE0058A1687AB5C87_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpiderMovement_CalculateOrientation_m12ED17C3B1822AFF824488ABE90DAFE7CC67A358_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SpiderMovement_Update_m9C608A1B9C53411D48B752E6B2B737B3F3A57B68_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CExitToMainMenuU3Ed__13_MoveNext_m3BA291EA91DC3977837B4A28CEC12739C2712D20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CExitToMainMenuU3Ed__13_System_Collections_IEnumerator_Reset_mA08C6E8C02933EC5831D5A0713956CB50A26C391_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStarSpeedPowerUpTimeU3Ed__3_MoveNext_m8E616C7D4141F249D03BD2EDAA835BD85C1F1282_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_IEnumerator_Reset_mAFE8966B5C542F1EFC726F3F40F6C472B3F6D66D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UI__ctor_m32F07ED0093319080F05523E28240839C73D5164_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Weapon_Shoot_m8FC1208456BC2F62B9EB212EAC4D70FA5F60EE0E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Weapon_Start_m7216819D285B8CDF5DD9E18550E3DF9F1DD76D5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Weapon_Update_m03BCDE1EF0751A0F043AE300FD31A4BFA8B5D883_MetadataUsageId;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC;
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// GameController_<ExitToMainMenu>d__13
struct  U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733  : public RuntimeObject
{
public:
	// System.Int32 GameController_<ExitToMainMenu>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameController_<ExitToMainMenu>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single GameController_<ExitToMainMenu>d__13::time
	float ___time_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_time_2() { return static_cast<int32_t>(offsetof(U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733, ___time_2)); }
	inline float get_time_2() const { return ___time_2; }
	inline float* get_address_of_time_2() { return &___time_2; }
	inline void set_time_2(float value)
	{
		___time_2 = value;
	}
};


// Player_<StarSpeedPowerUpTime>d__3
struct  U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53  : public RuntimeObject
{
public:
	// System.Int32 Player_<StarSpeedPowerUpTime>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player_<StarSpeedPowerUpTime>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Player Player_<StarSpeedPowerUpTime>d__3::<>4__this
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53, ___U3CU3E4__this_2)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Readme_Section
struct  Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D  : public RuntimeObject
{
public:
	// System.String Readme_Section::heading
	String_t* ___heading_0;
	// System.String Readme_Section::text
	String_t* ___text_1;
	// System.String Readme_Section::linkText
	String_t* ___linkText_2;
	// System.String Readme_Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____items_1)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityTemplateProjects.SimpleCameraController_CameraState
struct  CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C  : public RuntimeObject
{
public:
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::yaw
	float ___yaw_0;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::pitch
	float ___pitch_1;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::roll
	float ___roll_2;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::x
	float ___x_3;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::y
	float ___y_4;
	// System.Single UnityTemplateProjects.SimpleCameraController_CameraState::z
	float ___z_5;

public:
	inline static int32_t get_offset_of_yaw_0() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___yaw_0)); }
	inline float get_yaw_0() const { return ___yaw_0; }
	inline float* get_address_of_yaw_0() { return &___yaw_0; }
	inline void set_yaw_0(float value)
	{
		___yaw_0 = value;
	}

	inline static int32_t get_offset_of_pitch_1() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___pitch_1)); }
	inline float get_pitch_1() const { return ___pitch_1; }
	inline float* get_address_of_pitch_1() { return &___pitch_1; }
	inline void set_pitch_1(float value)
	{
		___pitch_1 = value;
	}

	inline static int32_t get_offset_of_roll_2() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___roll_2)); }
	inline float get_roll_2() const { return ___roll_2; }
	inline float* get_address_of_roll_2() { return &___roll_2; }
	inline void set_roll_2(float value)
	{
		___roll_2 = value;
	}

	inline static int32_t get_offset_of_x_3() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___x_3)); }
	inline float get_x_3() const { return ___x_3; }
	inline float* get_address_of_x_3() { return &___x_3; }
	inline void set_x_3(float value)
	{
		___x_3 = value;
	}

	inline static int32_t get_offset_of_y_4() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___y_4)); }
	inline float get_y_4() const { return ___y_4; }
	inline float* get_address_of_y_4() { return &___y_4; }
	inline void set_y_4(float value)
	{
		___y_4 = value;
	}

	inline static int32_t get_offset_of_z_5() { return static_cast<int32_t>(offsetof(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C, ___z_5)); }
	inline float get_z_5() const { return ___z_5; }
	inline float* get_address_of_z_5() { return &___z_5; }
	inline void set_z_5(float value)
	{
		___z_5 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameObject>
struct  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___list_0)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_list_0() const { return ___list_0; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14, ___current_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_current_3() const { return ___current_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
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
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// TMPro.MaterialReference
struct  MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___material_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_3() const { return ___material_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___fallbackMaterial_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___spriteAsset_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_Offset
struct  TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 
{
public:
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;

public:
	inline static int32_t get_offset_of_m_Left_0() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Left_0)); }
	inline float get_m_Left_0() const { return ___m_Left_0; }
	inline float* get_address_of_m_Left_0() { return &___m_Left_0; }
	inline void set_m_Left_0(float value)
	{
		___m_Left_0 = value;
	}

	inline static int32_t get_offset_of_m_Right_1() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Right_1)); }
	inline float get_m_Right_1() const { return ___m_Right_1; }
	inline float* get_address_of_m_Right_1() { return &___m_Right_1; }
	inline void set_m_Right_1(float value)
	{
		___m_Right_1 = value;
	}

	inline static int32_t get_offset_of_m_Top_2() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Top_2)); }
	inline float get_m_Top_2() const { return ___m_Top_2; }
	inline float* get_address_of_m_Top_2() { return &___m_Top_2; }
	inline void set_m_Top_2(float value)
	{
		___m_Top_2 = value;
	}

	inline static int32_t get_offset_of_m_Bottom_3() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117, ___m_Bottom_3)); }
	inline float get_m_Bottom_3() const { return ___m_Bottom_3; }
	inline float* get_address_of_m_Bottom_3() { return &___m_Bottom_3; }
	inline void set_m_Bottom_3(float value)
	{
		___m_Bottom_3 = value;
	}
};

struct TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields
{
public:
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___k_ZeroOffset_4;

public:
	inline static int32_t get_offset_of_k_ZeroOffset_4() { return static_cast<int32_t>(offsetof(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117_StaticFields, ___k_ZeroOffset_4)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_k_ZeroOffset_4() const { return ___k_ZeroOffset_4; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_k_ZeroOffset_4() { return &___k_ZeroOffset_4; }
	inline void set_k_ZeroOffset_4(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___k_ZeroOffset_4 = value;
	}
};


// TMPro.TMP_Text_SpecialCharacter
struct  SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F 
{
public:
	// TMPro.TMP_Character TMPro.TMP_Text_SpecialCharacter::character
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text_SpecialCharacter::fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text_SpecialCharacter::material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	// System.Int32 TMPro.TMP_Text_SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;

public:
	inline static int32_t get_offset_of_character_0() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___character_0)); }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * get_character_0() const { return ___character_0; }
	inline TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C ** get_address_of_character_0() { return &___character_0; }
	inline void set_character_0(TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * value)
	{
		___character_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_0), (void*)value);
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___fontAsset_1)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_material_2() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___material_2)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_material_2() const { return ___material_2; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_material_2() { return &___material_2; }
	inline void set_material_2(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___material_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_2), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_3() { return static_cast<int32_t>(offsetof(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F, ___materialIndex_3)); }
	inline int32_t get_materialIndex_3() const { return ___materialIndex_3; }
	inline int32_t* get_address_of_materialIndex_3() { return &___materialIndex_3; }
	inline void set_materialIndex_3(int32_t value)
	{
		___materialIndex_3 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_pinvoke
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F_marshaled_com
{
	TMP_Character_tE7A98584C4DDFC9E1A1D883F4A5DE99E5DE7CC0C * ___character_0;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___fontAsset_1;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct  TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___itemStack_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_itemStack_0() const { return ___itemStack_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<System.Single>
struct  TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___itemStack_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_itemStack_0() const { return ___itemStack_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_DefaultItem_2)); }
	inline float get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline float* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(float value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct  TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___itemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* get_itemStack_0() const { return ___itemStack_0; }
	inline TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(TMP_ColorGradientU5BU5D_t5271ED3FC5D741D05A220867865A1DA1EB04919A* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_DefaultItem_2)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.Keyframe
struct  Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F 
{
public:
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;

public:
	inline static int32_t get_offset_of_m_Time_0() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Time_0)); }
	inline float get_m_Time_0() const { return ___m_Time_0; }
	inline float* get_address_of_m_Time_0() { return &___m_Time_0; }
	inline void set_m_Time_0(float value)
	{
		___m_Time_0 = value;
	}

	inline static int32_t get_offset_of_m_Value_1() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_Value_1)); }
	inline float get_m_Value_1() const { return ___m_Value_1; }
	inline float* get_address_of_m_Value_1() { return &___m_Value_1; }
	inline void set_m_Value_1(float value)
	{
		___m_Value_1 = value;
	}

	inline static int32_t get_offset_of_m_InTangent_2() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InTangent_2)); }
	inline float get_m_InTangent_2() const { return ___m_InTangent_2; }
	inline float* get_address_of_m_InTangent_2() { return &___m_InTangent_2; }
	inline void set_m_InTangent_2(float value)
	{
		___m_InTangent_2 = value;
	}

	inline static int32_t get_offset_of_m_OutTangent_3() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutTangent_3)); }
	inline float get_m_OutTangent_3() const { return ___m_OutTangent_3; }
	inline float* get_address_of_m_OutTangent_3() { return &___m_OutTangent_3; }
	inline void set_m_OutTangent_3(float value)
	{
		___m_OutTangent_3 = value;
	}

	inline static int32_t get_offset_of_m_WeightedMode_4() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_WeightedMode_4)); }
	inline int32_t get_m_WeightedMode_4() const { return ___m_WeightedMode_4; }
	inline int32_t* get_address_of_m_WeightedMode_4() { return &___m_WeightedMode_4; }
	inline void set_m_WeightedMode_4(int32_t value)
	{
		___m_WeightedMode_4 = value;
	}

	inline static int32_t get_offset_of_m_InWeight_5() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_InWeight_5)); }
	inline float get_m_InWeight_5() const { return ___m_InWeight_5; }
	inline float* get_address_of_m_InWeight_5() { return &___m_InWeight_5; }
	inline void set_m_InWeight_5(float value)
	{
		___m_InWeight_5 = value;
	}

	inline static int32_t get_offset_of_m_OutWeight_6() { return static_cast<int32_t>(offsetof(Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F, ___m_OutWeight_6)); }
	inline float get_m_OutWeight_6() const { return ___m_OutWeight_6; }
	inline float* get_address_of_m_OutWeight_6() { return &___m_OutWeight_6; }
	inline void set_m_OutWeight_6(float value)
	{
		___m_OutWeight_6 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct  Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TMPro.ColorMode
struct  ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_t2C99ABBE35C08A863709500BFBBD6784D7114C09, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___max_3;

public:
	inline static int32_t get_offset_of_min_2() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___min_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_min_2() const { return ___min_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_min_2() { return &___min_2; }
	inline void set_min_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___min_2 = value;
	}

	inline static int32_t get_offset_of_max_3() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA, ___max_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_max_3() const { return ___max_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_max_3() { return &___max_3; }
	inline void set_max_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___max_3 = value;
	}
};

struct Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields
{
public:
	// TMPro.Extents TMPro.Extents::zero
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___uninitialized_1;

public:
	inline static int32_t get_offset_of_zero_0() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___zero_0)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_zero_0() const { return ___zero_0; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_zero_0() { return &___zero_0; }
	inline void set_zero_0(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___zero_0 = value;
	}

	inline static int32_t get_offset_of_uninitialized_1() { return static_cast<int32_t>(offsetof(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA_StaticFields, ___uninitialized_1)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_uninitialized_1() const { return ___uninitialized_1; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_uninitialized_1() { return &___uninitialized_1; }
	inline void set_uninitialized_1(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___uninitialized_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_tAB9AC2C8316219AE73612ED4DD60417C14B5B74C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tBF8B23C3A4F63D5602FEC93BE775C93CA4DDDC26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.HighlightState
struct  HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 
{
public:
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  ___padding_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___color_0)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_0() const { return ___color_0; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_padding_1() { return static_cast<int32_t>(offsetof(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759, ___padding_1)); }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  get_padding_1() const { return ___padding_1; }
	inline TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117 * get_address_of_padding_1() { return &___padding_1; }
	inline void set_padding_1(TMP_Offset_tFD2420EE03933F6A720EB5B66ED6B4FB67AE2117  value)
	{
		___padding_1 = value;
	}
};


// TMPro.HorizontalAlignmentOptions
struct  HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193 
{
public:
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HorizontalAlignmentOptions_tCBBC74167BDEF6B5B510DDC43B5136F793A05193, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t8A0451130450FC08C5847209E7551F27F5CAF4D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_t4BDF96DA2071216188B19EB33C35912BD185ECA3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct  TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___itemStack_0)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_itemStack_0() const { return ___itemStack_0; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_DefaultItem_2)); }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(MaterialReference_tB00D33F114B6EF4E7D63B25D053A0111D502951B  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct  TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___itemStack_0)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get_itemStack_0() const { return ___itemStack_0; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_DefaultItem_2)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t682AC2BC382B468C04A23B008505ACCBF826AD63, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_t3E5E40446E0C1088788010EE07323B45DB7549C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_tBA599FEF207E56A80860B6266E3C9F57B59CA9F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_t9FA25F9B2D01E6B7D8DA8761AAED241D285A285A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topLeft_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___topRight_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_topRight_1() const { return ___topRight_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomLeft_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D, ___bottomRight_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t8D099B77634C901CB5D2497AEAC94127E9DE013B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VerticalAlignmentOptions
struct  VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326 
{
public:
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VerticalAlignmentOptions_t6F8B6FBA36D97C6CA534AE3956D9060E39C9D326, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CollisionFlags
struct  CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.CursorLockMode
struct  CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04 
{
public:
	// System.Int32 UnityEngine.CursorLockMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CursorLockMode_t247B41EE9632E4AD759EDADDB351AE0075162D04, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Point_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_UV_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.UI.Image_FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image_FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image_Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7, ___lineExtents_19)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct  TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___itemStack_0)); }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* get_itemStack_0() const { return ___itemStack_0; }
	inline FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(FontWeightU5BU5D_t0C9E436904E570F798885BC6F264C7AE6608B5C6* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct  TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___itemStack_0)); }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* get_itemStack_0() const { return ___itemStack_0; }
	inline HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HighlightStateU5BU5D_t8150DD4545DE751DD24E4106F1E66C41DFFE38EA* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_DefaultItem_2)); }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(HighlightState_t52CE27A1187034A1037ABC13A70BAEE4AC3B5759  value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct  TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___itemStack_0)); }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* get_itemStack_0() const { return ___itemStack_0; }
	inline HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(HorizontalAlignmentOptionsU5BU5D_t57D37E3CA431B98ECF9444788AA9C047B990DDBB* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_DefaultItem_2)); }
	inline int32_t get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline int32_t* get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(int32_t value)
	{
		___m_DefaultItem_2 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// Readme
struct  Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String Readme::title
	String_t* ___title_5;
	// Readme_Section[] Readme::sections
	SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* ___sections_6;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___sections_6)); }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t013C5C59593F9D61D69A33E91B8C1450419ED659* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// TMPro.WordWrapState
struct  WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_27;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_28;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_29;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_30;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_31;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_32;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_33;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_34;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_35;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_58;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_62;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_64;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_65;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_startOfLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___startOfLineAscender_13)); }
	inline float get_startOfLineAscender_13() const { return ___startOfLineAscender_13; }
	inline float* get_address_of_startOfLineAscender_13() { return &___startOfLineAscender_13; }
	inline void set_startOfLineAscender_13(float value)
	{
		___startOfLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineAscender_14)); }
	inline float get_maxLineAscender_14() const { return ___maxLineAscender_14; }
	inline float* get_address_of_maxLineAscender_14() { return &___maxLineAscender_14; }
	inline void set_maxLineAscender_14(float value)
	{
		___maxLineAscender_14 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___maxLineDescender_15)); }
	inline float get_maxLineDescender_15() const { return ___maxLineDescender_15; }
	inline float* get_address_of_maxLineDescender_15() { return &___maxLineDescender_15; }
	inline void set_maxLineDescender_15(float value)
	{
		___maxLineDescender_15 = value;
	}

	inline static int32_t get_offset_of_pageAscender_16() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___pageAscender_16)); }
	inline float get_pageAscender_16() const { return ___pageAscender_16; }
	inline float* get_address_of_pageAscender_16() { return &___pageAscender_16; }
	inline void set_pageAscender_16(float value)
	{
		___pageAscender_16 = value;
	}

	inline static int32_t get_offset_of_horizontalAlignment_17() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___horizontalAlignment_17)); }
	inline int32_t get_horizontalAlignment_17() const { return ___horizontalAlignment_17; }
	inline int32_t* get_address_of_horizontalAlignment_17() { return &___horizontalAlignment_17; }
	inline void set_horizontalAlignment_17(int32_t value)
	{
		___horizontalAlignment_17 = value;
	}

	inline static int32_t get_offset_of_marginLeft_18() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginLeft_18)); }
	inline float get_marginLeft_18() const { return ___marginLeft_18; }
	inline float* get_address_of_marginLeft_18() { return &___marginLeft_18; }
	inline void set_marginLeft_18(float value)
	{
		___marginLeft_18 = value;
	}

	inline static int32_t get_offset_of_marginRight_19() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___marginRight_19)); }
	inline float get_marginRight_19() const { return ___marginRight_19; }
	inline float* get_address_of_marginRight_19() { return &___marginRight_19; }
	inline void set_marginRight_19(float value)
	{
		___marginRight_19 = value;
	}

	inline static int32_t get_offset_of_xAdvance_20() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___xAdvance_20)); }
	inline float get_xAdvance_20() const { return ___xAdvance_20; }
	inline float* get_address_of_xAdvance_20() { return &___xAdvance_20; }
	inline void set_xAdvance_20(float value)
	{
		___xAdvance_20 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_21() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredWidth_21)); }
	inline float get_preferredWidth_21() const { return ___preferredWidth_21; }
	inline float* get_address_of_preferredWidth_21() { return &___preferredWidth_21; }
	inline void set_preferredWidth_21(float value)
	{
		___preferredWidth_21 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_22() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___preferredHeight_22)); }
	inline float get_preferredHeight_22() const { return ___preferredHeight_22; }
	inline float* get_address_of_preferredHeight_22() { return &___preferredHeight_22; }
	inline void set_preferredHeight_22(float value)
	{
		___preferredHeight_22 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_23() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___previousLineScale_23)); }
	inline float get_previousLineScale_23() const { return ___previousLineScale_23; }
	inline float* get_address_of_previousLineScale_23() { return &___previousLineScale_23; }
	inline void set_previousLineScale_23(float value)
	{
		___previousLineScale_23 = value;
	}

	inline static int32_t get_offset_of_wordCount_24() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___wordCount_24)); }
	inline int32_t get_wordCount_24() const { return ___wordCount_24; }
	inline int32_t* get_address_of_wordCount_24() { return &___wordCount_24; }
	inline void set_wordCount_24(int32_t value)
	{
		___wordCount_24 = value;
	}

	inline static int32_t get_offset_of_fontStyle_25() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontStyle_25)); }
	inline int32_t get_fontStyle_25() const { return ___fontStyle_25; }
	inline int32_t* get_address_of_fontStyle_25() { return &___fontStyle_25; }
	inline void set_fontStyle_25(int32_t value)
	{
		___fontStyle_25 = value;
	}

	inline static int32_t get_offset_of_italicAngle_26() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngle_26)); }
	inline int32_t get_italicAngle_26() const { return ___italicAngle_26; }
	inline int32_t* get_address_of_italicAngle_26() { return &___italicAngle_26; }
	inline void set_italicAngle_26(int32_t value)
	{
		___italicAngle_26 = value;
	}

	inline static int32_t get_offset_of_fontScale_27() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScale_27)); }
	inline float get_fontScale_27() const { return ___fontScale_27; }
	inline float* get_address_of_fontScale_27() { return &___fontScale_27; }
	inline void set_fontScale_27(float value)
	{
		___fontScale_27 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_28() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontScaleMultiplier_28)); }
	inline float get_fontScaleMultiplier_28() const { return ___fontScaleMultiplier_28; }
	inline float* get_address_of_fontScaleMultiplier_28() { return &___fontScaleMultiplier_28; }
	inline void set_fontScaleMultiplier_28(float value)
	{
		___fontScaleMultiplier_28 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_29() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontSize_29)); }
	inline float get_currentFontSize_29() const { return ___currentFontSize_29; }
	inline float* get_address_of_currentFontSize_29() { return &___currentFontSize_29; }
	inline void set_currentFontSize_29(float value)
	{
		___currentFontSize_29 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_30() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineOffset_30)); }
	inline float get_baselineOffset_30() const { return ___baselineOffset_30; }
	inline float* get_address_of_baselineOffset_30() { return &___baselineOffset_30; }
	inline void set_baselineOffset_30(float value)
	{
		___baselineOffset_30 = value;
	}

	inline static int32_t get_offset_of_lineOffset_31() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineOffset_31)); }
	inline float get_lineOffset_31() const { return ___lineOffset_31; }
	inline float* get_address_of_lineOffset_31() { return &___lineOffset_31; }
	inline void set_lineOffset_31(float value)
	{
		___lineOffset_31 = value;
	}

	inline static int32_t get_offset_of_isDrivenLineSpacing_32() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isDrivenLineSpacing_32)); }
	inline bool get_isDrivenLineSpacing_32() const { return ___isDrivenLineSpacing_32; }
	inline bool* get_address_of_isDrivenLineSpacing_32() { return &___isDrivenLineSpacing_32; }
	inline void set_isDrivenLineSpacing_32(bool value)
	{
		___isDrivenLineSpacing_32 = value;
	}

	inline static int32_t get_offset_of_glyphHorizontalAdvanceAdjustment_33() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___glyphHorizontalAdvanceAdjustment_33)); }
	inline float get_glyphHorizontalAdvanceAdjustment_33() const { return ___glyphHorizontalAdvanceAdjustment_33; }
	inline float* get_address_of_glyphHorizontalAdvanceAdjustment_33() { return &___glyphHorizontalAdvanceAdjustment_33; }
	inline void set_glyphHorizontalAdvanceAdjustment_33(float value)
	{
		___glyphHorizontalAdvanceAdjustment_33 = value;
	}

	inline static int32_t get_offset_of_cSpace_34() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___cSpace_34)); }
	inline float get_cSpace_34() const { return ___cSpace_34; }
	inline float* get_address_of_cSpace_34() { return &___cSpace_34; }
	inline void set_cSpace_34(float value)
	{
		___cSpace_34 = value;
	}

	inline static int32_t get_offset_of_mSpace_35() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___mSpace_35)); }
	inline float get_mSpace_35() const { return ___mSpace_35; }
	inline float* get_address_of_mSpace_35() { return &___mSpace_35; }
	inline void set_mSpace_35(float value)
	{
		___mSpace_35 = value;
	}

	inline static int32_t get_offset_of_textInfo_36() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___textInfo_36)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_textInfo_36() const { return ___textInfo_36; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_textInfo_36() { return &___textInfo_36; }
	inline void set_textInfo_36(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___textInfo_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_36), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_37() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineInfo_37)); }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  get_lineInfo_37() const { return ___lineInfo_37; }
	inline TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7 * get_address_of_lineInfo_37() { return &___lineInfo_37; }
	inline void set_lineInfo_37(TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  value)
	{
		___lineInfo_37 = value;
	}

	inline static int32_t get_offset_of_vertexColor_38() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___vertexColor_38)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_vertexColor_38() const { return ___vertexColor_38; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_vertexColor_38() { return &___vertexColor_38; }
	inline void set_vertexColor_38(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___vertexColor_38 = value;
	}

	inline static int32_t get_offset_of_underlineColor_39() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColor_39)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_underlineColor_39() const { return ___underlineColor_39; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_underlineColor_39() { return &___underlineColor_39; }
	inline void set_underlineColor_39(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___underlineColor_39 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_40() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColor_40)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_strikethroughColor_40() const { return ___strikethroughColor_40; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_strikethroughColor_40() { return &___strikethroughColor_40; }
	inline void set_strikethroughColor_40(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___strikethroughColor_40 = value;
	}

	inline static int32_t get_offset_of_highlightColor_41() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColor_41)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_highlightColor_41() const { return ___highlightColor_41; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_highlightColor_41() { return &___highlightColor_41; }
	inline void set_highlightColor_41(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___highlightColor_41 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___basicStyleStack_42)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_basicStyleStack_42() const { return ___basicStyleStack_42; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_basicStyleStack_42() { return &___basicStyleStack_42; }
	inline void set_basicStyleStack_42(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___basicStyleStack_42 = value;
	}

	inline static int32_t get_offset_of_italicAngleStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___italicAngleStack_43)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_italicAngleStack_43() const { return ___italicAngleStack_43; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_italicAngleStack_43() { return &___italicAngleStack_43; }
	inline void set_italicAngleStack_43(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___italicAngleStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___italicAngleStack_43))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorStack_44)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_colorStack_44() const { return ___colorStack_44; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_colorStack_44() { return &___colorStack_44; }
	inline void set_colorStack_44(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___colorStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_44))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___underlineColorStack_45)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_underlineColorStack_45() const { return ___underlineColorStack_45; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_underlineColorStack_45() { return &___underlineColorStack_45; }
	inline void set_underlineColorStack_45(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___underlineColorStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_45))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___strikethroughColorStack_46)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_strikethroughColorStack_46() const { return ___strikethroughColorStack_46; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_strikethroughColorStack_46() { return &___strikethroughColorStack_46; }
	inline void set_strikethroughColorStack_46(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___strikethroughColorStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_47() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightColorStack_47)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_highlightColorStack_47() const { return ___highlightColorStack_47; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_highlightColorStack_47() { return &___highlightColorStack_47; }
	inline void set_highlightColorStack_47(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___highlightColorStack_47 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_47))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightStateStack_48() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___highlightStateStack_48)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_highlightStateStack_48() const { return ___highlightStateStack_48; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_highlightStateStack_48() { return &___highlightStateStack_48; }
	inline void set_highlightStateStack_48(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___highlightStateStack_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightStateStack_48))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_49() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___colorGradientStack_49)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_colorGradientStack_49() const { return ___colorGradientStack_49; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_colorGradientStack_49() { return &___colorGradientStack_49; }
	inline void set_colorGradientStack_49(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___colorGradientStack_49 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_50() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___sizeStack_50)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_sizeStack_50() const { return ___sizeStack_50; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_sizeStack_50() { return &___sizeStack_50; }
	inline void set_sizeStack_50(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___sizeStack_50 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_50))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_51() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___indentStack_51)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_indentStack_51() const { return ___indentStack_51; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_indentStack_51() { return &___indentStack_51; }
	inline void set_indentStack_51(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___indentStack_51 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_51))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_52() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___fontWeightStack_52)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_fontWeightStack_52() const { return ___fontWeightStack_52; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_fontWeightStack_52() { return &___fontWeightStack_52; }
	inline void set_fontWeightStack_52(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___fontWeightStack_52 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_52))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_53() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___styleStack_53)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_styleStack_53() const { return ___styleStack_53; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_styleStack_53() { return &___styleStack_53; }
	inline void set_styleStack_53(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___styleStack_53 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_53))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_54() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___baselineStack_54)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_baselineStack_54() const { return ___baselineStack_54; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_baselineStack_54() { return &___baselineStack_54; }
	inline void set_baselineStack_54(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___baselineStack_54 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_54))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_55() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___actionStack_55)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_actionStack_55() const { return ___actionStack_55; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_actionStack_55() { return &___actionStack_55; }
	inline void set_actionStack_55(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___actionStack_55 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_55))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_56() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___materialReferenceStack_56)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_materialReferenceStack_56() const { return ___materialReferenceStack_56; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_materialReferenceStack_56() { return &___materialReferenceStack_56; }
	inline void set_materialReferenceStack_56(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___materialReferenceStack_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_57() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___lineJustificationStack_57)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_lineJustificationStack_57() const { return ___lineJustificationStack_57; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_lineJustificationStack_57() { return &___lineJustificationStack_57; }
	inline void set_lineJustificationStack_57(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___lineJustificationStack_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_58() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___spriteAnimationID_58)); }
	inline int32_t get_spriteAnimationID_58() const { return ___spriteAnimationID_58; }
	inline int32_t* get_address_of_spriteAnimationID_58() { return &___spriteAnimationID_58; }
	inline void set_spriteAnimationID_58(int32_t value)
	{
		___spriteAnimationID_58 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_59() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentFontAsset_59)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_currentFontAsset_59() const { return ___currentFontAsset_59; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_currentFontAsset_59() { return &___currentFontAsset_59; }
	inline void set_currentFontAsset_59(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___currentFontAsset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_59), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_60() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentSpriteAsset_60)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_currentSpriteAsset_60() const { return ___currentSpriteAsset_60; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_currentSpriteAsset_60() { return &___currentSpriteAsset_60; }
	inline void set_currentSpriteAsset_60(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___currentSpriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_61() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterial_61)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_61() const { return ___currentMaterial_61; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_61() { return &___currentMaterial_61; }
	inline void set_currentMaterial_61(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_61), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_62() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___currentMaterialIndex_62)); }
	inline int32_t get_currentMaterialIndex_62() const { return ___currentMaterialIndex_62; }
	inline int32_t* get_address_of_currentMaterialIndex_62() { return &___currentMaterialIndex_62; }
	inline void set_currentMaterialIndex_62(int32_t value)
	{
		___currentMaterialIndex_62 = value;
	}

	inline static int32_t get_offset_of_meshExtents_63() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___meshExtents_63)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_meshExtents_63() const { return ___meshExtents_63; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_meshExtents_63() { return &___meshExtents_63; }
	inline void set_meshExtents_63(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___meshExtents_63 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_64() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___tagNoParsing_64)); }
	inline bool get_tagNoParsing_64() const { return ___tagNoParsing_64; }
	inline bool* get_address_of_tagNoParsing_64() { return &___tagNoParsing_64; }
	inline void set_tagNoParsing_64(bool value)
	{
		___tagNoParsing_64 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_65() { return static_cast<int32_t>(offsetof(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99, ___isNonBreakingSpace_65)); }
	inline bool get_isNonBreakingSpace_65() const { return ___isNonBreakingSpace_65; }
	inline bool* get_address_of_isNonBreakingSpace_65() { return &___isNonBreakingSpace_65; }
	inline void set_isNonBreakingSpace_65(bool value)
	{
		___isNonBreakingSpace_65 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScale_27;
	float ___fontScaleMultiplier_28;
	float ___currentFontSize_29;
	float ___baselineOffset_30;
	float ___lineOffset_31;
	int32_t ___isDrivenLineSpacing_32;
	float ___glyphHorizontalAdvanceAdjustment_33;
	float ___cSpace_34;
	float ___mSpace_35;
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___textInfo_36;
	TMP_LineInfo_tB86D3A31D61EB73EEFB08F6B1AB5C60DE52981F7  ___lineInfo_37;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___vertexColor_38;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___underlineColor_39;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___strikethroughColor_40;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___highlightColor_41;
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___basicStyleStack_42;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___italicAngleStack_43;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___colorStack_44;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___underlineColorStack_45;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___strikethroughColorStack_46;
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___highlightColorStack_47;
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___highlightStateStack_48;
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___colorGradientStack_49;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___sizeStack_50;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___indentStack_51;
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___fontWeightStack_52;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___styleStack_53;
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___baselineStack_54;
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___actionStack_55;
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___materialReferenceStack_56;
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___lineJustificationStack_57;
	int32_t ___spriteAnimationID_58;
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___currentFontAsset_59;
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___currentSpriteAsset_60;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_61;
	int32_t ___currentMaterialIndex_62;
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___meshExtents_63;
	int32_t ___tagNoParsing_64;
	int32_t ___isNonBreakingSpace_65;
};

// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct  TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 
{
public:
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;

public:
	inline static int32_t get_offset_of_itemStack_0() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___itemStack_0)); }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* get_itemStack_0() const { return ___itemStack_0; }
	inline WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548** get_address_of_itemStack_0() { return &___itemStack_0; }
	inline void set_itemStack_0(WordWrapStateU5BU5D_t4B20066E10D8FF621FB20C05F21B22167C90F548* value)
	{
		___itemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___itemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_2() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_DefaultItem_2)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_DefaultItem_2() const { return ___m_DefaultItem_2; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_DefaultItem_2() { return &___m_DefaultItem_2; }
	inline void set_m_DefaultItem_2(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_DefaultItem_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Capacity_3() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Capacity_3)); }
	inline int32_t get_m_Capacity_3() const { return ___m_Capacity_3; }
	inline int32_t* get_address_of_m_Capacity_3() { return &___m_Capacity_3; }
	inline void set_m_Capacity_3(int32_t value)
	{
		___m_Capacity_3 = value;
	}

	inline static int32_t get_offset_of_m_RolloverSize_4() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_RolloverSize_4)); }
	inline int32_t get_m_RolloverSize_4() const { return ___m_RolloverSize_4; }
	inline int32_t* get_address_of_m_RolloverSize_4() { return &___m_RolloverSize_4; }
	inline void set_m_RolloverSize_4(int32_t value)
	{
		___m_RolloverSize_4 = value;
	}

	inline static int32_t get_offset_of_m_Count_5() { return static_cast<int32_t>(offsetof(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7, ___m_Count_5)); }
	inline int32_t get_m_Count_5() const { return ___m_Count_5; }
	inline int32_t* get_address_of_m_Count_5() { return &___m_Count_5; }
	inline void set_m_Count_5(int32_t value)
	{
		___m_Count_5 = value;
	}
};


// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.CharacterController
struct  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// DitzelGames.FastIK.FastIKFabric
struct  FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 DitzelGames.FastIK.FastIKFabric::ChainLength
	int32_t ___ChainLength_4;
	// UnityEngine.Transform DitzelGames.FastIK.FastIKFabric::Target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Target_5;
	// UnityEngine.Transform DitzelGames.FastIK.FastIKFabric::Pole
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Pole_6;
	// System.Int32 DitzelGames.FastIK.FastIKFabric::Iterations
	int32_t ___Iterations_7;
	// System.Single DitzelGames.FastIK.FastIKFabric::Delta
	float ___Delta_8;
	// System.Single DitzelGames.FastIK.FastIKFabric::SnapBackStrength
	float ___SnapBackStrength_9;
	// System.Single[] DitzelGames.FastIK.FastIKFabric::BonesLength
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___BonesLength_10;
	// System.Single DitzelGames.FastIK.FastIKFabric::CompleteLength
	float ___CompleteLength_11;
	// UnityEngine.Transform[] DitzelGames.FastIK.FastIKFabric::Bones
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___Bones_12;
	// UnityEngine.Vector3[] DitzelGames.FastIK.FastIKFabric::Positions
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___Positions_13;
	// UnityEngine.Vector3[] DitzelGames.FastIK.FastIKFabric::StartDirectionSucc
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___StartDirectionSucc_14;
	// UnityEngine.Quaternion[] DitzelGames.FastIK.FastIKFabric::StartRotationBone
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___StartRotationBone_15;
	// UnityEngine.Quaternion DitzelGames.FastIK.FastIKFabric::StartRotationTarget
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___StartRotationTarget_16;
	// UnityEngine.Transform DitzelGames.FastIK.FastIKFabric::Root
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Root_17;

public:
	inline static int32_t get_offset_of_ChainLength_4() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___ChainLength_4)); }
	inline int32_t get_ChainLength_4() const { return ___ChainLength_4; }
	inline int32_t* get_address_of_ChainLength_4() { return &___ChainLength_4; }
	inline void set_ChainLength_4(int32_t value)
	{
		___ChainLength_4 = value;
	}

	inline static int32_t get_offset_of_Target_5() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Target_5() const { return ___Target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Target_5() { return &___Target_5; }
	inline void set_Target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_5), (void*)value);
	}

	inline static int32_t get_offset_of_Pole_6() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Pole_6)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Pole_6() const { return ___Pole_6; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Pole_6() { return &___Pole_6; }
	inline void set_Pole_6(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Pole_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Pole_6), (void*)value);
	}

	inline static int32_t get_offset_of_Iterations_7() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Iterations_7)); }
	inline int32_t get_Iterations_7() const { return ___Iterations_7; }
	inline int32_t* get_address_of_Iterations_7() { return &___Iterations_7; }
	inline void set_Iterations_7(int32_t value)
	{
		___Iterations_7 = value;
	}

	inline static int32_t get_offset_of_Delta_8() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Delta_8)); }
	inline float get_Delta_8() const { return ___Delta_8; }
	inline float* get_address_of_Delta_8() { return &___Delta_8; }
	inline void set_Delta_8(float value)
	{
		___Delta_8 = value;
	}

	inline static int32_t get_offset_of_SnapBackStrength_9() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___SnapBackStrength_9)); }
	inline float get_SnapBackStrength_9() const { return ___SnapBackStrength_9; }
	inline float* get_address_of_SnapBackStrength_9() { return &___SnapBackStrength_9; }
	inline void set_SnapBackStrength_9(float value)
	{
		___SnapBackStrength_9 = value;
	}

	inline static int32_t get_offset_of_BonesLength_10() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___BonesLength_10)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_BonesLength_10() const { return ___BonesLength_10; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_BonesLength_10() { return &___BonesLength_10; }
	inline void set_BonesLength_10(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___BonesLength_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BonesLength_10), (void*)value);
	}

	inline static int32_t get_offset_of_CompleteLength_11() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___CompleteLength_11)); }
	inline float get_CompleteLength_11() const { return ___CompleteLength_11; }
	inline float* get_address_of_CompleteLength_11() { return &___CompleteLength_11; }
	inline void set_CompleteLength_11(float value)
	{
		___CompleteLength_11 = value;
	}

	inline static int32_t get_offset_of_Bones_12() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Bones_12)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_Bones_12() const { return ___Bones_12; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_Bones_12() { return &___Bones_12; }
	inline void set_Bones_12(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___Bones_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Bones_12), (void*)value);
	}

	inline static int32_t get_offset_of_Positions_13() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Positions_13)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_Positions_13() const { return ___Positions_13; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_Positions_13() { return &___Positions_13; }
	inline void set_Positions_13(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___Positions_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Positions_13), (void*)value);
	}

	inline static int32_t get_offset_of_StartDirectionSucc_14() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___StartDirectionSucc_14)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_StartDirectionSucc_14() const { return ___StartDirectionSucc_14; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_StartDirectionSucc_14() { return &___StartDirectionSucc_14; }
	inline void set_StartDirectionSucc_14(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___StartDirectionSucc_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartDirectionSucc_14), (void*)value);
	}

	inline static int32_t get_offset_of_StartRotationBone_15() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___StartRotationBone_15)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get_StartRotationBone_15() const { return ___StartRotationBone_15; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of_StartRotationBone_15() { return &___StartRotationBone_15; }
	inline void set_StartRotationBone_15(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		___StartRotationBone_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StartRotationBone_15), (void*)value);
	}

	inline static int32_t get_offset_of_StartRotationTarget_16() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___StartRotationTarget_16)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_StartRotationTarget_16() const { return ___StartRotationTarget_16; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_StartRotationTarget_16() { return &___StartRotationTarget_16; }
	inline void set_StartRotationTarget_16(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___StartRotationTarget_16 = value;
	}

	inline static int32_t get_offset_of_Root_17() { return static_cast<int32_t>(offsetof(FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8, ___Root_17)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Root_17() const { return ___Root_17; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Root_17() { return &___Root_17; }
	inline void set_Root_17(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Root_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Root_17), (void*)value);
	}
};


// DitzelGames.FastIK.FastIKLook
struct  FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform DitzelGames.FastIK.FastIKLook::Target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___Target_4;
	// UnityEngine.Vector3 DitzelGames.FastIK.FastIKLook::StartDirection
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___StartDirection_5;
	// UnityEngine.Quaternion DitzelGames.FastIK.FastIKLook::StartRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___StartRotation_6;

public:
	inline static int32_t get_offset_of_Target_4() { return static_cast<int32_t>(offsetof(FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6, ___Target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_Target_4() const { return ___Target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_Target_4() { return &___Target_4; }
	inline void set_Target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___Target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Target_4), (void*)value);
	}

	inline static int32_t get_offset_of_StartDirection_5() { return static_cast<int32_t>(offsetof(FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6, ___StartDirection_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_StartDirection_5() const { return ___StartDirection_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_StartDirection_5() { return &___StartDirection_5; }
	inline void set_StartDirection_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___StartDirection_5 = value;
	}

	inline static int32_t get_offset_of_StartRotation_6() { return static_cast<int32_t>(offsetof(FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6, ___StartRotation_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_StartRotation_6() const { return ___StartRotation_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_StartRotation_6() { return &___StartRotation_6; }
	inline void set_StartRotation_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___StartRotation_6 = value;
	}
};


// Enemy
struct  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Player Enemy::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_4;
	// System.Boolean Enemy::hasEntered
	bool ___hasEntered_5;
	// System.Int32 Enemy::health
	int32_t ___health_6;
	// UnityEngine.GameObject Enemy::enemy
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemy_7;
	// GameController Enemy::gameController
	GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * ___gameController_8;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___player_4)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_4() const { return ___player_4; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasEntered_5() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___hasEntered_5)); }
	inline bool get_hasEntered_5() const { return ___hasEntered_5; }
	inline bool* get_address_of_hasEntered_5() { return &___hasEntered_5; }
	inline void set_hasEntered_5(bool value)
	{
		___hasEntered_5 = value;
	}

	inline static int32_t get_offset_of_health_6() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___health_6)); }
	inline int32_t get_health_6() const { return ___health_6; }
	inline int32_t* get_address_of_health_6() { return &___health_6; }
	inline void set_health_6(int32_t value)
	{
		___health_6 = value;
	}

	inline static int32_t get_offset_of_enemy_7() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___enemy_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemy_7() const { return ___enemy_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemy_7() { return &___enemy_7; }
	inline void set_enemy_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemy_7), (void*)value);
	}

	inline static int32_t get_offset_of_gameController_8() { return static_cast<int32_t>(offsetof(Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627, ___gameController_8)); }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * get_gameController_8() const { return ___gameController_8; }
	inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 ** get_address_of_gameController_8() { return &___gameController_8; }
	inline void set_gameController_8(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * value)
	{
		___gameController_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameController_8), (void*)value);
	}
};


// EnemyFollow
struct  EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform EnemyFollow::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_4;
	// UnityEngine.AI.NavMeshAgent EnemyFollow::agent
	NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * ___agent_5;
	// System.Single EnemyFollow::attackCooldown
	float ___attackCooldown_6;
	// System.Single EnemyFollow::lastAttack
	float ___lastAttack_7;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424, ___target_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_4() const { return ___target_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}

	inline static int32_t get_offset_of_agent_5() { return static_cast<int32_t>(offsetof(EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424, ___agent_5)); }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * get_agent_5() const { return ___agent_5; }
	inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B ** get_address_of_agent_5() { return &___agent_5; }
	inline void set_agent_5(NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * value)
	{
		___agent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_5), (void*)value);
	}

	inline static int32_t get_offset_of_attackCooldown_6() { return static_cast<int32_t>(offsetof(EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424, ___attackCooldown_6)); }
	inline float get_attackCooldown_6() const { return ___attackCooldown_6; }
	inline float* get_address_of_attackCooldown_6() { return &___attackCooldown_6; }
	inline void set_attackCooldown_6(float value)
	{
		___attackCooldown_6 = value;
	}

	inline static int32_t get_offset_of_lastAttack_7() { return static_cast<int32_t>(offsetof(EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424, ___lastAttack_7)); }
	inline float get_lastAttack_7() const { return ___lastAttack_7; }
	inline float* get_address_of_lastAttack_7() { return &___lastAttack_7; }
	inline void set_lastAttack_7(float value)
	{
		___lastAttack_7 = value;
	}
};


// EnemySpawner
struct  EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemySpawner::spawnRate
	float ___spawnRate_4;
	// System.Single EnemySpawner::speedIncreaseRate
	float ___speedIncreaseRate_5;
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___enemyPrefab_6;
	// UnityEngine.Transform[] EnemySpawner::spawnPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___spawnPoints_7;
	// ObjectPooler EnemySpawner::pool
	ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * ___pool_8;
	// System.Single EnemySpawner::lastSpawn
	float ___lastSpawn_9;
	// System.Single EnemySpawner::lastSpeedIncrease
	float ___lastSpeedIncrease_10;

public:
	inline static int32_t get_offset_of_spawnRate_4() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___spawnRate_4)); }
	inline float get_spawnRate_4() const { return ___spawnRate_4; }
	inline float* get_address_of_spawnRate_4() { return &___spawnRate_4; }
	inline void set_spawnRate_4(float value)
	{
		___spawnRate_4 = value;
	}

	inline static int32_t get_offset_of_speedIncreaseRate_5() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___speedIncreaseRate_5)); }
	inline float get_speedIncreaseRate_5() const { return ___speedIncreaseRate_5; }
	inline float* get_address_of_speedIncreaseRate_5() { return &___speedIncreaseRate_5; }
	inline void set_speedIncreaseRate_5(float value)
	{
		___speedIncreaseRate_5 = value;
	}

	inline static int32_t get_offset_of_enemyPrefab_6() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___enemyPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_enemyPrefab_6() const { return ___enemyPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_enemyPrefab_6() { return &___enemyPrefab_6; }
	inline void set_enemyPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___enemyPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoints_7() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___spawnPoints_7)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_spawnPoints_7() const { return ___spawnPoints_7; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_spawnPoints_7() { return &___spawnPoints_7; }
	inline void set_spawnPoints_7(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___spawnPoints_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_7), (void*)value);
	}

	inline static int32_t get_offset_of_pool_8() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___pool_8)); }
	inline ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * get_pool_8() const { return ___pool_8; }
	inline ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C ** get_address_of_pool_8() { return &___pool_8; }
	inline void set_pool_8(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * value)
	{
		___pool_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastSpawn_9() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___lastSpawn_9)); }
	inline float get_lastSpawn_9() const { return ___lastSpawn_9; }
	inline float* get_address_of_lastSpawn_9() { return &___lastSpawn_9; }
	inline void set_lastSpawn_9(float value)
	{
		___lastSpawn_9 = value;
	}

	inline static int32_t get_offset_of_lastSpeedIncrease_10() { return static_cast<int32_t>(offsetof(EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E, ___lastSpeedIncrease_10)); }
	inline float get_lastSpeedIncrease_10() const { return ___lastSpeedIncrease_10; }
	inline float* get_address_of_lastSpeedIncrease_10() { return &___lastSpeedIncrease_10; }
	inline void set_lastSpeedIncrease_10(float value)
	{
		___lastSpeedIncrease_10 = value;
	}
};


// GameController
struct  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameController::gameController
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameController_4;
	// UnityEngine.GameObject GameController::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;
	// UnityEngine.GameObject GameController::ui
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ui_6;
	// TMPro.TMP_Text GameController::timeText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___timeText_7;
	// TMPro.TMP_Text GameController::scoreText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___scoreText_8;
	// System.Single GameController::seconds
	float ___seconds_9;
	// System.Boolean GameController::timerActive
	bool ___timerActive_10;
	// System.Int32 GameController::score
	int32_t ___score_11;

public:
	inline static int32_t get_offset_of_gameController_4() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___gameController_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameController_4() const { return ___gameController_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameController_4() { return &___gameController_4; }
	inline void set_gameController_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameController_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameController_4), (void*)value);
	}

	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}

	inline static int32_t get_offset_of_ui_6() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___ui_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ui_6() const { return ___ui_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ui_6() { return &___ui_6; }
	inline void set_ui_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ui_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_6), (void*)value);
	}

	inline static int32_t get_offset_of_timeText_7() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timeText_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_timeText_7() const { return ___timeText_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_timeText_7() { return &___timeText_7; }
	inline void set_timeText_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___timeText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeText_7), (void*)value);
	}

	inline static int32_t get_offset_of_scoreText_8() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___scoreText_8)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_scoreText_8() const { return ___scoreText_8; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_scoreText_8() { return &___scoreText_8; }
	inline void set_scoreText_8(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___scoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_9() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___seconds_9)); }
	inline float get_seconds_9() const { return ___seconds_9; }
	inline float* get_address_of_seconds_9() { return &___seconds_9; }
	inline void set_seconds_9(float value)
	{
		___seconds_9 = value;
	}

	inline static int32_t get_offset_of_timerActive_10() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___timerActive_10)); }
	inline bool get_timerActive_10() const { return ___timerActive_10; }
	inline bool* get_address_of_timerActive_10() { return &___timerActive_10; }
	inline void set_timerActive_10(bool value)
	{
		___timerActive_10 = value;
	}

	inline static int32_t get_offset_of_score_11() { return static_cast<int32_t>(offsetof(GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274, ___score_11)); }
	inline int32_t get_score_11() const { return ___score_11; }
	inline int32_t* get_address_of_score_11() { return &___score_11; }
	inline void set_score_11(int32_t value)
	{
		___score_11 = value;
	}
};


// GameOver
struct  GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject GameOver::panel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel_4;

public:
	inline static int32_t get_offset_of_panel_4() { return static_cast<int32_t>(offsetof(GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582, ___panel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_panel_4() const { return ___panel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_panel_4() { return &___panel_4; }
	inline void set_panel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___panel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___panel_4), (void*)value);
	}
};


// HeartSlot
struct  HeartSlot_t0FB8096562C3C762DECEB4D8416D7020709EEAAE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean HeartSlot::showSlot
	bool ___showSlot_4;

public:
	inline static int32_t get_offset_of_showSlot_4() { return static_cast<int32_t>(offsetof(HeartSlot_t0FB8096562C3C762DECEB4D8416D7020709EEAAE, ___showSlot_4)); }
	inline bool get_showSlot_4() const { return ___showSlot_4; }
	inline bool* get_address_of_showSlot_4() { return &___showSlot_4; }
	inline void set_showSlot_4(bool value)
	{
		___showSlot_4 = value;
	}
};


// HighScore
struct  HighScore_tE521702BF43BC092726A498168F5E00DAC878753  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text HighScore::score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___score_4;

public:
	inline static int32_t get_offset_of_score_4() { return static_cast<int32_t>(offsetof(HighScore_tE521702BF43BC092726A498168F5E00DAC878753, ___score_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_score_4() const { return ___score_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_score_4() { return &___score_4; }
	inline void set_score_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___score_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___score_4), (void*)value);
	}
};


// Inventory
struct  Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 Inventory::ammoCount
	int32_t ___ammoCount_4;
	// System.Boolean Inventory::hasWeapon
	bool ___hasWeapon_5;
	// System.String Inventory::weaponEquipped
	String_t* ___weaponEquipped_6;
	// UnityEngine.GameObject Inventory::weaponPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___weaponPanel_7;
	// UnityEngine.GameObject Inventory::ammoPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ammoPanel_8;
	// UnityEngine.GameObject Inventory::weaponPosition
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___weaponPosition_9;
	// UnityEngine.GameObject[] Inventory::weaponDisplays
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___weaponDisplays_10;

public:
	inline static int32_t get_offset_of_ammoCount_4() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___ammoCount_4)); }
	inline int32_t get_ammoCount_4() const { return ___ammoCount_4; }
	inline int32_t* get_address_of_ammoCount_4() { return &___ammoCount_4; }
	inline void set_ammoCount_4(int32_t value)
	{
		___ammoCount_4 = value;
	}

	inline static int32_t get_offset_of_hasWeapon_5() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___hasWeapon_5)); }
	inline bool get_hasWeapon_5() const { return ___hasWeapon_5; }
	inline bool* get_address_of_hasWeapon_5() { return &___hasWeapon_5; }
	inline void set_hasWeapon_5(bool value)
	{
		___hasWeapon_5 = value;
	}

	inline static int32_t get_offset_of_weaponEquipped_6() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___weaponEquipped_6)); }
	inline String_t* get_weaponEquipped_6() const { return ___weaponEquipped_6; }
	inline String_t** get_address_of_weaponEquipped_6() { return &___weaponEquipped_6; }
	inline void set_weaponEquipped_6(String_t* value)
	{
		___weaponEquipped_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponEquipped_6), (void*)value);
	}

	inline static int32_t get_offset_of_weaponPanel_7() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___weaponPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_weaponPanel_7() const { return ___weaponPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_weaponPanel_7() { return &___weaponPanel_7; }
	inline void set_weaponPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___weaponPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_ammoPanel_8() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___ammoPanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ammoPanel_8() const { return ___ammoPanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ammoPanel_8() { return &___ammoPanel_8; }
	inline void set_ammoPanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ammoPanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ammoPanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_weaponPosition_9() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___weaponPosition_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_weaponPosition_9() const { return ___weaponPosition_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_weaponPosition_9() { return &___weaponPosition_9; }
	inline void set_weaponPosition_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___weaponPosition_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponPosition_9), (void*)value);
	}

	inline static int32_t get_offset_of_weaponDisplays_10() { return static_cast<int32_t>(offsetof(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805, ___weaponDisplays_10)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_weaponDisplays_10() const { return ___weaponDisplays_10; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_weaponDisplays_10() { return &___weaponDisplays_10; }
	inline void set_weaponDisplays_10(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___weaponDisplays_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weaponDisplays_10), (void*)value);
	}
};


// LegMovement
struct  LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single LegMovement::stepThreshold
	float ___stepThreshold_4;
	// System.Single LegMovement::stepDuration
	float ___stepDuration_5;
	// System.Single LegMovement::stepCooldown
	float ___stepCooldown_6;
	// System.Single LegMovement::stepOffset
	float ___stepOffset_7;
	// UnityEngine.Vector3 LegMovement::stepNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___stepNormal_8;
	// UnityEngine.Transform LegMovement::pole
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___pole_9;
	// UnityEngine.Vector3 LegMovement::restingPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___restingPosition_10;
	// UnityEngine.Vector3 LegMovement::desiredPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___desiredPosition_11;
	// UnityEngine.Vector3 LegMovement::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_12;
	// System.Single LegMovement::lastStep
	float ___lastStep_13;

public:
	inline static int32_t get_offset_of_stepThreshold_4() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___stepThreshold_4)); }
	inline float get_stepThreshold_4() const { return ___stepThreshold_4; }
	inline float* get_address_of_stepThreshold_4() { return &___stepThreshold_4; }
	inline void set_stepThreshold_4(float value)
	{
		___stepThreshold_4 = value;
	}

	inline static int32_t get_offset_of_stepDuration_5() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___stepDuration_5)); }
	inline float get_stepDuration_5() const { return ___stepDuration_5; }
	inline float* get_address_of_stepDuration_5() { return &___stepDuration_5; }
	inline void set_stepDuration_5(float value)
	{
		___stepDuration_5 = value;
	}

	inline static int32_t get_offset_of_stepCooldown_6() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___stepCooldown_6)); }
	inline float get_stepCooldown_6() const { return ___stepCooldown_6; }
	inline float* get_address_of_stepCooldown_6() { return &___stepCooldown_6; }
	inline void set_stepCooldown_6(float value)
	{
		___stepCooldown_6 = value;
	}

	inline static int32_t get_offset_of_stepOffset_7() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___stepOffset_7)); }
	inline float get_stepOffset_7() const { return ___stepOffset_7; }
	inline float* get_address_of_stepOffset_7() { return &___stepOffset_7; }
	inline void set_stepOffset_7(float value)
	{
		___stepOffset_7 = value;
	}

	inline static int32_t get_offset_of_stepNormal_8() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___stepNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_stepNormal_8() const { return ___stepNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_stepNormal_8() { return &___stepNormal_8; }
	inline void set_stepNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___stepNormal_8 = value;
	}

	inline static int32_t get_offset_of_pole_9() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___pole_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_pole_9() const { return ___pole_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_pole_9() { return &___pole_9; }
	inline void set_pole_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___pole_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pole_9), (void*)value);
	}

	inline static int32_t get_offset_of_restingPosition_10() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___restingPosition_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_restingPosition_10() const { return ___restingPosition_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_restingPosition_10() { return &___restingPosition_10; }
	inline void set_restingPosition_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___restingPosition_10 = value;
	}

	inline static int32_t get_offset_of_desiredPosition_11() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___desiredPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_desiredPosition_11() const { return ___desiredPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_desiredPosition_11() { return &___desiredPosition_11; }
	inline void set_desiredPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___desiredPosition_11 = value;
	}

	inline static int32_t get_offset_of_velocity_12() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___velocity_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_12() const { return ___velocity_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_12() { return &___velocity_12; }
	inline void set_velocity_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_12 = value;
	}

	inline static int32_t get_offset_of_lastStep_13() { return static_cast<int32_t>(offsetof(LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76, ___lastStep_13)); }
	inline float get_lastStep_13() const { return ___lastStep_13; }
	inline float* get_address_of_lastStep_13() { return &___lastStep_13; }
	inline void set_lastStep_13(float value)
	{
		___lastStep_13 = value;
	}
};


// Menu
struct  Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// MouseLook
struct  MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single MouseLook::mouseSensitivity
	float ___mouseSensitivity_4;
	// UnityEngine.Transform MouseLook::playerBody
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___playerBody_5;
	// System.Single MouseLook::xRotation
	float ___xRotation_6;

public:
	inline static int32_t get_offset_of_mouseSensitivity_4() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___mouseSensitivity_4)); }
	inline float get_mouseSensitivity_4() const { return ___mouseSensitivity_4; }
	inline float* get_address_of_mouseSensitivity_4() { return &___mouseSensitivity_4; }
	inline void set_mouseSensitivity_4(float value)
	{
		___mouseSensitivity_4 = value;
	}

	inline static int32_t get_offset_of_playerBody_5() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___playerBody_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_playerBody_5() const { return ___playerBody_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_playerBody_5() { return &___playerBody_5; }
	inline void set_playerBody_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___playerBody_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerBody_5), (void*)value);
	}

	inline static int32_t get_offset_of_xRotation_6() { return static_cast<int32_t>(offsetof(MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA, ___xRotation_6)); }
	inline float get_xRotation_6() const { return ___xRotation_6; }
	inline float* get_address_of_xRotation_6() { return &___xRotation_6; }
	inline void set_xRotation_6(float value)
	{
		___xRotation_6 = value;
	}
};


// ObjectPooler
struct  ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooler::pool
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___pool_4;

public:
	inline static int32_t get_offset_of_pool_4() { return static_cast<int32_t>(offsetof(ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C, ___pool_4)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_pool_4() const { return ___pool_4; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_pool_4() { return &___pool_4; }
	inline void set_pool_4(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___pool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_4), (void*)value);
	}
};


// Player
struct  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Transform Player::player
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___player_4;
	// System.Int32 Player::health
	int32_t ___health_5;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___player_4)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_player_4() const { return ___player_4; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}
};


// PlayerManager
struct  PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject PlayerManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_5;

public:
	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48, ___player_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_5() const { return ___player_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_5), (void*)value);
	}
};

struct PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields
{
public:
	// PlayerManager PlayerManager::instance
	PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields, ___instance_4)); }
	inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * get_instance_4() const { return ___instance_4; }
	inline PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// PlayerMovement
struct  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___controller_4;
	// System.Single PlayerMovement::speed
	float ___speed_5;
	// System.Single PlayerMovement::gravity
	float ___gravity_6;
	// UnityEngine.Transform PlayerMovement::groundCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___groundCheck_7;
	// System.Single PlayerMovement::groundDistance
	float ___groundDistance_8;
	// UnityEngine.LayerMask PlayerMovement::groundMask
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___groundMask_9;
	// System.Single PlayerMovement::jumpHeight
	float ___jumpHeight_10;
	// System.Boolean PlayerMovement::ableToMove
	bool ___ableToMove_11;
	// UnityEngine.Vector3 PlayerMovement::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_12;
	// System.Boolean PlayerMovement::isGrounded
	bool ___isGrounded_13;

public:
	inline static int32_t get_offset_of_controller_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___controller_4)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_controller_4() const { return ___controller_4; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_controller_4() { return &___controller_4; }
	inline void set_controller_4(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___controller_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_4), (void*)value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_gravity_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___gravity_6)); }
	inline float get_gravity_6() const { return ___gravity_6; }
	inline float* get_address_of_gravity_6() { return &___gravity_6; }
	inline void set_gravity_6(float value)
	{
		___gravity_6 = value;
	}

	inline static int32_t get_offset_of_groundCheck_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundCheck_7)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_groundCheck_7() const { return ___groundCheck_7; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_groundCheck_7() { return &___groundCheck_7; }
	inline void set_groundCheck_7(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___groundCheck_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___groundCheck_7), (void*)value);
	}

	inline static int32_t get_offset_of_groundDistance_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundDistance_8)); }
	inline float get_groundDistance_8() const { return ___groundDistance_8; }
	inline float* get_address_of_groundDistance_8() { return &___groundDistance_8; }
	inline void set_groundDistance_8(float value)
	{
		___groundDistance_8 = value;
	}

	inline static int32_t get_offset_of_groundMask_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___groundMask_9)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_groundMask_9() const { return ___groundMask_9; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_groundMask_9() { return &___groundMask_9; }
	inline void set_groundMask_9(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___groundMask_9 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___jumpHeight_10)); }
	inline float get_jumpHeight_10() const { return ___jumpHeight_10; }
	inline float* get_address_of_jumpHeight_10() { return &___jumpHeight_10; }
	inline void set_jumpHeight_10(float value)
	{
		___jumpHeight_10 = value;
	}

	inline static int32_t get_offset_of_ableToMove_11() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___ableToMove_11)); }
	inline bool get_ableToMove_11() const { return ___ableToMove_11; }
	inline bool* get_address_of_ableToMove_11() { return &___ableToMove_11; }
	inline void set_ableToMove_11(bool value)
	{
		___ableToMove_11 = value;
	}

	inline static int32_t get_offset_of_velocity_12() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___velocity_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_12() const { return ___velocity_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_12() { return &___velocity_12; }
	inline void set_velocity_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_12 = value;
	}

	inline static int32_t get_offset_of_isGrounded_13() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___isGrounded_13)); }
	inline bool get_isGrounded_13() const { return ___isGrounded_13; }
	inline bool* get_address_of_isGrounded_13() { return &___isGrounded_13; }
	inline void set_isGrounded_13(bool value)
	{
		___isGrounded_13 = value;
	}
};


// PowerUp
struct  PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// PowerUpSpawner
struct  PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PowerUpSpawner::spawnRate
	float ___spawnRate_4;
	// UnityEngine.GameObject[] PowerUpSpawner::powerUps
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___powerUps_5;
	// UnityEngine.Transform[] PowerUpSpawner::spawnPoints
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___spawnPoints_6;
	// System.Single PowerUpSpawner::lastSpawn
	float ___lastSpawn_7;

public:
	inline static int32_t get_offset_of_spawnRate_4() { return static_cast<int32_t>(offsetof(PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D, ___spawnRate_4)); }
	inline float get_spawnRate_4() const { return ___spawnRate_4; }
	inline float* get_address_of_spawnRate_4() { return &___spawnRate_4; }
	inline void set_spawnRate_4(float value)
	{
		___spawnRate_4 = value;
	}

	inline static int32_t get_offset_of_powerUps_5() { return static_cast<int32_t>(offsetof(PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D, ___powerUps_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_powerUps_5() const { return ___powerUps_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_powerUps_5() { return &___powerUps_5; }
	inline void set_powerUps_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___powerUps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___powerUps_5), (void*)value);
	}

	inline static int32_t get_offset_of_spawnPoints_6() { return static_cast<int32_t>(offsetof(PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D, ___spawnPoints_6)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_spawnPoints_6() const { return ___spawnPoints_6; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_spawnPoints_6() { return &___spawnPoints_6; }
	inline void set_spawnPoints_6(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___spawnPoints_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawnPoints_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastSpawn_7() { return static_cast<int32_t>(offsetof(PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D, ___lastSpawn_7)); }
	inline float get_lastSpawn_7() const { return ___lastSpawn_7; }
	inline float* get_address_of_lastSpawn_7() { return &___lastSpawn_7; }
	inline void set_lastSpawn_7(float value)
	{
		___lastSpawn_7 = value;
	}
};


// Speed
struct  Speed_tD8F11577123FC649C83FC5E2B1ABA56A720DC895  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// SpiderMovement
struct  SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single SpiderMovement::speed
	float ___speed_4;
	// UnityEngine.Vector3 SpiderMovement::velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___velocity_5;
	// LegMovement[] SpiderMovement::legs
	LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* ___legs_6;
	// System.Int32 SpiderMovement::index
	int32_t ___index_7;
	// System.Single SpiderMovement::timeBetweenSteps
	float ___timeBetweenSteps_8;
	// System.Single SpiderMovement::maxTargetDistance
	float ___maxTargetDistance_9;
	// System.Single SpiderMovement::lastStep
	float ___lastStep_10;
	// UnityEngine.Vector3 SpiderMovement::oldPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oldPosition_11;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___velocity_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_velocity_5() const { return ___velocity_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___velocity_5 = value;
	}

	inline static int32_t get_offset_of_legs_6() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___legs_6)); }
	inline LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* get_legs_6() const { return ___legs_6; }
	inline LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1** get_address_of_legs_6() { return &___legs_6; }
	inline void set_legs_6(LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* value)
	{
		___legs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___legs_6), (void*)value);
	}

	inline static int32_t get_offset_of_index_7() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___index_7)); }
	inline int32_t get_index_7() const { return ___index_7; }
	inline int32_t* get_address_of_index_7() { return &___index_7; }
	inline void set_index_7(int32_t value)
	{
		___index_7 = value;
	}

	inline static int32_t get_offset_of_timeBetweenSteps_8() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___timeBetweenSteps_8)); }
	inline float get_timeBetweenSteps_8() const { return ___timeBetweenSteps_8; }
	inline float* get_address_of_timeBetweenSteps_8() { return &___timeBetweenSteps_8; }
	inline void set_timeBetweenSteps_8(float value)
	{
		___timeBetweenSteps_8 = value;
	}

	inline static int32_t get_offset_of_maxTargetDistance_9() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___maxTargetDistance_9)); }
	inline float get_maxTargetDistance_9() const { return ___maxTargetDistance_9; }
	inline float* get_address_of_maxTargetDistance_9() { return &___maxTargetDistance_9; }
	inline void set_maxTargetDistance_9(float value)
	{
		___maxTargetDistance_9 = value;
	}

	inline static int32_t get_offset_of_lastStep_10() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___lastStep_10)); }
	inline float get_lastStep_10() const { return ___lastStep_10; }
	inline float* get_address_of_lastStep_10() { return &___lastStep_10; }
	inline void set_lastStep_10(float value)
	{
		___lastStep_10 = value;
	}

	inline static int32_t get_offset_of_oldPosition_11() { return static_cast<int32_t>(offsetof(SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E, ___oldPosition_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oldPosition_11() const { return ___oldPosition_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oldPosition_11() { return &___oldPosition_11; }
	inline void set_oldPosition_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oldPosition_11 = value;
	}
};


// UI
struct  UI_t3E798C446A347CD6BDC09248946045F3D3DE3376  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] UI::heartSlots
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___heartSlots_4;
	// UnityEngine.GameObject UI::gameOverPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameOverPanel_5;
	// TMPro.TMP_Text UI::gameOverTimeText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___gameOverTimeText_6;
	// TMPro.TMP_Text UI::gameOverScoreText
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___gameOverScoreText_7;

public:
	inline static int32_t get_offset_of_heartSlots_4() { return static_cast<int32_t>(offsetof(UI_t3E798C446A347CD6BDC09248946045F3D3DE3376, ___heartSlots_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_heartSlots_4() const { return ___heartSlots_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_heartSlots_4() { return &___heartSlots_4; }
	inline void set_heartSlots_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___heartSlots_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heartSlots_4), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverPanel_5() { return static_cast<int32_t>(offsetof(UI_t3E798C446A347CD6BDC09248946045F3D3DE3376, ___gameOverPanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameOverPanel_5() const { return ___gameOverPanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameOverPanel_5() { return &___gameOverPanel_5; }
	inline void set_gameOverPanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameOverPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverTimeText_6() { return static_cast<int32_t>(offsetof(UI_t3E798C446A347CD6BDC09248946045F3D3DE3376, ___gameOverTimeText_6)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_gameOverTimeText_6() const { return ___gameOverTimeText_6; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_gameOverTimeText_6() { return &___gameOverTimeText_6; }
	inline void set_gameOverTimeText_6(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___gameOverTimeText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverTimeText_6), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverScoreText_7() { return static_cast<int32_t>(offsetof(UI_t3E798C446A347CD6BDC09248946045F3D3DE3376, ___gameOverScoreText_7)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_gameOverScoreText_7() const { return ___gameOverScoreText_7; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_gameOverScoreText_7() { return &___gameOverScoreText_7; }
	inline void set_gameOverScoreText_7(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___gameOverScoreText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverScoreText_7), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityTemplateProjects.SimpleCameraController
struct  SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_TargetCameraState
	CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___m_TargetCameraState_4;
	// UnityTemplateProjects.SimpleCameraController_CameraState UnityTemplateProjects.SimpleCameraController::m_InterpolatingCameraState
	CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___m_InterpolatingCameraState_5;
	// System.Single UnityTemplateProjects.SimpleCameraController::boost
	float ___boost_6;
	// System.Single UnityTemplateProjects.SimpleCameraController::positionLerpTime
	float ___positionLerpTime_7;
	// UnityEngine.AnimationCurve UnityTemplateProjects.SimpleCameraController::mouseSensitivityCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___mouseSensitivityCurve_8;
	// System.Single UnityTemplateProjects.SimpleCameraController::rotationLerpTime
	float ___rotationLerpTime_9;
	// System.Boolean UnityTemplateProjects.SimpleCameraController::invertY
	bool ___invertY_10;

public:
	inline static int32_t get_offset_of_m_TargetCameraState_4() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___m_TargetCameraState_4)); }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * get_m_TargetCameraState_4() const { return ___m_TargetCameraState_4; }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C ** get_address_of_m_TargetCameraState_4() { return &___m_TargetCameraState_4; }
	inline void set_m_TargetCameraState_4(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * value)
	{
		___m_TargetCameraState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetCameraState_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_InterpolatingCameraState_5() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___m_InterpolatingCameraState_5)); }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * get_m_InterpolatingCameraState_5() const { return ___m_InterpolatingCameraState_5; }
	inline CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C ** get_address_of_m_InterpolatingCameraState_5() { return &___m_InterpolatingCameraState_5; }
	inline void set_m_InterpolatingCameraState_5(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * value)
	{
		___m_InterpolatingCameraState_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InterpolatingCameraState_5), (void*)value);
	}

	inline static int32_t get_offset_of_boost_6() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___boost_6)); }
	inline float get_boost_6() const { return ___boost_6; }
	inline float* get_address_of_boost_6() { return &___boost_6; }
	inline void set_boost_6(float value)
	{
		___boost_6 = value;
	}

	inline static int32_t get_offset_of_positionLerpTime_7() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___positionLerpTime_7)); }
	inline float get_positionLerpTime_7() const { return ___positionLerpTime_7; }
	inline float* get_address_of_positionLerpTime_7() { return &___positionLerpTime_7; }
	inline void set_positionLerpTime_7(float value)
	{
		___positionLerpTime_7 = value;
	}

	inline static int32_t get_offset_of_mouseSensitivityCurve_8() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___mouseSensitivityCurve_8)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_mouseSensitivityCurve_8() const { return ___mouseSensitivityCurve_8; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_mouseSensitivityCurve_8() { return &___mouseSensitivityCurve_8; }
	inline void set_mouseSensitivityCurve_8(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___mouseSensitivityCurve_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseSensitivityCurve_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotationLerpTime_9() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___rotationLerpTime_9)); }
	inline float get_rotationLerpTime_9() const { return ___rotationLerpTime_9; }
	inline float* get_address_of_rotationLerpTime_9() { return &___rotationLerpTime_9; }
	inline void set_rotationLerpTime_9(float value)
	{
		___rotationLerpTime_9 = value;
	}

	inline static int32_t get_offset_of_invertY_10() { return static_cast<int32_t>(offsetof(SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2, ___invertY_10)); }
	inline bool get_invertY_10() const { return ___invertY_10; }
	inline bool* get_address_of_invertY_10() { return &___invertY_10; }
	inline void set_invertY_10(bool value)
	{
		___invertY_10 = value;
	}
};


// Weapon
struct  Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Inventory Weapon::inventory
	Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * ___inventory_4;
	// UnityEngine.Camera Weapon::fpsCam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___fpsCam_5;
	// System.Int32 Weapon::range
	int32_t ___range_6;
	// System.Int32 Weapon::damage
	int32_t ___damage_7;
	// UnityEngine.ParticleSystem Weapon::gunFlash
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___gunFlash_8;

public:
	inline static int32_t get_offset_of_inventory_4() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___inventory_4)); }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * get_inventory_4() const { return ___inventory_4; }
	inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 ** get_address_of_inventory_4() { return &___inventory_4; }
	inline void set_inventory_4(Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * value)
	{
		___inventory_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inventory_4), (void*)value);
	}

	inline static int32_t get_offset_of_fpsCam_5() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___fpsCam_5)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_fpsCam_5() const { return ___fpsCam_5; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_fpsCam_5() { return &___fpsCam_5; }
	inline void set_fpsCam_5(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___fpsCam_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fpsCam_5), (void*)value);
	}

	inline static int32_t get_offset_of_range_6() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___range_6)); }
	inline int32_t get_range_6() const { return ___range_6; }
	inline int32_t* get_address_of_range_6() { return &___range_6; }
	inline void set_range_6(int32_t value)
	{
		___range_6 = value;
	}

	inline static int32_t get_offset_of_damage_7() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___damage_7)); }
	inline int32_t get_damage_7() const { return ___damage_7; }
	inline int32_t* get_address_of_damage_7() { return &___damage_7; }
	inline void set_damage_7(int32_t value)
	{
		___damage_7 = value;
	}

	inline static int32_t get_offset_of_gunFlash_8() { return static_cast<int32_t>(offsetof(Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226, ___gunFlash_8)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_gunFlash_8() const { return ___gunFlash_8; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_gunFlash_8() { return &___gunFlash_8; }
	inline void set_gunFlash_8(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___gunFlash_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gunFlash_8), (void*)value);
	}
};


// Health
struct  Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96  : public PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3
{
public:
	// Player Health::player
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96, ___player_4)); }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * get_player_4() const { return ___player_4; }
	inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}
};


// Rifle
struct  Rifle_t7E89F5AC8ADD1399D3A37B9627ECE964275379E5  : public Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_37;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_38;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_fontAsset_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * ___m_currentFontAsset_40;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_41;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_sharedMaterial_42;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_currentMaterial_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_47;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontSharedMaterials_48;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_fontMaterial_49;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ___m_fontMaterials_50;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_51;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_fontColor32_52;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fontColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_underlineColor_55;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_strikethroughColor_56;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_57;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_58;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  ___m_fontColorGradient_59;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_fontColorGradientPreset_60;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_spriteAsset_61;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_62;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_63;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_spriteColor_64;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * ___m_StyleSheet_65;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * ___m_TextStyle_66;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_67;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_68;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_faceColor_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_outlineColor_70;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_71;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_72;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_73;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_74;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_sizeStack_75;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_77;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  ___m_FontWeightStack_78;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_79;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_80;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_81;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_83;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_84;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_86;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_88;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  ___m_fontStyleStack_89;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_90;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_91;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_92;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_93;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_94;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  ___m_lineJustificationStack_95;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_textContainerLocalCorners_96;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_97;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_98;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_99;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_100;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_102;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_103;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_104;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_105;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_106;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_107;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_108;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_109;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_110;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_111;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_112;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_113;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_114;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_115;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___m_linkedTextComponent_116;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * ___parentLinkedComponent_117;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_118;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_119;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_120;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_121;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_122;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_123;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_124;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_125;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_126;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_127;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_128;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_129;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_130;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_132;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_133;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_134;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_135;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_136;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_137;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_138;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_141;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_142;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_143;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_144;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_margin_145;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_146;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_147;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_148;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_149;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_150;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * ___m_textInfo_151;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_152;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_153;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_transform_154;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_rectTransform_155;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousRectTransformSize_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PreviousPivotPosition_157;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_158;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_159;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_mesh_160;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_161;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_164;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * ___m_spriteAnimator_165;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_166;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_167;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_168;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_169;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_170;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_171;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * ___m_LayoutElement_172;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_173;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_174;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_175;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_176;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_177;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_178;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_179;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_180;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_181;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_182;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_183;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_184;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_186;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_187;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_191;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_192;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_indentStack_193;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_194;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_195;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_FXMatrix_196;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_197;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_InternalParsingBuffer
	UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* ___m_InternalParsingBuffer_198;
	// System.Int32 TMPro.TMP_Text::m_InternalParsingBufferSize
	int32_t ___m_InternalParsingBufferSize_199;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* ___m_internalCharacterInfo_200;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_input_CharArray_201;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_202;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_203;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_210;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_212;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_213;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_214;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_215;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_216;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_217;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_218;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_219;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_220;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_221;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_222;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_223;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_224;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_225;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_226;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_227;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  ___m_meshExtents_228;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_htmlColor_229;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_colorStack_230;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_underlineColorStack_231;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  ___m_strikethroughColorStack_232;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  ___m_HighlightStateStack_233;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * ___m_colorGradientPreset_234;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  ___m_colorGradientStack_235;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_236;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_237;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_238;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* ___m_TextStyleStacks_239;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_240;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_ItalicAngleStack_241;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_242;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  ___m_actionStack_243;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_244;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_245;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  ___m_baselineOffsetStack_246;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_247;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_248;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * ___m_cached_TextElement_249;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Ellipsis_250;
	// TMPro.TMP_Text_SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  ___m_Underline_251;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_defaultSpriteAsset_252;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * ___m_currentSpriteAsset_253;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_254;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_255;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_256;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* ___k_Power_258;

public:
	inline static int32_t get_offset_of_m_text_36() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_text_36)); }
	inline String_t* get_m_text_36() const { return ___m_text_36; }
	inline String_t** get_address_of_m_text_36() { return &___m_text_36; }
	inline void set_m_text_36(String_t* value)
	{
		___m_text_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextPreprocessor_37() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextPreprocessor_37)); }
	inline RuntimeObject* get_m_TextPreprocessor_37() const { return ___m_TextPreprocessor_37; }
	inline RuntimeObject** get_address_of_m_TextPreprocessor_37() { return &___m_TextPreprocessor_37; }
	inline void set_m_TextPreprocessor_37(RuntimeObject* value)
	{
		___m_TextPreprocessor_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextPreprocessor_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_38() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRightToLeft_38)); }
	inline bool get_m_isRightToLeft_38() const { return ___m_isRightToLeft_38; }
	inline bool* get_address_of_m_isRightToLeft_38() { return &___m_isRightToLeft_38; }
	inline void set_m_isRightToLeft_38(bool value)
	{
		___m_isRightToLeft_38 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_39() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontAsset_39)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_fontAsset_39() const { return ___m_fontAsset_39; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_fontAsset_39() { return &___m_fontAsset_39; }
	inline void set_m_fontAsset_39(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_fontAsset_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_40() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontAsset_40)); }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * get_m_currentFontAsset_40() const { return ___m_currentFontAsset_40; }
	inline TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 ** get_address_of_m_currentFontAsset_40() { return &___m_currentFontAsset_40; }
	inline void set_m_currentFontAsset_40(TMP_FontAsset_tDD8F58129CF4A9094C82DD209531E9E71F9837B2 * value)
	{
		___m_currentFontAsset_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_41() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isSDFShader_41)); }
	inline bool get_m_isSDFShader_41() const { return ___m_isSDFShader_41; }
	inline bool* get_address_of_m_isSDFShader_41() { return &___m_isSDFShader_41; }
	inline void set_m_isSDFShader_41(bool value)
	{
		___m_isSDFShader_41 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_42() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sharedMaterial_42)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_sharedMaterial_42() const { return ___m_sharedMaterial_42; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_sharedMaterial_42() { return &___m_sharedMaterial_42; }
	inline void set_m_sharedMaterial_42(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_sharedMaterial_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_43() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterial_43)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_currentMaterial_43() const { return ___m_currentMaterial_43; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_currentMaterial_43() { return &___m_currentMaterial_43; }
	inline void set_m_currentMaterial_43(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_currentMaterial_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_43), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_47() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentMaterialIndex_47)); }
	inline int32_t get_m_currentMaterialIndex_47() const { return ___m_currentMaterialIndex_47; }
	inline int32_t* get_address_of_m_currentMaterialIndex_47() { return &___m_currentMaterialIndex_47; }
	inline void set_m_currentMaterialIndex_47(int32_t value)
	{
		___m_currentMaterialIndex_47 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_48() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSharedMaterials_48)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontSharedMaterials_48() const { return ___m_fontSharedMaterials_48; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontSharedMaterials_48() { return &___m_fontSharedMaterials_48; }
	inline void set_m_fontSharedMaterials_48(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontSharedMaterials_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_48), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_49() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterial_49)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_fontMaterial_49() const { return ___m_fontMaterial_49; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_fontMaterial_49() { return &___m_fontMaterial_49; }
	inline void set_m_fontMaterial_49(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_fontMaterial_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_49), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_50() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontMaterials_50)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get_m_fontMaterials_50() const { return ___m_fontMaterials_50; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of_m_fontMaterials_50() { return &___m_fontMaterials_50; }
	inline void set_m_fontMaterials_50(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		___m_fontMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_51() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaterialDirty_51)); }
	inline bool get_m_isMaterialDirty_51() const { return ___m_isMaterialDirty_51; }
	inline bool* get_address_of_m_isMaterialDirty_51() { return &___m_isMaterialDirty_51; }
	inline void set_m_isMaterialDirty_51(bool value)
	{
		___m_isMaterialDirty_51 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_52() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor32_52)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_fontColor32_52() const { return ___m_fontColor32_52; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_fontColor32_52() { return &___m_fontColor32_52; }
	inline void set_m_fontColor32_52(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_fontColor32_52 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColor_53)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fontColor_53() const { return ___m_fontColor_53; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fontColor_53() { return &___m_fontColor_53; }
	inline void set_m_fontColor_53(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fontColor_53 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_55() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColor_55)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_underlineColor_55() const { return ___m_underlineColor_55; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_underlineColor_55() { return &___m_underlineColor_55; }
	inline void set_m_underlineColor_55(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_underlineColor_55 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_56() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColor_56)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_strikethroughColor_56() const { return ___m_strikethroughColor_56; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_strikethroughColor_56() { return &___m_strikethroughColor_56; }
	inline void set_m_strikethroughColor_56(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_strikethroughColor_56 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_57() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableVertexGradient_57)); }
	inline bool get_m_enableVertexGradient_57() const { return ___m_enableVertexGradient_57; }
	inline bool* get_address_of_m_enableVertexGradient_57() { return &___m_enableVertexGradient_57; }
	inline void set_m_enableVertexGradient_57(bool value)
	{
		___m_enableVertexGradient_57 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_58() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorMode_58)); }
	inline int32_t get_m_colorMode_58() const { return ___m_colorMode_58; }
	inline int32_t* get_address_of_m_colorMode_58() { return &___m_colorMode_58; }
	inline void set_m_colorMode_58(int32_t value)
	{
		___m_colorMode_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_59() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradient_59)); }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  get_m_fontColorGradient_59() const { return ___m_fontColorGradient_59; }
	inline VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D * get_address_of_m_fontColorGradient_59() { return &___m_fontColorGradient_59; }
	inline void set_m_fontColorGradient_59(VertexGradient_t673FE70EC807F322353FB5B9A790207A57DBFC0D  value)
	{
		___m_fontColorGradient_59 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontColorGradientPreset_60)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_fontColorGradientPreset_60() const { return ___m_fontColorGradientPreset_60; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_fontColorGradientPreset_60() { return &___m_fontColorGradientPreset_60; }
	inline void set_m_fontColorGradientPreset_60(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_fontColorGradientPreset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_61() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAsset_61)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_spriteAsset_61() const { return ___m_spriteAsset_61; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_spriteAsset_61() { return &___m_spriteAsset_61; }
	inline void set_m_spriteAsset_61(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_spriteAsset_61 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_61), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_62() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintAllSprites_62)); }
	inline bool get_m_tintAllSprites_62() const { return ___m_tintAllSprites_62; }
	inline bool* get_address_of_m_tintAllSprites_62() { return &___m_tintAllSprites_62; }
	inline void set_m_tintAllSprites_62(bool value)
	{
		___m_tintAllSprites_62 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_63() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tintSprite_63)); }
	inline bool get_m_tintSprite_63() const { return ___m_tintSprite_63; }
	inline bool* get_address_of_m_tintSprite_63() { return &___m_tintSprite_63; }
	inline void set_m_tintSprite_63(bool value)
	{
		___m_tintSprite_63 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_64() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteColor_64)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_spriteColor_64() const { return ___m_spriteColor_64; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_spriteColor_64() { return &___m_spriteColor_64; }
	inline void set_m_spriteColor_64(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_spriteColor_64 = value;
	}

	inline static int32_t get_offset_of_m_StyleSheet_65() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_StyleSheet_65)); }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * get_m_StyleSheet_65() const { return ___m_StyleSheet_65; }
	inline TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E ** get_address_of_m_StyleSheet_65() { return &___m_StyleSheet_65; }
	inline void set_m_StyleSheet_65(TMP_StyleSheet_t8E2FC777D06D295BE700B8EDE56389D3581BA94E * value)
	{
		___m_StyleSheet_65 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StyleSheet_65), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyle_66() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyle_66)); }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * get_m_TextStyle_66() const { return ___m_TextStyle_66; }
	inline TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB ** get_address_of_m_TextStyle_66() { return &___m_TextStyle_66; }
	inline void set_m_TextStyle_66(TMP_Style_t078D8A76F4A60B868298420272B7089582EF53AB * value)
	{
		___m_TextStyle_66 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyle_66), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleHashCode_67() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleHashCode_67)); }
	inline int32_t get_m_TextStyleHashCode_67() const { return ___m_TextStyleHashCode_67; }
	inline int32_t* get_address_of_m_TextStyleHashCode_67() { return &___m_TextStyleHashCode_67; }
	inline void set_m_TextStyleHashCode_67(int32_t value)
	{
		___m_TextStyleHashCode_67 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_68() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overrideHtmlColors_68)); }
	inline bool get_m_overrideHtmlColors_68() const { return ___m_overrideHtmlColors_68; }
	inline bool* get_address_of_m_overrideHtmlColors_68() { return &___m_overrideHtmlColors_68; }
	inline void set_m_overrideHtmlColors_68(bool value)
	{
		___m_overrideHtmlColors_68 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_69() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_faceColor_69)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_faceColor_69() const { return ___m_faceColor_69; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_faceColor_69() { return &___m_faceColor_69; }
	inline void set_m_faceColor_69(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_faceColor_69 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_70() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineColor_70)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_outlineColor_70() const { return ___m_outlineColor_70; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_outlineColor_70() { return &___m_outlineColor_70; }
	inline void set_m_outlineColor_70(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_outlineColor_70 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_71() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_outlineWidth_71)); }
	inline float get_m_outlineWidth_71() const { return ___m_outlineWidth_71; }
	inline float* get_address_of_m_outlineWidth_71() { return &___m_outlineWidth_71; }
	inline void set_m_outlineWidth_71(float value)
	{
		___m_outlineWidth_71 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_72() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSize_72)); }
	inline float get_m_fontSize_72() const { return ___m_fontSize_72; }
	inline float* get_address_of_m_fontSize_72() { return &___m_fontSize_72; }
	inline void set_m_fontSize_72(float value)
	{
		___m_fontSize_72 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_73() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentFontSize_73)); }
	inline float get_m_currentFontSize_73() const { return ___m_currentFontSize_73; }
	inline float* get_address_of_m_currentFontSize_73() { return &___m_currentFontSize_73; }
	inline void set_m_currentFontSize_73(float value)
	{
		___m_currentFontSize_73 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_74() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeBase_74)); }
	inline float get_m_fontSizeBase_74() const { return ___m_fontSizeBase_74; }
	inline float* get_address_of_m_fontSizeBase_74() { return &___m_fontSizeBase_74; }
	inline void set_m_fontSizeBase_74(float value)
	{
		___m_fontSizeBase_74 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_75() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_sizeStack_75)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_sizeStack_75() const { return ___m_sizeStack_75; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_sizeStack_75() { return &___m_sizeStack_75; }
	inline void set_m_sizeStack_75(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_sizeStack_75 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_75))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_76() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontWeight_76)); }
	inline int32_t get_m_fontWeight_76() const { return ___m_fontWeight_76; }
	inline int32_t* get_address_of_m_fontWeight_76() { return &___m_fontWeight_76; }
	inline void set_m_fontWeight_76(int32_t value)
	{
		___m_fontWeight_76 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_77() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightInternal_77)); }
	inline int32_t get_m_FontWeightInternal_77() const { return ___m_FontWeightInternal_77; }
	inline int32_t* get_address_of_m_FontWeightInternal_77() { return &___m_FontWeightInternal_77; }
	inline void set_m_FontWeightInternal_77(int32_t value)
	{
		___m_FontWeightInternal_77 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_78() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontWeightStack_78)); }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  get_m_FontWeightStack_78() const { return ___m_FontWeightStack_78; }
	inline TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7 * get_address_of_m_FontWeightStack_78() { return &___m_FontWeightStack_78; }
	inline void set_m_FontWeightStack_78(TMP_TextProcessingStack_1_tC2FDE14AC486023AEB4D20CB306F9198CBE168C7  value)
	{
		___m_FontWeightStack_78 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_78))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_79() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableAutoSizing_79)); }
	inline bool get_m_enableAutoSizing_79() const { return ___m_enableAutoSizing_79; }
	inline bool* get_address_of_m_enableAutoSizing_79() { return &___m_enableAutoSizing_79; }
	inline void set_m_enableAutoSizing_79(bool value)
	{
		___m_enableAutoSizing_79 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_80() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxFontSize_80)); }
	inline float get_m_maxFontSize_80() const { return ___m_maxFontSize_80; }
	inline float* get_address_of_m_maxFontSize_80() { return &___m_maxFontSize_80; }
	inline void set_m_maxFontSize_80(float value)
	{
		___m_maxFontSize_80 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_81() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minFontSize_81)); }
	inline float get_m_minFontSize_81() const { return ___m_minFontSize_81; }
	inline float* get_address_of_m_minFontSize_81() { return &___m_minFontSize_81; }
	inline void set_m_minFontSize_81(float value)
	{
		___m_minFontSize_81 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeIterationCount_82() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeIterationCount_82)); }
	inline int32_t get_m_AutoSizeIterationCount_82() const { return ___m_AutoSizeIterationCount_82; }
	inline int32_t* get_address_of_m_AutoSizeIterationCount_82() { return &___m_AutoSizeIterationCount_82; }
	inline void set_m_AutoSizeIterationCount_82(int32_t value)
	{
		___m_AutoSizeIterationCount_82 = value;
	}

	inline static int32_t get_offset_of_m_AutoSizeMaxIterationCount_83() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_AutoSizeMaxIterationCount_83)); }
	inline int32_t get_m_AutoSizeMaxIterationCount_83() const { return ___m_AutoSizeMaxIterationCount_83; }
	inline int32_t* get_address_of_m_AutoSizeMaxIterationCount_83() { return &___m_AutoSizeMaxIterationCount_83; }
	inline void set_m_AutoSizeMaxIterationCount_83(int32_t value)
	{
		___m_AutoSizeMaxIterationCount_83 = value;
	}

	inline static int32_t get_offset_of_m_IsAutoSizePointSizeSet_84() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsAutoSizePointSizeSet_84)); }
	inline bool get_m_IsAutoSizePointSizeSet_84() const { return ___m_IsAutoSizePointSizeSet_84; }
	inline bool* get_address_of_m_IsAutoSizePointSizeSet_84() { return &___m_IsAutoSizePointSizeSet_84; }
	inline void set_m_IsAutoSizePointSizeSet_84(bool value)
	{
		___m_IsAutoSizePointSizeSet_84 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_85() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMin_85)); }
	inline float get_m_fontSizeMin_85() const { return ___m_fontSizeMin_85; }
	inline float* get_address_of_m_fontSizeMin_85() { return &___m_fontSizeMin_85; }
	inline void set_m_fontSizeMin_85(float value)
	{
		___m_fontSizeMin_85 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_86() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontSizeMax_86)); }
	inline float get_m_fontSizeMax_86() const { return ___m_fontSizeMax_86; }
	inline float* get_address_of_m_fontSizeMax_86() { return &___m_fontSizeMax_86; }
	inline void set_m_fontSizeMax_86(float value)
	{
		___m_fontSizeMax_86 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_87() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyle_87)); }
	inline int32_t get_m_fontStyle_87() const { return ___m_fontStyle_87; }
	inline int32_t* get_address_of_m_fontStyle_87() { return &___m_fontStyle_87; }
	inline void set_m_fontStyle_87(int32_t value)
	{
		___m_fontStyle_87 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_88() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FontStyleInternal_88)); }
	inline int32_t get_m_FontStyleInternal_88() const { return ___m_FontStyleInternal_88; }
	inline int32_t* get_address_of_m_FontStyleInternal_88() { return &___m_FontStyleInternal_88; }
	inline void set_m_FontStyleInternal_88(int32_t value)
	{
		___m_FontStyleInternal_88 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_89() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontStyleStack_89)); }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  get_m_fontStyleStack_89() const { return ___m_fontStyleStack_89; }
	inline TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9 * get_address_of_m_fontStyleStack_89() { return &___m_fontStyleStack_89; }
	inline void set_m_fontStyleStack_89(TMP_FontStyleStack_tAD8C041F7E36517A3CF6E8301D6913159EE2D4D9  value)
	{
		___m_fontStyleStack_89 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_90() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingBold_90)); }
	inline bool get_m_isUsingBold_90() const { return ___m_isUsingBold_90; }
	inline bool* get_address_of_m_isUsingBold_90() { return &___m_isUsingBold_90; }
	inline void set_m_isUsingBold_90(bool value)
	{
		___m_isUsingBold_90 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalAlignment_91() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HorizontalAlignment_91)); }
	inline int32_t get_m_HorizontalAlignment_91() const { return ___m_HorizontalAlignment_91; }
	inline int32_t* get_address_of_m_HorizontalAlignment_91() { return &___m_HorizontalAlignment_91; }
	inline void set_m_HorizontalAlignment_91(int32_t value)
	{
		___m_HorizontalAlignment_91 = value;
	}

	inline static int32_t get_offset_of_m_VerticalAlignment_92() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VerticalAlignment_92)); }
	inline int32_t get_m_VerticalAlignment_92() const { return ___m_VerticalAlignment_92; }
	inline int32_t* get_address_of_m_VerticalAlignment_92() { return &___m_VerticalAlignment_92; }
	inline void set_m_VerticalAlignment_92(int32_t value)
	{
		___m_VerticalAlignment_92 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_93() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textAlignment_93)); }
	inline int32_t get_m_textAlignment_93() const { return ___m_textAlignment_93; }
	inline int32_t* get_address_of_m_textAlignment_93() { return &___m_textAlignment_93; }
	inline void set_m_textAlignment_93(int32_t value)
	{
		___m_textAlignment_93 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_94() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustification_94)); }
	inline int32_t get_m_lineJustification_94() const { return ___m_lineJustification_94; }
	inline int32_t* get_address_of_m_lineJustification_94() { return &___m_lineJustification_94; }
	inline void set_m_lineJustification_94(int32_t value)
	{
		___m_lineJustification_94 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_95() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineJustificationStack_95)); }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  get_m_lineJustificationStack_95() const { return ___m_lineJustificationStack_95; }
	inline TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B * get_address_of_m_lineJustificationStack_95() { return &___m_lineJustificationStack_95; }
	inline void set_m_lineJustificationStack_95(TMP_TextProcessingStack_1_t860FCBD32172CBAC38125AB43150338E7CF55B1B  value)
	{
		___m_lineJustificationStack_95 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_95))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_96() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textContainerLocalCorners_96)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_textContainerLocalCorners_96() const { return ___m_textContainerLocalCorners_96; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_textContainerLocalCorners_96() { return &___m_textContainerLocalCorners_96; }
	inline void set_m_textContainerLocalCorners_96(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_textContainerLocalCorners_96 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_96), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_97() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterSpacing_97)); }
	inline float get_m_characterSpacing_97() const { return ___m_characterSpacing_97; }
	inline float* get_address_of_m_characterSpacing_97() { return &___m_characterSpacing_97; }
	inline void set_m_characterSpacing_97(float value)
	{
		___m_characterSpacing_97 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_98() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cSpacing_98)); }
	inline float get_m_cSpacing_98() const { return ___m_cSpacing_98; }
	inline float* get_address_of_m_cSpacing_98() { return &___m_cSpacing_98; }
	inline void set_m_cSpacing_98(float value)
	{
		___m_cSpacing_98 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_99() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_monoSpacing_99)); }
	inline float get_m_monoSpacing_99() const { return ___m_monoSpacing_99; }
	inline float* get_address_of_m_monoSpacing_99() { return &___m_monoSpacing_99; }
	inline void set_m_monoSpacing_99(float value)
	{
		___m_monoSpacing_99 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_100() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordSpacing_100)); }
	inline float get_m_wordSpacing_100() const { return ___m_wordSpacing_100; }
	inline float* get_address_of_m_wordSpacing_100() { return &___m_wordSpacing_100; }
	inline void set_m_wordSpacing_100(float value)
	{
		___m_wordSpacing_100 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_101() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacing_101)); }
	inline float get_m_lineSpacing_101() const { return ___m_lineSpacing_101; }
	inline float* get_address_of_m_lineSpacing_101() { return &___m_lineSpacing_101; }
	inline void set_m_lineSpacing_101(float value)
	{
		___m_lineSpacing_101 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_102() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingDelta_102)); }
	inline float get_m_lineSpacingDelta_102() const { return ___m_lineSpacingDelta_102; }
	inline float* get_address_of_m_lineSpacingDelta_102() { return &___m_lineSpacingDelta_102; }
	inline void set_m_lineSpacingDelta_102(float value)
	{
		___m_lineSpacingDelta_102 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_103() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineHeight_103)); }
	inline float get_m_lineHeight_103() const { return ___m_lineHeight_103; }
	inline float* get_address_of_m_lineHeight_103() { return &___m_lineHeight_103; }
	inline void set_m_lineHeight_103(float value)
	{
		___m_lineHeight_103 = value;
	}

	inline static int32_t get_offset_of_m_IsDrivenLineSpacing_104() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsDrivenLineSpacing_104)); }
	inline bool get_m_IsDrivenLineSpacing_104() const { return ___m_IsDrivenLineSpacing_104; }
	inline bool* get_address_of_m_IsDrivenLineSpacing_104() { return &___m_IsDrivenLineSpacing_104; }
	inline void set_m_IsDrivenLineSpacing_104(bool value)
	{
		___m_IsDrivenLineSpacing_104 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_105() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineSpacingMax_105)); }
	inline float get_m_lineSpacingMax_105() const { return ___m_lineSpacingMax_105; }
	inline float* get_address_of_m_lineSpacingMax_105() { return &___m_lineSpacingMax_105; }
	inline void set_m_lineSpacingMax_105(float value)
	{
		___m_lineSpacingMax_105 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_106() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_paragraphSpacing_106)); }
	inline float get_m_paragraphSpacing_106() const { return ___m_paragraphSpacing_106; }
	inline float* get_address_of_m_paragraphSpacing_106() { return &___m_paragraphSpacing_106; }
	inline void set_m_paragraphSpacing_106(float value)
	{
		___m_paragraphSpacing_106 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_107() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthMaxAdj_107)); }
	inline float get_m_charWidthMaxAdj_107() const { return ___m_charWidthMaxAdj_107; }
	inline float* get_address_of_m_charWidthMaxAdj_107() { return &___m_charWidthMaxAdj_107; }
	inline void set_m_charWidthMaxAdj_107(float value)
	{
		___m_charWidthMaxAdj_107 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_108() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charWidthAdjDelta_108)); }
	inline float get_m_charWidthAdjDelta_108() const { return ___m_charWidthAdjDelta_108; }
	inline float* get_address_of_m_charWidthAdjDelta_108() { return &___m_charWidthAdjDelta_108; }
	inline void set_m_charWidthAdjDelta_108(float value)
	{
		___m_charWidthAdjDelta_108 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_109() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableWordWrapping_109)); }
	inline bool get_m_enableWordWrapping_109() const { return ___m_enableWordWrapping_109; }
	inline bool* get_address_of_m_enableWordWrapping_109() { return &___m_enableWordWrapping_109; }
	inline void set_m_enableWordWrapping_109(bool value)
	{
		___m_enableWordWrapping_109 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_110() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCharacterWrappingEnabled_110)); }
	inline bool get_m_isCharacterWrappingEnabled_110() const { return ___m_isCharacterWrappingEnabled_110; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_110() { return &___m_isCharacterWrappingEnabled_110; }
	inline void set_m_isCharacterWrappingEnabled_110(bool value)
	{
		___m_isCharacterWrappingEnabled_110 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_111() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNonBreakingSpace_111)); }
	inline bool get_m_isNonBreakingSpace_111() const { return ___m_isNonBreakingSpace_111; }
	inline bool* get_address_of_m_isNonBreakingSpace_111() { return &___m_isNonBreakingSpace_111; }
	inline void set_m_isNonBreakingSpace_111(bool value)
	{
		___m_isNonBreakingSpace_111 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_112() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isIgnoringAlignment_112)); }
	inline bool get_m_isIgnoringAlignment_112() const { return ___m_isIgnoringAlignment_112; }
	inline bool* get_address_of_m_isIgnoringAlignment_112() { return &___m_isIgnoringAlignment_112; }
	inline void set_m_isIgnoringAlignment_112(bool value)
	{
		___m_isIgnoringAlignment_112 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_113() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_wordWrappingRatios_113)); }
	inline float get_m_wordWrappingRatios_113() const { return ___m_wordWrappingRatios_113; }
	inline float* get_address_of_m_wordWrappingRatios_113() { return &___m_wordWrappingRatios_113; }
	inline void set_m_wordWrappingRatios_113(float value)
	{
		___m_wordWrappingRatios_113 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_114() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_overflowMode_114)); }
	inline int32_t get_m_overflowMode_114() const { return ___m_overflowMode_114; }
	inline int32_t* get_address_of_m_overflowMode_114() { return &___m_overflowMode_114; }
	inline void set_m_overflowMode_114(int32_t value)
	{
		___m_overflowMode_114 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_115() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstOverflowCharacterIndex_115)); }
	inline int32_t get_m_firstOverflowCharacterIndex_115() const { return ___m_firstOverflowCharacterIndex_115; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_115() { return &___m_firstOverflowCharacterIndex_115; }
	inline void set_m_firstOverflowCharacterIndex_115(int32_t value)
	{
		___m_firstOverflowCharacterIndex_115 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_116() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_linkedTextComponent_116)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_m_linkedTextComponent_116() const { return ___m_linkedTextComponent_116; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_m_linkedTextComponent_116() { return &___m_linkedTextComponent_116; }
	inline void set_m_linkedTextComponent_116(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___m_linkedTextComponent_116 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_116), (void*)value);
	}

	inline static int32_t get_offset_of_parentLinkedComponent_117() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___parentLinkedComponent_117)); }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * get_parentLinkedComponent_117() const { return ___parentLinkedComponent_117; }
	inline TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 ** get_address_of_parentLinkedComponent_117() { return &___parentLinkedComponent_117; }
	inline void set_parentLinkedComponent_117(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * value)
	{
		___parentLinkedComponent_117 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentLinkedComponent_117), (void*)value);
	}

	inline static int32_t get_offset_of_m_isTextTruncated_118() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isTextTruncated_118)); }
	inline bool get_m_isTextTruncated_118() const { return ___m_isTextTruncated_118; }
	inline bool* get_address_of_m_isTextTruncated_118() { return &___m_isTextTruncated_118; }
	inline void set_m_isTextTruncated_118(bool value)
	{
		___m_isTextTruncated_118 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_119() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableKerning_119)); }
	inline bool get_m_enableKerning_119() const { return ___m_enableKerning_119; }
	inline bool* get_address_of_m_enableKerning_119() { return &___m_enableKerning_119; }
	inline void set_m_enableKerning_119(bool value)
	{
		___m_enableKerning_119 = value;
	}

	inline static int32_t get_offset_of_m_GlyphHorizontalAdvanceAdjustment_120() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_GlyphHorizontalAdvanceAdjustment_120)); }
	inline float get_m_GlyphHorizontalAdvanceAdjustment_120() const { return ___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline float* get_address_of_m_GlyphHorizontalAdvanceAdjustment_120() { return &___m_GlyphHorizontalAdvanceAdjustment_120; }
	inline void set_m_GlyphHorizontalAdvanceAdjustment_120(float value)
	{
		___m_GlyphHorizontalAdvanceAdjustment_120 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_121() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_enableExtraPadding_121)); }
	inline bool get_m_enableExtraPadding_121() const { return ___m_enableExtraPadding_121; }
	inline bool* get_address_of_m_enableExtraPadding_121() { return &___m_enableExtraPadding_121; }
	inline void set_m_enableExtraPadding_121(bool value)
	{
		___m_enableExtraPadding_121 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_122() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___checkPaddingRequired_122)); }
	inline bool get_checkPaddingRequired_122() const { return ___checkPaddingRequired_122; }
	inline bool* get_address_of_checkPaddingRequired_122() { return &___checkPaddingRequired_122; }
	inline void set_checkPaddingRequired_122(bool value)
	{
		___checkPaddingRequired_122 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_123() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isRichText_123)); }
	inline bool get_m_isRichText_123() const { return ___m_isRichText_123; }
	inline bool* get_address_of_m_isRichText_123() { return &___m_isRichText_123; }
	inline void set_m_isRichText_123(bool value)
	{
		___m_isRichText_123 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_124() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_parseCtrlCharacters_124)); }
	inline bool get_m_parseCtrlCharacters_124() const { return ___m_parseCtrlCharacters_124; }
	inline bool* get_address_of_m_parseCtrlCharacters_124() { return &___m_parseCtrlCharacters_124; }
	inline void set_m_parseCtrlCharacters_124(bool value)
	{
		___m_parseCtrlCharacters_124 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_125() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOverlay_125)); }
	inline bool get_m_isOverlay_125() const { return ___m_isOverlay_125; }
	inline bool* get_address_of_m_isOverlay_125() { return &___m_isOverlay_125; }
	inline void set_m_isOverlay_125(bool value)
	{
		___m_isOverlay_125 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_126() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isOrthographic_126)); }
	inline bool get_m_isOrthographic_126() const { return ___m_isOrthographic_126; }
	inline bool* get_address_of_m_isOrthographic_126() { return &___m_isOrthographic_126; }
	inline void set_m_isOrthographic_126(bool value)
	{
		___m_isOrthographic_126 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_127() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCullingEnabled_127)); }
	inline bool get_m_isCullingEnabled_127() const { return ___m_isCullingEnabled_127; }
	inline bool* get_address_of_m_isCullingEnabled_127() { return &___m_isCullingEnabled_127; }
	inline void set_m_isCullingEnabled_127(bool value)
	{
		___m_isCullingEnabled_127 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_128() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isMaskingEnabled_128)); }
	inline bool get_m_isMaskingEnabled_128() const { return ___m_isMaskingEnabled_128; }
	inline bool* get_address_of_m_isMaskingEnabled_128() { return &___m_isMaskingEnabled_128; }
	inline void set_m_isMaskingEnabled_128(bool value)
	{
		___m_isMaskingEnabled_128 = value;
	}

	inline static int32_t get_offset_of_isMaskUpdateRequired_129() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___isMaskUpdateRequired_129)); }
	inline bool get_isMaskUpdateRequired_129() const { return ___isMaskUpdateRequired_129; }
	inline bool* get_address_of_isMaskUpdateRequired_129() { return &___isMaskUpdateRequired_129; }
	inline void set_isMaskUpdateRequired_129(bool value)
	{
		___isMaskUpdateRequired_129 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_130() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreCulling_130)); }
	inline bool get_m_ignoreCulling_130() const { return ___m_ignoreCulling_130; }
	inline bool* get_address_of_m_ignoreCulling_130() { return &___m_ignoreCulling_130; }
	inline void set_m_ignoreCulling_130(bool value)
	{
		___m_ignoreCulling_130 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_131() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_horizontalMapping_131)); }
	inline int32_t get_m_horizontalMapping_131() const { return ___m_horizontalMapping_131; }
	inline int32_t* get_address_of_m_horizontalMapping_131() { return &___m_horizontalMapping_131; }
	inline void set_m_horizontalMapping_131(int32_t value)
	{
		___m_horizontalMapping_131 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_132() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_verticalMapping_132)); }
	inline int32_t get_m_verticalMapping_132() const { return ___m_verticalMapping_132; }
	inline int32_t* get_address_of_m_verticalMapping_132() { return &___m_verticalMapping_132; }
	inline void set_m_verticalMapping_132(int32_t value)
	{
		___m_verticalMapping_132 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_133() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_uvLineOffset_133)); }
	inline float get_m_uvLineOffset_133() const { return ___m_uvLineOffset_133; }
	inline float* get_address_of_m_uvLineOffset_133() { return &___m_uvLineOffset_133; }
	inline void set_m_uvLineOffset_133(float value)
	{
		___m_uvLineOffset_133 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_134() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderMode_134)); }
	inline int32_t get_m_renderMode_134() const { return ___m_renderMode_134; }
	inline int32_t* get_address_of_m_renderMode_134() { return &___m_renderMode_134; }
	inline void set_m_renderMode_134(int32_t value)
	{
		___m_renderMode_134 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_135() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_geometrySortingOrder_135)); }
	inline int32_t get_m_geometrySortingOrder_135() const { return ___m_geometrySortingOrder_135; }
	inline int32_t* get_address_of_m_geometrySortingOrder_135() { return &___m_geometrySortingOrder_135; }
	inline void set_m_geometrySortingOrder_135(int32_t value)
	{
		___m_geometrySortingOrder_135 = value;
	}

	inline static int32_t get_offset_of_m_IsTextObjectScaleStatic_136() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_IsTextObjectScaleStatic_136)); }
	inline bool get_m_IsTextObjectScaleStatic_136() const { return ___m_IsTextObjectScaleStatic_136; }
	inline bool* get_address_of_m_IsTextObjectScaleStatic_136() { return &___m_IsTextObjectScaleStatic_136; }
	inline void set_m_IsTextObjectScaleStatic_136(bool value)
	{
		___m_IsTextObjectScaleStatic_136 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_137() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_VertexBufferAutoSizeReduction_137)); }
	inline bool get_m_VertexBufferAutoSizeReduction_137() const { return ___m_VertexBufferAutoSizeReduction_137; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_137() { return &___m_VertexBufferAutoSizeReduction_137; }
	inline void set_m_VertexBufferAutoSizeReduction_137(bool value)
	{
		___m_VertexBufferAutoSizeReduction_137 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_138() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacter_138)); }
	inline int32_t get_m_firstVisibleCharacter_138() const { return ___m_firstVisibleCharacter_138; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_138() { return &___m_firstVisibleCharacter_138; }
	inline void set_m_firstVisibleCharacter_138(int32_t value)
	{
		___m_firstVisibleCharacter_138 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_139() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleCharacters_139)); }
	inline int32_t get_m_maxVisibleCharacters_139() const { return ___m_maxVisibleCharacters_139; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_139() { return &___m_maxVisibleCharacters_139; }
	inline void set_m_maxVisibleCharacters_139(int32_t value)
	{
		___m_maxVisibleCharacters_139 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_140() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleWords_140)); }
	inline int32_t get_m_maxVisibleWords_140() const { return ___m_maxVisibleWords_140; }
	inline int32_t* get_address_of_m_maxVisibleWords_140() { return &___m_maxVisibleWords_140; }
	inline void set_m_maxVisibleWords_140(int32_t value)
	{
		___m_maxVisibleWords_140 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_141() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxVisibleLines_141)); }
	inline int32_t get_m_maxVisibleLines_141() const { return ___m_maxVisibleLines_141; }
	inline int32_t* get_address_of_m_maxVisibleLines_141() { return &___m_maxVisibleLines_141; }
	inline void set_m_maxVisibleLines_141(int32_t value)
	{
		___m_maxVisibleLines_141 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_142() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_useMaxVisibleDescender_142)); }
	inline bool get_m_useMaxVisibleDescender_142() const { return ___m_useMaxVisibleDescender_142; }
	inline bool* get_address_of_m_useMaxVisibleDescender_142() { return &___m_useMaxVisibleDescender_142; }
	inline void set_m_useMaxVisibleDescender_142(bool value)
	{
		___m_useMaxVisibleDescender_142 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_143() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageToDisplay_143)); }
	inline int32_t get_m_pageToDisplay_143() const { return ___m_pageToDisplay_143; }
	inline int32_t* get_address_of_m_pageToDisplay_143() { return &___m_pageToDisplay_143; }
	inline void set_m_pageToDisplay_143(int32_t value)
	{
		___m_pageToDisplay_143 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_144() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isNewPage_144)); }
	inline bool get_m_isNewPage_144() const { return ___m_isNewPage_144; }
	inline bool* get_address_of_m_isNewPage_144() { return &___m_isNewPage_144; }
	inline void set_m_isNewPage_144(bool value)
	{
		___m_isNewPage_144 = value;
	}

	inline static int32_t get_offset_of_m_margin_145() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_margin_145)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_margin_145() const { return ___m_margin_145; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_margin_145() { return &___m_margin_145; }
	inline void set_m_margin_145(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_margin_145 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_146() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginLeft_146)); }
	inline float get_m_marginLeft_146() const { return ___m_marginLeft_146; }
	inline float* get_address_of_m_marginLeft_146() { return &___m_marginLeft_146; }
	inline void set_m_marginLeft_146(float value)
	{
		___m_marginLeft_146 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_147() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginRight_147)); }
	inline float get_m_marginRight_147() const { return ___m_marginRight_147; }
	inline float* get_address_of_m_marginRight_147() { return &___m_marginRight_147; }
	inline void set_m_marginRight_147(float value)
	{
		___m_marginRight_147 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_148() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginWidth_148)); }
	inline float get_m_marginWidth_148() const { return ___m_marginWidth_148; }
	inline float* get_address_of_m_marginWidth_148() { return &___m_marginWidth_148; }
	inline void set_m_marginWidth_148(float value)
	{
		___m_marginWidth_148 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_149() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_marginHeight_149)); }
	inline float get_m_marginHeight_149() const { return ___m_marginHeight_149; }
	inline float* get_address_of_m_marginHeight_149() { return &___m_marginHeight_149; }
	inline void set_m_marginHeight_149(float value)
	{
		___m_marginHeight_149 = value;
	}

	inline static int32_t get_offset_of_m_width_150() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_width_150)); }
	inline float get_m_width_150() const { return ___m_width_150; }
	inline float* get_address_of_m_width_150() { return &___m_width_150; }
	inline void set_m_width_150(float value)
	{
		___m_width_150 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_151() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textInfo_151)); }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * get_m_textInfo_151() const { return ___m_textInfo_151; }
	inline TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 ** get_address_of_m_textInfo_151() { return &___m_textInfo_151; }
	inline void set_m_textInfo_151(TMP_TextInfo_t33ACB74FB814F588497640C86976E5DB6DD7B547 * value)
	{
		___m_textInfo_151 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_151), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_152() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_havePropertiesChanged_152)); }
	inline bool get_m_havePropertiesChanged_152() const { return ___m_havePropertiesChanged_152; }
	inline bool* get_address_of_m_havePropertiesChanged_152() { return &___m_havePropertiesChanged_152; }
	inline void set_m_havePropertiesChanged_152(bool value)
	{
		___m_havePropertiesChanged_152 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_153() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isUsingLegacyAnimationComponent_153)); }
	inline bool get_m_isUsingLegacyAnimationComponent_153() const { return ___m_isUsingLegacyAnimationComponent_153; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_153() { return &___m_isUsingLegacyAnimationComponent_153; }
	inline void set_m_isUsingLegacyAnimationComponent_153(bool value)
	{
		___m_isUsingLegacyAnimationComponent_153 = value;
	}

	inline static int32_t get_offset_of_m_transform_154() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_transform_154)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_transform_154() const { return ___m_transform_154; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_transform_154() { return &___m_transform_154; }
	inline void set_m_transform_154(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_transform_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_155() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_rectTransform_155)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_rectTransform_155() const { return ___m_rectTransform_155; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_rectTransform_155() { return &___m_rectTransform_155; }
	inline void set_m_rectTransform_155(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_rectTransform_155 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_155), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousRectTransformSize_156() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousRectTransformSize_156)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousRectTransformSize_156() const { return ___m_PreviousRectTransformSize_156; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousRectTransformSize_156() { return &___m_PreviousRectTransformSize_156; }
	inline void set_m_PreviousRectTransformSize_156(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousRectTransformSize_156 = value;
	}

	inline static int32_t get_offset_of_m_PreviousPivotPosition_157() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PreviousPivotPosition_157)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PreviousPivotPosition_157() const { return ___m_PreviousPivotPosition_157; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PreviousPivotPosition_157() { return &___m_PreviousPivotPosition_157; }
	inline void set_m_PreviousPivotPosition_157(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PreviousPivotPosition_157 = value;
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___U3CautoSizeTextContainerU3Ek__BackingField_158)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_158() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_158() { return &___U3CautoSizeTextContainerU3Ek__BackingField_158; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_158(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_158 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_159() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_autoSizeTextContainer_159)); }
	inline bool get_m_autoSizeTextContainer_159() const { return ___m_autoSizeTextContainer_159; }
	inline bool* get_address_of_m_autoSizeTextContainer_159() { return &___m_autoSizeTextContainer_159; }
	inline void set_m_autoSizeTextContainer_159(bool value)
	{
		___m_autoSizeTextContainer_159 = value;
	}

	inline static int32_t get_offset_of_m_mesh_160() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_mesh_160)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_mesh_160() const { return ___m_mesh_160; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_mesh_160() { return &___m_mesh_160; }
	inline void set_m_mesh_160(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_mesh_160 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_160), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_161() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isVolumetricText_161)); }
	inline bool get_m_isVolumetricText_161() const { return ___m_isVolumetricText_161; }
	inline bool* get_address_of_m_isVolumetricText_161() { return &___m_isVolumetricText_161; }
	inline void set_m_isVolumetricText_161(bool value)
	{
		___m_isVolumetricText_161 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_164() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___OnPreRenderText_164)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_164() const { return ___OnPreRenderText_164; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_164() { return &___OnPreRenderText_164; }
	inline void set_OnPreRenderText_164(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_164 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_164), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAnimator_165() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimator_165)); }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * get_m_spriteAnimator_165() const { return ___m_spriteAnimator_165; }
	inline TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 ** get_address_of_m_spriteAnimator_165() { return &___m_spriteAnimator_165; }
	inline void set_m_spriteAnimator_165(TMP_SpriteAnimator_t07C769A1F1F85B545DD32357826E08F569E3D902 * value)
	{
		___m_spriteAnimator_165 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_165), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_166() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleHeight_166)); }
	inline float get_m_flexibleHeight_166() const { return ___m_flexibleHeight_166; }
	inline float* get_address_of_m_flexibleHeight_166() { return &___m_flexibleHeight_166; }
	inline void set_m_flexibleHeight_166(float value)
	{
		___m_flexibleHeight_166 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_167() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_flexibleWidth_167)); }
	inline float get_m_flexibleWidth_167() const { return ___m_flexibleWidth_167; }
	inline float* get_address_of_m_flexibleWidth_167() { return &___m_flexibleWidth_167; }
	inline void set_m_flexibleWidth_167(float value)
	{
		___m_flexibleWidth_167 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_168() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minWidth_168)); }
	inline float get_m_minWidth_168() const { return ___m_minWidth_168; }
	inline float* get_address_of_m_minWidth_168() { return &___m_minWidth_168; }
	inline void set_m_minWidth_168(float value)
	{
		___m_minWidth_168 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_169() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_minHeight_169)); }
	inline float get_m_minHeight_169() const { return ___m_minHeight_169; }
	inline float* get_address_of_m_minHeight_169() { return &___m_minHeight_169; }
	inline void set_m_minHeight_169(float value)
	{
		___m_minHeight_169 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_170() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxWidth_170)); }
	inline float get_m_maxWidth_170() const { return ___m_maxWidth_170; }
	inline float* get_address_of_m_maxWidth_170() { return &___m_maxWidth_170; }
	inline void set_m_maxWidth_170(float value)
	{
		___m_maxWidth_170 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_171() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxHeight_171)); }
	inline float get_m_maxHeight_171() const { return ___m_maxHeight_171; }
	inline float* get_address_of_m_maxHeight_171() { return &___m_maxHeight_171; }
	inline void set_m_maxHeight_171(float value)
	{
		___m_maxHeight_171 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_172() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_LayoutElement_172)); }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * get_m_LayoutElement_172() const { return ___m_LayoutElement_172; }
	inline LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF ** get_address_of_m_LayoutElement_172() { return &___m_LayoutElement_172; }
	inline void set_m_LayoutElement_172(LayoutElement_tE514951184806899FE23EC4FA6112A5F2038CECF * value)
	{
		___m_LayoutElement_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_173() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredWidth_173)); }
	inline float get_m_preferredWidth_173() const { return ___m_preferredWidth_173; }
	inline float* get_address_of_m_preferredWidth_173() { return &___m_preferredWidth_173; }
	inline void set_m_preferredWidth_173(float value)
	{
		___m_preferredWidth_173 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_174() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedWidth_174)); }
	inline float get_m_renderedWidth_174() const { return ___m_renderedWidth_174; }
	inline float* get_address_of_m_renderedWidth_174() { return &___m_renderedWidth_174; }
	inline void set_m_renderedWidth_174(float value)
	{
		___m_renderedWidth_174 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_175() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredWidthDirty_175)); }
	inline bool get_m_isPreferredWidthDirty_175() const { return ___m_isPreferredWidthDirty_175; }
	inline bool* get_address_of_m_isPreferredWidthDirty_175() { return &___m_isPreferredWidthDirty_175; }
	inline void set_m_isPreferredWidthDirty_175(bool value)
	{
		___m_isPreferredWidthDirty_175 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_176() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_preferredHeight_176)); }
	inline float get_m_preferredHeight_176() const { return ___m_preferredHeight_176; }
	inline float* get_address_of_m_preferredHeight_176() { return &___m_preferredHeight_176; }
	inline void set_m_preferredHeight_176(float value)
	{
		___m_preferredHeight_176 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_177() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_renderedHeight_177)); }
	inline float get_m_renderedHeight_177() const { return ___m_renderedHeight_177; }
	inline float* get_address_of_m_renderedHeight_177() { return &___m_renderedHeight_177; }
	inline void set_m_renderedHeight_177(float value)
	{
		___m_renderedHeight_177 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_178() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isPreferredHeightDirty_178)); }
	inline bool get_m_isPreferredHeightDirty_178() const { return ___m_isPreferredHeightDirty_178; }
	inline bool* get_address_of_m_isPreferredHeightDirty_178() { return &___m_isPreferredHeightDirty_178; }
	inline void set_m_isPreferredHeightDirty_178(bool value)
	{
		___m_isPreferredHeightDirty_178 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_179() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isCalculatingPreferredValues_179)); }
	inline bool get_m_isCalculatingPreferredValues_179() const { return ___m_isCalculatingPreferredValues_179; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_179() { return &___m_isCalculatingPreferredValues_179; }
	inline void set_m_isCalculatingPreferredValues_179(bool value)
	{
		___m_isCalculatingPreferredValues_179 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_180() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_layoutPriority_180)); }
	inline int32_t get_m_layoutPriority_180() const { return ___m_layoutPriority_180; }
	inline int32_t* get_address_of_m_layoutPriority_180() { return &___m_layoutPriority_180; }
	inline void set_m_layoutPriority_180(int32_t value)
	{
		___m_layoutPriority_180 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_181() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isLayoutDirty_181)); }
	inline bool get_m_isLayoutDirty_181() const { return ___m_isLayoutDirty_181; }
	inline bool* get_address_of_m_isLayoutDirty_181() { return &___m_isLayoutDirty_181; }
	inline void set_m_isLayoutDirty_181(bool value)
	{
		___m_isLayoutDirty_181 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_182() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isAwake_182)); }
	inline bool get_m_isAwake_182() const { return ___m_isAwake_182; }
	inline bool* get_address_of_m_isAwake_182() { return &___m_isAwake_182; }
	inline void set_m_isAwake_182(bool value)
	{
		___m_isAwake_182 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_183() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isWaitingOnResourceLoad_183)); }
	inline bool get_m_isWaitingOnResourceLoad_183() const { return ___m_isWaitingOnResourceLoad_183; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_183() { return &___m_isWaitingOnResourceLoad_183; }
	inline void set_m_isWaitingOnResourceLoad_183(bool value)
	{
		___m_isWaitingOnResourceLoad_183 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_184() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isInputParsingRequired_184)); }
	inline bool get_m_isInputParsingRequired_184() const { return ___m_isInputParsingRequired_184; }
	inline bool* get_address_of_m_isInputParsingRequired_184() { return &___m_isInputParsingRequired_184; }
	inline void set_m_isInputParsingRequired_184(bool value)
	{
		___m_isInputParsingRequired_184 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_185() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_inputSource_185)); }
	inline int32_t get_m_inputSource_185() const { return ___m_inputSource_185; }
	inline int32_t* get_address_of_m_inputSource_185() { return &___m_inputSource_185; }
	inline void set_m_inputSource_185(int32_t value)
	{
		___m_inputSource_185 = value;
	}

	inline static int32_t get_offset_of_m_fontScale_186() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScale_186)); }
	inline float get_m_fontScale_186() const { return ___m_fontScale_186; }
	inline float* get_address_of_m_fontScale_186() { return &___m_fontScale_186; }
	inline void set_m_fontScale_186(float value)
	{
		___m_fontScale_186 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_187() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_fontScaleMultiplier_187)); }
	inline float get_m_fontScaleMultiplier_187() const { return ___m_fontScaleMultiplier_187; }
	inline float* get_address_of_m_fontScaleMultiplier_187() { return &___m_fontScaleMultiplier_187; }
	inline void set_m_fontScaleMultiplier_187(float value)
	{
		___m_fontScaleMultiplier_187 = value;
	}

	inline static int32_t get_offset_of_tag_LineIndent_191() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_LineIndent_191)); }
	inline float get_tag_LineIndent_191() const { return ___tag_LineIndent_191; }
	inline float* get_address_of_tag_LineIndent_191() { return &___tag_LineIndent_191; }
	inline void set_tag_LineIndent_191(float value)
	{
		___tag_LineIndent_191 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_192() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_Indent_192)); }
	inline float get_tag_Indent_192() const { return ___tag_Indent_192; }
	inline float* get_address_of_tag_Indent_192() { return &___tag_Indent_192; }
	inline void set_tag_Indent_192(float value)
	{
		___tag_Indent_192 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_193() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_indentStack_193)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_indentStack_193() const { return ___m_indentStack_193; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_indentStack_193() { return &___m_indentStack_193; }
	inline void set_m_indentStack_193(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_indentStack_193 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_193))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_194() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___tag_NoParsing_194)); }
	inline bool get_tag_NoParsing_194() const { return ___tag_NoParsing_194; }
	inline bool* get_address_of_tag_NoParsing_194() { return &___tag_NoParsing_194; }
	inline void set_tag_NoParsing_194(bool value)
	{
		___tag_NoParsing_194 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_195() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isParsingText_195)); }
	inline bool get_m_isParsingText_195() const { return ___m_isParsingText_195; }
	inline bool* get_address_of_m_isParsingText_195() { return &___m_isParsingText_195; }
	inline void set_m_isParsingText_195(bool value)
	{
		___m_isParsingText_195 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_196() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_FXMatrix_196)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_FXMatrix_196() const { return ___m_FXMatrix_196; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_FXMatrix_196() { return &___m_FXMatrix_196; }
	inline void set_m_FXMatrix_196(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_FXMatrix_196 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_197() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_isFXMatrixSet_197)); }
	inline bool get_m_isFXMatrixSet_197() const { return ___m_isFXMatrixSet_197; }
	inline bool* get_address_of_m_isFXMatrixSet_197() { return &___m_isFXMatrixSet_197; }
	inline void set_m_isFXMatrixSet_197(bool value)
	{
		___m_isFXMatrixSet_197 = value;
	}

	inline static int32_t get_offset_of_m_InternalParsingBuffer_198() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBuffer_198)); }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* get_m_InternalParsingBuffer_198() const { return ___m_InternalParsingBuffer_198; }
	inline UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7** get_address_of_m_InternalParsingBuffer_198() { return &___m_InternalParsingBuffer_198; }
	inline void set_m_InternalParsingBuffer_198(UnicodeCharU5BU5D_tB233FC88865130D0B1EA18DA685C2AF41FB134F7* value)
	{
		___m_InternalParsingBuffer_198 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InternalParsingBuffer_198), (void*)value);
	}

	inline static int32_t get_offset_of_m_InternalParsingBufferSize_199() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_InternalParsingBufferSize_199)); }
	inline int32_t get_m_InternalParsingBufferSize_199() const { return ___m_InternalParsingBufferSize_199; }
	inline int32_t* get_address_of_m_InternalParsingBufferSize_199() { return &___m_InternalParsingBufferSize_199; }
	inline void set_m_InternalParsingBufferSize_199(int32_t value)
	{
		___m_InternalParsingBufferSize_199 = value;
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_200() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_internalCharacterInfo_200)); }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* get_m_internalCharacterInfo_200() const { return ___m_internalCharacterInfo_200; }
	inline TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970** get_address_of_m_internalCharacterInfo_200() { return &___m_internalCharacterInfo_200; }
	inline void set_m_internalCharacterInfo_200(TMP_CharacterInfoU5BU5D_t7128C1B46CF6AB1374135FA31D41ABF23882B970* value)
	{
		___m_internalCharacterInfo_200 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_200), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_201() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_input_CharArray_201)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_input_CharArray_201() const { return ___m_input_CharArray_201; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_input_CharArray_201() { return &___m_input_CharArray_201; }
	inline void set_m_input_CharArray_201(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_input_CharArray_201 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_201), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_202() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_charArray_Length_202)); }
	inline int32_t get_m_charArray_Length_202() const { return ___m_charArray_Length_202; }
	inline int32_t* get_address_of_m_charArray_Length_202() { return &___m_charArray_Length_202; }
	inline void set_m_charArray_Length_202(int32_t value)
	{
		___m_charArray_Length_202 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_203() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_totalCharacterCount_203)); }
	inline int32_t get_m_totalCharacterCount_203() const { return ___m_totalCharacterCount_203; }
	inline int32_t* get_address_of_m_totalCharacterCount_203() { return &___m_totalCharacterCount_203; }
	inline void set_m_totalCharacterCount_203(int32_t value)
	{
		___m_totalCharacterCount_203 = value;
	}

	inline static int32_t get_offset_of_m_characterCount_210() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_characterCount_210)); }
	inline int32_t get_m_characterCount_210() const { return ___m_characterCount_210; }
	inline int32_t* get_address_of_m_characterCount_210() { return &___m_characterCount_210; }
	inline void set_m_characterCount_210(int32_t value)
	{
		___m_characterCount_210 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_211() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstCharacterOfLine_211)); }
	inline int32_t get_m_firstCharacterOfLine_211() const { return ___m_firstCharacterOfLine_211; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_211() { return &___m_firstCharacterOfLine_211; }
	inline void set_m_firstCharacterOfLine_211(int32_t value)
	{
		___m_firstCharacterOfLine_211 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_212() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_firstVisibleCharacterOfLine_212)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_212() const { return ___m_firstVisibleCharacterOfLine_212; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_212() { return &___m_firstVisibleCharacterOfLine_212; }
	inline void set_m_firstVisibleCharacterOfLine_212(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_212 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_213() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastCharacterOfLine_213)); }
	inline int32_t get_m_lastCharacterOfLine_213() const { return ___m_lastCharacterOfLine_213; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_213() { return &___m_lastCharacterOfLine_213; }
	inline void set_m_lastCharacterOfLine_213(int32_t value)
	{
		___m_lastCharacterOfLine_213 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_214() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lastVisibleCharacterOfLine_214)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_214() const { return ___m_lastVisibleCharacterOfLine_214; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_214() { return &___m_lastVisibleCharacterOfLine_214; }
	inline void set_m_lastVisibleCharacterOfLine_214(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_214 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_215() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineNumber_215)); }
	inline int32_t get_m_lineNumber_215() const { return ___m_lineNumber_215; }
	inline int32_t* get_address_of_m_lineNumber_215() { return &___m_lineNumber_215; }
	inline void set_m_lineNumber_215(int32_t value)
	{
		___m_lineNumber_215 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_216() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineVisibleCharacterCount_216)); }
	inline int32_t get_m_lineVisibleCharacterCount_216() const { return ___m_lineVisibleCharacterCount_216; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_216() { return &___m_lineVisibleCharacterCount_216; }
	inline void set_m_lineVisibleCharacterCount_216(int32_t value)
	{
		___m_lineVisibleCharacterCount_216 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_217() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_pageNumber_217)); }
	inline int32_t get_m_pageNumber_217() const { return ___m_pageNumber_217; }
	inline int32_t* get_address_of_m_pageNumber_217() { return &___m_pageNumber_217; }
	inline void set_m_pageNumber_217(int32_t value)
	{
		___m_pageNumber_217 = value;
	}

	inline static int32_t get_offset_of_m_PageAscender_218() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_PageAscender_218)); }
	inline float get_m_PageAscender_218() const { return ___m_PageAscender_218; }
	inline float* get_address_of_m_PageAscender_218() { return &___m_PageAscender_218; }
	inline void set_m_PageAscender_218(float value)
	{
		___m_PageAscender_218 = value;
	}

	inline static int32_t get_offset_of_m_maxTextAscender_219() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxTextAscender_219)); }
	inline float get_m_maxTextAscender_219() const { return ___m_maxTextAscender_219; }
	inline float* get_address_of_m_maxTextAscender_219() { return &___m_maxTextAscender_219; }
	inline void set_m_maxTextAscender_219(float value)
	{
		___m_maxTextAscender_219 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_220() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxCapHeight_220)); }
	inline float get_m_maxCapHeight_220() const { return ___m_maxCapHeight_220; }
	inline float* get_address_of_m_maxCapHeight_220() { return &___m_maxCapHeight_220; }
	inline void set_m_maxCapHeight_220(float value)
	{
		___m_maxCapHeight_220 = value;
	}

	inline static int32_t get_offset_of_m_ElementAscender_221() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementAscender_221)); }
	inline float get_m_ElementAscender_221() const { return ___m_ElementAscender_221; }
	inline float* get_address_of_m_ElementAscender_221() { return &___m_ElementAscender_221; }
	inline void set_m_ElementAscender_221(float value)
	{
		___m_ElementAscender_221 = value;
	}

	inline static int32_t get_offset_of_m_ElementDescender_222() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ElementDescender_222)); }
	inline float get_m_ElementDescender_222() const { return ___m_ElementDescender_222; }
	inline float* get_address_of_m_ElementDescender_222() { return &___m_ElementDescender_222; }
	inline void set_m_ElementDescender_222(float value)
	{
		___m_ElementDescender_222 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_223() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineAscender_223)); }
	inline float get_m_maxLineAscender_223() const { return ___m_maxLineAscender_223; }
	inline float* get_address_of_m_maxLineAscender_223() { return &___m_maxLineAscender_223; }
	inline void set_m_maxLineAscender_223(float value)
	{
		___m_maxLineAscender_223 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_224() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_maxLineDescender_224)); }
	inline float get_m_maxLineDescender_224() const { return ___m_maxLineDescender_224; }
	inline float* get_address_of_m_maxLineDescender_224() { return &___m_maxLineDescender_224; }
	inline void set_m_maxLineDescender_224(float value)
	{
		___m_maxLineDescender_224 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_225() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineAscender_225)); }
	inline float get_m_startOfLineAscender_225() const { return ___m_startOfLineAscender_225; }
	inline float* get_address_of_m_startOfLineAscender_225() { return &___m_startOfLineAscender_225; }
	inline void set_m_startOfLineAscender_225(float value)
	{
		___m_startOfLineAscender_225 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineDescender_226() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_startOfLineDescender_226)); }
	inline float get_m_startOfLineDescender_226() const { return ___m_startOfLineDescender_226; }
	inline float* get_address_of_m_startOfLineDescender_226() { return &___m_startOfLineDescender_226; }
	inline void set_m_startOfLineDescender_226(float value)
	{
		___m_startOfLineDescender_226 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_lineOffset_227)); }
	inline float get_m_lineOffset_227() const { return ___m_lineOffset_227; }
	inline float* get_address_of_m_lineOffset_227() { return &___m_lineOffset_227; }
	inline void set_m_lineOffset_227(float value)
	{
		___m_lineOffset_227 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_228() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_meshExtents_228)); }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  get_m_meshExtents_228() const { return ___m_meshExtents_228; }
	inline Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA * get_address_of_m_meshExtents_228() { return &___m_meshExtents_228; }
	inline void set_m_meshExtents_228(Extents_tD663823B610620A001CCCCFF452C10403AF2A0FA  value)
	{
		___m_meshExtents_228 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_229() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_htmlColor_229)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_htmlColor_229() const { return ___m_htmlColor_229; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_htmlColor_229() { return &___m_htmlColor_229; }
	inline void set_m_htmlColor_229(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_htmlColor_229 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_230() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorStack_230)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_colorStack_230() const { return ___m_colorStack_230; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_colorStack_230() { return &___m_colorStack_230; }
	inline void set_m_colorStack_230(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_colorStack_230 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_230))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_231() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_underlineColorStack_231)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_underlineColorStack_231() const { return ___m_underlineColorStack_231; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_underlineColorStack_231() { return &___m_underlineColorStack_231; }
	inline void set_m_underlineColorStack_231(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_underlineColorStack_231 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_231))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_232() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_strikethroughColorStack_232)); }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  get_m_strikethroughColorStack_232() const { return ___m_strikethroughColorStack_232; }
	inline TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D * get_address_of_m_strikethroughColorStack_232() { return &___m_strikethroughColorStack_232; }
	inline void set_m_strikethroughColorStack_232(TMP_TextProcessingStack_1_tCB10A5934F69ED17BBB7F709D74D60038177414D  value)
	{
		___m_strikethroughColorStack_232 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_232))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_HighlightStateStack_233() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_HighlightStateStack_233)); }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  get_m_HighlightStateStack_233() const { return ___m_HighlightStateStack_233; }
	inline TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E * get_address_of_m_HighlightStateStack_233() { return &___m_HighlightStateStack_233; }
	inline void set_m_HighlightStateStack_233(TMP_TextProcessingStack_1_t091E8E0507335193E71397075A9E75FFE125381E  value)
	{
		___m_HighlightStateStack_233 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_HighlightStateStack_233))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_234() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPreset_234)); }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * get_m_colorGradientPreset_234() const { return ___m_colorGradientPreset_234; }
	inline TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 ** get_address_of_m_colorGradientPreset_234() { return &___m_colorGradientPreset_234; }
	inline void set_m_colorGradientPreset_234(TMP_ColorGradient_tC18C01CF1F597BD442D01A29724FE1B32497E461 * value)
	{
		___m_colorGradientPreset_234 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_234), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_235() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientStack_235)); }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  get_m_colorGradientStack_235() const { return ___m_colorGradientStack_235; }
	inline TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804 * get_address_of_m_colorGradientStack_235() { return &___m_colorGradientStack_235; }
	inline void set_m_colorGradientStack_235(TMP_TextProcessingStack_1_t598A1976548F7435C20001605BBCC77262756804  value)
	{
		___m_colorGradientStack_235 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_235))->___m_DefaultItem_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_colorGradientPresetIsTinted_236() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_colorGradientPresetIsTinted_236)); }
	inline bool get_m_colorGradientPresetIsTinted_236() const { return ___m_colorGradientPresetIsTinted_236; }
	inline bool* get_address_of_m_colorGradientPresetIsTinted_236() { return &___m_colorGradientPresetIsTinted_236; }
	inline void set_m_colorGradientPresetIsTinted_236(bool value)
	{
		___m_colorGradientPresetIsTinted_236 = value;
	}

	inline static int32_t get_offset_of_m_tabSpacing_237() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_tabSpacing_237)); }
	inline float get_m_tabSpacing_237() const { return ___m_tabSpacing_237; }
	inline float* get_address_of_m_tabSpacing_237() { return &___m_tabSpacing_237; }
	inline void set_m_tabSpacing_237(float value)
	{
		___m_tabSpacing_237 = value;
	}

	inline static int32_t get_offset_of_m_spacing_238() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spacing_238)); }
	inline float get_m_spacing_238() const { return ___m_spacing_238; }
	inline float* get_address_of_m_spacing_238() { return &___m_spacing_238; }
	inline void set_m_spacing_238(float value)
	{
		___m_spacing_238 = value;
	}

	inline static int32_t get_offset_of_m_TextStyleStacks_239() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStacks_239)); }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* get_m_TextStyleStacks_239() const { return ___m_TextStyleStacks_239; }
	inline TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37** get_address_of_m_TextStyleStacks_239() { return &___m_TextStyleStacks_239; }
	inline void set_m_TextStyleStacks_239(TMP_TextProcessingStack_1U5BU5D_t1E4BEAC3D61A2AD0284E919166D0F38D21540A37* value)
	{
		___m_TextStyleStacks_239 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextStyleStacks_239), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextStyleStackDepth_240() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_TextStyleStackDepth_240)); }
	inline int32_t get_m_TextStyleStackDepth_240() const { return ___m_TextStyleStackDepth_240; }
	inline int32_t* get_address_of_m_TextStyleStackDepth_240() { return &___m_TextStyleStackDepth_240; }
	inline void set_m_TextStyleStackDepth_240(int32_t value)
	{
		___m_TextStyleStackDepth_240 = value;
	}

	inline static int32_t get_offset_of_m_ItalicAngleStack_241() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngleStack_241)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_ItalicAngleStack_241() const { return ___m_ItalicAngleStack_241; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_ItalicAngleStack_241() { return &___m_ItalicAngleStack_241; }
	inline void set_m_ItalicAngleStack_241(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_ItalicAngleStack_241 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ItalicAngleStack_241))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_ItalicAngle_242() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ItalicAngle_242)); }
	inline int32_t get_m_ItalicAngle_242() const { return ___m_ItalicAngle_242; }
	inline int32_t* get_address_of_m_ItalicAngle_242() { return &___m_ItalicAngle_242; }
	inline void set_m_ItalicAngle_242(int32_t value)
	{
		___m_ItalicAngle_242 = value;
	}

	inline static int32_t get_offset_of_m_actionStack_243() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_actionStack_243)); }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  get_m_actionStack_243() const { return ___m_actionStack_243; }
	inline TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA * get_address_of_m_actionStack_243() { return &___m_actionStack_243; }
	inline void set_m_actionStack_243(TMP_TextProcessingStack_1_tAD0A40D35721F31D8FE2C344F705515FDF0F7DBA  value)
	{
		___m_actionStack_243 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_243))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_244() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_padding_244)); }
	inline float get_m_padding_244() const { return ___m_padding_244; }
	inline float* get_address_of_m_padding_244() { return &___m_padding_244; }
	inline void set_m_padding_244(float value)
	{
		___m_padding_244 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_245() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffset_245)); }
	inline float get_m_baselineOffset_245() const { return ___m_baselineOffset_245; }
	inline float* get_address_of_m_baselineOffset_245() { return &___m_baselineOffset_245; }
	inline void set_m_baselineOffset_245(float value)
	{
		___m_baselineOffset_245 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_246() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_baselineOffsetStack_246)); }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  get_m_baselineOffsetStack_246() const { return ___m_baselineOffsetStack_246; }
	inline TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17 * get_address_of_m_baselineOffsetStack_246() { return &___m_baselineOffsetStack_246; }
	inline void set_m_baselineOffsetStack_246(TMP_TextProcessingStack_1_t0C5DDA1BDCC56D66F8465350BB1E55E94AAEBE17  value)
	{
		___m_baselineOffsetStack_246 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_246))->___itemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_247() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_xAdvance_247)); }
	inline float get_m_xAdvance_247() const { return ___m_xAdvance_247; }
	inline float* get_address_of_m_xAdvance_247() { return &___m_xAdvance_247; }
	inline void set_m_xAdvance_247(float value)
	{
		___m_xAdvance_247 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_248() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_textElementType_248)); }
	inline int32_t get_m_textElementType_248() const { return ___m_textElementType_248; }
	inline int32_t* get_address_of_m_textElementType_248() { return &___m_textElementType_248; }
	inline void set_m_textElementType_248(int32_t value)
	{
		___m_textElementType_248 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_249() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_cached_TextElement_249)); }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * get_m_cached_TextElement_249() const { return ___m_cached_TextElement_249; }
	inline TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 ** get_address_of_m_cached_TextElement_249() { return &___m_cached_TextElement_249; }
	inline void set_m_cached_TextElement_249(TMP_TextElement_tDF9A55D56A0B44EA4EA36DEDF942AEB6369AF832 * value)
	{
		___m_cached_TextElement_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_Ellipsis_250() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Ellipsis_250)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Ellipsis_250() const { return ___m_Ellipsis_250; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Ellipsis_250() { return &___m_Ellipsis_250; }
	inline void set_m_Ellipsis_250(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Ellipsis_250 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Ellipsis_250))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Underline_251() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_Underline_251)); }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  get_m_Underline_251() const { return ___m_Underline_251; }
	inline SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F * get_address_of_m_Underline_251() { return &___m_Underline_251; }
	inline void set_m_Underline_251(SpecialCharacter_t06A60B3C91ABA764227413C096AE5060D50D844F  value)
	{
		___m_Underline_251 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___character_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Underline_251))->___material_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_252() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_defaultSpriteAsset_252)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_defaultSpriteAsset_252() const { return ___m_defaultSpriteAsset_252; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_defaultSpriteAsset_252() { return &___m_defaultSpriteAsset_252; }
	inline void set_m_defaultSpriteAsset_252(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_defaultSpriteAsset_252 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_252), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_253() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_currentSpriteAsset_253)); }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * get_m_currentSpriteAsset_253() const { return ___m_currentSpriteAsset_253; }
	inline TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 ** get_address_of_m_currentSpriteAsset_253() { return &___m_currentSpriteAsset_253; }
	inline void set_m_currentSpriteAsset_253(TMP_SpriteAsset_t0746714D8A56C0A27AE56DC6897CC1A129220714 * value)
	{
		___m_currentSpriteAsset_253 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_253), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_254() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteCount_254)); }
	inline int32_t get_m_spriteCount_254() const { return ___m_spriteCount_254; }
	inline int32_t* get_address_of_m_spriteCount_254() { return &___m_spriteCount_254; }
	inline void set_m_spriteCount_254(int32_t value)
	{
		___m_spriteCount_254 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_255() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteIndex_255)); }
	inline int32_t get_m_spriteIndex_255() const { return ___m_spriteIndex_255; }
	inline int32_t* get_address_of_m_spriteIndex_255() { return &___m_spriteIndex_255; }
	inline void set_m_spriteIndex_255(int32_t value)
	{
		___m_spriteIndex_255 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_256() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_spriteAnimationID_256)); }
	inline int32_t get_m_spriteAnimationID_256() const { return ___m_spriteAnimationID_256; }
	inline int32_t* get_address_of_m_spriteAnimationID_256() { return &___m_spriteAnimationID_256; }
	inline void set_m_spriteAnimationID_256(int32_t value)
	{
		___m_spriteAnimationID_256 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_257() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___m_ignoreActiveState_257)); }
	inline bool get_m_ignoreActiveState_257() const { return ___m_ignoreActiveState_257; }
	inline bool* get_address_of_m_ignoreActiveState_257() { return &___m_ignoreActiveState_257; }
	inline void set_m_ignoreActiveState_257(bool value)
	{
		___m_ignoreActiveState_257 = value;
	}

	inline static int32_t get_offset_of_k_Power_258() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262, ___k_Power_258)); }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* get_k_Power_258() const { return ___k_Power_258; }
	inline DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA** get_address_of_k_Power_258() { return &___k_Power_258; }
	inline void set_k_Power_258(DecimalU5BU5D_tAA3302A4A6ACCE77638A2346993A0FAAE2F9FDBA* value)
	{
		___k_Power_258 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_258), (void*)value);
	}
};

struct TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields
{
public:
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* ___m_materialReferences_44;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___m_materialReferenceIndexLookup_45;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  ___m_materialReferenceStack_46;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_colorWhite_54;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * ___OnFontAssetRequest_162;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * ___OnSpriteAssetRequest_163;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_htmlTag_188;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* ___m_xmlAttribute_189;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___m_attributeParameterValues_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedWordWrapState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLineState_205;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedEllipsisState_206;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedLastValidState_207;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  ___m_SavedSoftLineBreakState_208;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  ___m_EllipsisInsertionCandidateStack_209;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;

public:
	inline static int32_t get_offset_of_m_materialReferences_44() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferences_44)); }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* get_m_materialReferences_44() const { return ___m_materialReferences_44; }
	inline MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD** get_address_of_m_materialReferences_44() { return &___m_materialReferences_44; }
	inline void set_m_materialReferences_44(MaterialReferenceU5BU5D_t06D1C1249B8051EC092684920106F77B6FC203FD* value)
	{
		___m_materialReferences_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_44), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_45() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceIndexLookup_45)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_m_materialReferenceIndexLookup_45() const { return ___m_materialReferenceIndexLookup_45; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_m_materialReferenceIndexLookup_45() { return &___m_materialReferenceIndexLookup_45; }
	inline void set_m_materialReferenceIndexLookup_45(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___m_materialReferenceIndexLookup_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_46() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_materialReferenceStack_46)); }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  get_m_materialReferenceStack_46() const { return ___m_materialReferenceStack_46; }
	inline TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3 * get_address_of_m_materialReferenceStack_46() { return &___m_materialReferenceStack_46; }
	inline void set_m_materialReferenceStack_46(TMP_TextProcessingStack_1_t7C34F5D4D2FC429E4551885C16EFDF05B8D2A6E3  value)
	{
		___m_materialReferenceStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_46))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_46))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_s_colorWhite_54() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___s_colorWhite_54)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_colorWhite_54() const { return ___s_colorWhite_54; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_colorWhite_54() { return &___s_colorWhite_54; }
	inline void set_s_colorWhite_54(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_colorWhite_54 = value;
	}

	inline static int32_t get_offset_of_OnFontAssetRequest_162() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnFontAssetRequest_162)); }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * get_OnFontAssetRequest_162() const { return ___OnFontAssetRequest_162; }
	inline Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 ** get_address_of_OnFontAssetRequest_162() { return &___OnFontAssetRequest_162; }
	inline void set_OnFontAssetRequest_162(Func_3_tD4EA9DBB68453335E80C2917C93BDE503A28F3F0 * value)
	{
		___OnFontAssetRequest_162 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnFontAssetRequest_162), (void*)value);
	}

	inline static int32_t get_offset_of_OnSpriteAssetRequest_163() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___OnSpriteAssetRequest_163)); }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * get_OnSpriteAssetRequest_163() const { return ___OnSpriteAssetRequest_163; }
	inline Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA ** get_address_of_OnSpriteAssetRequest_163() { return &___OnSpriteAssetRequest_163; }
	inline void set_OnSpriteAssetRequest_163(Func_3_t540BC7F75C78E0C70D6C37F2D220418DABC4B9EA * value)
	{
		___OnSpriteAssetRequest_163 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnSpriteAssetRequest_163), (void*)value);
	}

	inline static int32_t get_offset_of_m_htmlTag_188() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_htmlTag_188)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_htmlTag_188() const { return ___m_htmlTag_188; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_htmlTag_188() { return &___m_htmlTag_188; }
	inline void set_m_htmlTag_188(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_htmlTag_188 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_188), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_189() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_xmlAttribute_189)); }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* get_m_xmlAttribute_189() const { return ___m_xmlAttribute_189; }
	inline RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615** get_address_of_m_xmlAttribute_189() { return &___m_xmlAttribute_189; }
	inline void set_m_xmlAttribute_189(RichTextTagAttributeU5BU5D_t81DC8CE2ED156F9CA996E2DC8A64A973A156D615* value)
	{
		___m_xmlAttribute_189 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_189), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_190() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_attributeParameterValues_190)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_m_attributeParameterValues_190() const { return ___m_attributeParameterValues_190; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_m_attributeParameterValues_190() { return &___m_attributeParameterValues_190; }
	inline void set_m_attributeParameterValues_190(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___m_attributeParameterValues_190 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_190), (void*)value);
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_204() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedWordWrapState_204)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedWordWrapState_204() const { return ___m_SavedWordWrapState_204; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedWordWrapState_204() { return &___m_SavedWordWrapState_204; }
	inline void set_m_SavedWordWrapState_204(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedWordWrapState_204 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_204))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_204))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_204))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_205() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLineState_205)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLineState_205() const { return ___m_SavedLineState_205; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLineState_205() { return &___m_SavedLineState_205; }
	inline void set_m_SavedLineState_205(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLineState_205 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_205))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_205))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_205))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedEllipsisState_206() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedEllipsisState_206)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedEllipsisState_206() const { return ___m_SavedEllipsisState_206; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedEllipsisState_206() { return &___m_SavedEllipsisState_206; }
	inline void set_m_SavedEllipsisState_206(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedEllipsisState_206 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedEllipsisState_206))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedEllipsisState_206))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedEllipsisState_206))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLastValidState_207() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedLastValidState_207)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedLastValidState_207() const { return ___m_SavedLastValidState_207; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedLastValidState_207() { return &___m_SavedLastValidState_207; }
	inline void set_m_SavedLastValidState_207(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedLastValidState_207 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLastValidState_207))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLastValidState_207))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLastValidState_207))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedSoftLineBreakState_208() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_SavedSoftLineBreakState_208)); }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  get_m_SavedSoftLineBreakState_208() const { return ___m_SavedSoftLineBreakState_208; }
	inline WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99 * get_address_of_m_SavedSoftLineBreakState_208() { return &___m_SavedSoftLineBreakState_208; }
	inline void set_m_SavedSoftLineBreakState_208(WordWrapState_t15805FC5C080AC77203F872695E3B951F460DE99  value)
	{
		___m_SavedSoftLineBreakState_208 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___textInfo_36), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedSoftLineBreakState_208))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedSoftLineBreakState_208))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedSoftLineBreakState_208))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_EllipsisInsertionCandidateStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___m_EllipsisInsertionCandidateStack_209)); }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  get_m_EllipsisInsertionCandidateStack_209() const { return ___m_EllipsisInsertionCandidateStack_209; }
	inline TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7 * get_address_of_m_EllipsisInsertionCandidateStack_209() { return &___m_EllipsisInsertionCandidateStack_209; }
	inline void set_m_EllipsisInsertionCandidateStack_209(TMP_TextProcessingStack_1_t09C36897DBFF463BB173E0ED3612A8D49A8EE2D7  value)
	{
		___m_EllipsisInsertionCandidateStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_EllipsisInsertionCandidateStack_209))->___itemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___textInfo_36), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___italicAngleStack_43))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorStack_44))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___underlineColorStack_45))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___strikethroughColorStack_46))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightColorStack_47))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___highlightStateStack_48))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___colorGradientStack_49))->___m_DefaultItem_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___sizeStack_50))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___indentStack_51))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___fontWeightStack_52))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___styleStack_53))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___baselineStack_54))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___actionStack_55))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___materialReferenceStack_56))->___m_DefaultItem_2))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___lineJustificationStack_57))->___itemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentFontAsset_59), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentSpriteAsset_60), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_EllipsisInsertionCandidateStack_209))->___m_DefaultItem_2))->___currentMaterial_61), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_259() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveVector2_259)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargePositiveVector2_259() const { return ___k_LargePositiveVector2_259; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargePositiveVector2_259() { return &___k_LargePositiveVector2_259; }
	inline void set_k_LargePositiveVector2_259(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargePositiveVector2_259 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_260() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeVector2_260)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_k_LargeNegativeVector2_260() const { return ___k_LargeNegativeVector2_260; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_k_LargeNegativeVector2_260() { return &___k_LargeNegativeVector2_260; }
	inline void set_k_LargeNegativeVector2_260(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___k_LargeNegativeVector2_260 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_261() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveFloat_261)); }
	inline float get_k_LargePositiveFloat_261() const { return ___k_LargePositiveFloat_261; }
	inline float* get_address_of_k_LargePositiveFloat_261() { return &___k_LargePositiveFloat_261; }
	inline void set_k_LargePositiveFloat_261(float value)
	{
		___k_LargePositiveFloat_261 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_262() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeFloat_262)); }
	inline float get_k_LargeNegativeFloat_262() const { return ___k_LargeNegativeFloat_262; }
	inline float* get_address_of_k_LargeNegativeFloat_262() { return &___k_LargeNegativeFloat_262; }
	inline void set_k_LargeNegativeFloat_262(float value)
	{
		___k_LargeNegativeFloat_262 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_263() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargePositiveInt_263)); }
	inline int32_t get_k_LargePositiveInt_263() const { return ___k_LargePositiveInt_263; }
	inline int32_t* get_address_of_k_LargePositiveInt_263() { return &___k_LargePositiveInt_263; }
	inline void set_k_LargePositiveInt_263(int32_t value)
	{
		___k_LargePositiveInt_263 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_264() { return static_cast<int32_t>(offsetof(TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262_StaticFields, ___k_LargeNegativeInt_264)); }
	inline int32_t get_k_LargeNegativeInt_264() const { return ___k_LargeNegativeInt_264; }
	inline int32_t* get_address_of_k_LargeNegativeInt_264() { return &___k_LargeNegativeInt_264; }
	inline void set_k_LargeNegativeInt_264(int32_t value)
	{
		___k_LargeNegativeInt_264 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image_Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image_FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1  : public TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_265;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* ___m_subTextObjects_266;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_267;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_RectTransformCorners_268;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_canvasRenderer_269;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_canvas_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_271;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_272;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_baseMaterial_273;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_274;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_maskOffset_275;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_EnvMapMatrix_276;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_278;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayedGraphicRebuild_279;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_DelayedMaterialRebuild_280;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_ClipRect_281;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_282;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * ___OnPreRenderText_283;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_265() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_hasFontAssetChanged_265)); }
	inline bool get_m_hasFontAssetChanged_265() const { return ___m_hasFontAssetChanged_265; }
	inline bool* get_address_of_m_hasFontAssetChanged_265() { return &___m_hasFontAssetChanged_265; }
	inline void set_m_hasFontAssetChanged_265(bool value)
	{
		___m_hasFontAssetChanged_265 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_266() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_subTextObjects_266)); }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* get_m_subTextObjects_266() const { return ___m_subTextObjects_266; }
	inline TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552** get_address_of_m_subTextObjects_266() { return &___m_subTextObjects_266; }
	inline void set_m_subTextObjects_266(TMP_SubMeshUIU5BU5D_t6295BD0FE7FDE873A040F84487061A1902B0B552* value)
	{
		___m_subTextObjects_266 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_266), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_267() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_previousLossyScaleY_267)); }
	inline float get_m_previousLossyScaleY_267() const { return ___m_previousLossyScaleY_267; }
	inline float* get_address_of_m_previousLossyScaleY_267() { return &___m_previousLossyScaleY_267; }
	inline void set_m_previousLossyScaleY_267(float value)
	{
		___m_previousLossyScaleY_267 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_268() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_RectTransformCorners_268)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_RectTransformCorners_268() const { return ___m_RectTransformCorners_268; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_RectTransformCorners_268() { return &___m_RectTransformCorners_268; }
	inline void set_m_RectTransformCorners_268(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_RectTransformCorners_268 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_268), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_269() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvasRenderer_269)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_canvasRenderer_269() const { return ___m_canvasRenderer_269; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_canvasRenderer_269() { return &___m_canvasRenderer_269; }
	inline void set_m_canvasRenderer_269(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_canvasRenderer_269 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_269), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_270() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_canvas_270)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_canvas_270() const { return ___m_canvas_270; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_canvas_270() { return &___m_canvas_270; }
	inline void set_m_canvas_270(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_canvas_270 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_270), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_271() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isFirstAllocation_271)); }
	inline bool get_m_isFirstAllocation_271() const { return ___m_isFirstAllocation_271; }
	inline bool* get_address_of_m_isFirstAllocation_271() { return &___m_isFirstAllocation_271; }
	inline void set_m_isFirstAllocation_271(bool value)
	{
		___m_isFirstAllocation_271 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_272() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_max_characters_272)); }
	inline int32_t get_m_max_characters_272() const { return ___m_max_characters_272; }
	inline int32_t* get_address_of_m_max_characters_272() { return &___m_max_characters_272; }
	inline void set_m_max_characters_272(int32_t value)
	{
		___m_max_characters_272 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_273() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_baseMaterial_273)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_baseMaterial_273() const { return ___m_baseMaterial_273; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_baseMaterial_273() { return &___m_baseMaterial_273; }
	inline void set_m_baseMaterial_273(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_baseMaterial_273 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_273), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_274() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isScrollRegionSet_274)); }
	inline bool get_m_isScrollRegionSet_274() const { return ___m_isScrollRegionSet_274; }
	inline bool* get_address_of_m_isScrollRegionSet_274() { return &___m_isScrollRegionSet_274; }
	inline void set_m_isScrollRegionSet_274(bool value)
	{
		___m_isScrollRegionSet_274 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_275() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_maskOffset_275)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_maskOffset_275() const { return ___m_maskOffset_275; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_maskOffset_275() { return &___m_maskOffset_275; }
	inline void set_m_maskOffset_275(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_maskOffset_275 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_276() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_EnvMapMatrix_276)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_EnvMapMatrix_276() const { return ___m_EnvMapMatrix_276; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_EnvMapMatrix_276() { return &___m_EnvMapMatrix_276; }
	inline void set_m_EnvMapMatrix_276(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_EnvMapMatrix_276 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_277() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRegisteredForEvents_277)); }
	inline bool get_m_isRegisteredForEvents_277() const { return ___m_isRegisteredForEvents_277; }
	inline bool* get_address_of_m_isRegisteredForEvents_277() { return &___m_isRegisteredForEvents_277; }
	inline void set_m_isRegisteredForEvents_277(bool value)
	{
		___m_isRegisteredForEvents_277 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_278() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_isRebuildingLayout_278)); }
	inline bool get_m_isRebuildingLayout_278() const { return ___m_isRebuildingLayout_278; }
	inline bool* get_address_of_m_isRebuildingLayout_278() { return &___m_isRebuildingLayout_278; }
	inline void set_m_isRebuildingLayout_278(bool value)
	{
		___m_isRebuildingLayout_278 = value;
	}

	inline static int32_t get_offset_of_m_DelayedGraphicRebuild_279() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_DelayedGraphicRebuild_279)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayedGraphicRebuild_279() const { return ___m_DelayedGraphicRebuild_279; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayedGraphicRebuild_279() { return &___m_DelayedGraphicRebuild_279; }
	inline void set_m_DelayedGraphicRebuild_279(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayedGraphicRebuild_279 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedGraphicRebuild_279), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelayedMaterialRebuild_280() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_DelayedMaterialRebuild_280)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_DelayedMaterialRebuild_280() const { return ___m_DelayedMaterialRebuild_280; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_DelayedMaterialRebuild_280() { return &___m_DelayedMaterialRebuild_280; }
	inline void set_m_DelayedMaterialRebuild_280(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_DelayedMaterialRebuild_280 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelayedMaterialRebuild_280), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipRect_281() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_ClipRect_281)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_ClipRect_281() const { return ___m_ClipRect_281; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_ClipRect_281() { return &___m_ClipRect_281; }
	inline void set_m_ClipRect_281(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_ClipRect_281 = value;
	}

	inline static int32_t get_offset_of_m_ValidRect_282() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___m_ValidRect_282)); }
	inline bool get_m_ValidRect_282() const { return ___m_ValidRect_282; }
	inline bool* get_address_of_m_ValidRect_282() { return &___m_ValidRect_282; }
	inline void set_m_ValidRect_282(bool value)
	{
		___m_ValidRect_282 = value;
	}

	inline static int32_t get_offset_of_OnPreRenderText_283() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1, ___OnPreRenderText_283)); }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * get_OnPreRenderText_283() const { return ___OnPreRenderText_283; }
	inline Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 ** get_address_of_OnPreRenderText_283() { return &___OnPreRenderText_283; }
	inline void set_OnPreRenderText_283(Action_1_t170B3E821B49B45FA7134A2CF48A2E64CA371D42 * value)
	{
		___OnPreRenderText_283 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreRenderText_283), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  m_Items[1];

public:
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  m_Items[1];

public:
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  value)
	{
		m_Items[index] = value;
	}
};
// LegMovement[]
struct LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * m_Items[1];

public:
	inline LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared (RuntimeObject * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<GameController>()
inline GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_m9FD6BE305AA5A3AA47F4BA3E3D0DBFC39E4F7CFE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.AI.NavMeshAgent::set_updateUpAxis(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_updateUpAxis_m7AEC5E7C7BDB65A0103BB9D4652EF3B6C35147D3 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AI.NavMeshAgent::SetDestination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.AI.NavMeshAgent::get_stoppingDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_stoppingDistance_mE2F58A8DB9C8402F0373576AB91690E8B34C1EA6 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Void EnemyFollow::FaceTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_FaceTarget_m67B7C309E774EA6F2573F06502D88B11079FA34D (EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844 (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Player>()
inline Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___a0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void ObjectPooler::Initialize(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Initialize_m25160B5469E27CF5BA52B18DFE4755E7B8222482 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___size1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// UnityEngine.GameObject ObjectPooler::Spawn(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPooler_Spawn_mB87826BA0423874699DB1221EF74FCE0BDF1ECA3 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * GameObject_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m7E6690ECD1F1847047690CEA07DCF6AD375B9D92 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.AI.NavMeshAgent::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14 (NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * __this, float ___value0, const RuntimeMethod* method);
// System.Void DitzelGames.FastIK.FastIKFabric::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Vector3 DitzelGames.FastIK.FastIKFabric::GetPositionRootSpace(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893 (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, const RuntimeMethod* method);
// System.Void DitzelGames.FastIK.FastIKFabric::SetPositionRootSpace(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_SetPositionRootSpace_m719C2B5045265C1A6765C6A96404F5F164F29EFD (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method);
// UnityEngine.Quaternion DitzelGames.FastIK.FastIKFabric::GetRotationRootSpace(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703 (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void DitzelGames.FastIK.FastIKFabric::ResolveIK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_ResolveIK_mEA7812EEA550D803C77F8FB9B45DD57A9E5B3D1B (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Plane::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67 (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inNormal0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___inPoint1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::ClosestPointOnPlane(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Plane::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___from0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___to1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398 (float ___angle0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0 (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___lhs0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rhs1, const RuntimeMethod* method);
// System.Void DitzelGames.FastIK.FastIKFabric::SetRotationRootSpace(UnityEngine.Transform,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_SetRotationRootSpace_m847D24B4E47118A009569961C04F31CEBA39018D (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void GameController::UpdateTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateTimer_m4774DF097E9402987DA70EDE59F36F673AA07B98 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateScore_m7213221D246340228C796E0905CA3555EF021CEF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// System.Void GameController::UpdatePlayerHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdatePlayerHealth_m5B78160B63C97FE5E467A8323F7099091FF1CA25 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UI>()
inline UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameController::PlayerDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayerDied_m088191F23F58F6E4B2689B4DE64A603FE11E413E (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.String System.String::Concat(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2 (RuntimeObject * ___arg00, RuntimeObject * ___arg11, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator GameController::ExitToMainMenu(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_ExitToMainMenu_m67960153BE8A799A06273E67A072E9B63A359B60 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void GameController/<ExitToMainMenu>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExitToMainMenuU3Ed__13__ctor_mD355641032E5C7DB69F7B257F7E29498A7CE2B37 (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void PowerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp__ctor_mDAF4AED1581D2E6AFD14782F86F935DFDE5E1A87 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14 (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void LegMovement::TakeStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegMovement_TakeStep_mAA0176EFF5E9BE8529E5BC17786EC796EB316C64 (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Single LegMovement::StepCurve(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegMovement_StepCurve_m98F04B65704CE7411E1E5069B63B06DA9E7F88A0 (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, float ___percent0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___origin0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___direction1, RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * ___hitInfo2, float ___maxDistance3, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_lockState(UnityEngine.CursorLockMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217 (int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___eulers0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6 (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  (*) (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9 (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Player/<StarSpeedPowerUpTime>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarSpeedPowerUpTimeU3Ed__3__ctor_mD050D25A1009F779F941C72B05C894E72A565CD7 (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator Player::StarSpeedPowerUpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_StarSpeedPowerUpTime_mBF7D5FD2F6A01DD9C03ECF8188D90BA6511C9040 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::CheckSphere(UnityEngine.Vector3,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mD211EB15E9E128684605B4CC7277F10840F8E8CF_gshared)(___original0, ___parent1, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D (bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Input::get_mouseScrollDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7 (const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController/CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method);
// System.Void UnityTemplateProjects.SimpleCameraController/CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54 (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F * __this, float ___time0, float ___value1, float ___inTangent2, float ___outTangent3, const RuntimeMethod* method);
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0 (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* ___keys0, const RuntimeMethod* method);
// System.Void SpiderMovement::CalculateOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiderMovement_CalculateOrientation_m12ED17C3B1822AFF824488ABE90DAFE7CC67A358 (SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dir1, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color2, float ___duration3, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::ProjectOnPlane(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_ProjectOnPlane_m066BDEFD60B2828C4B531CD96C4DBFADF6B0EF3B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___planeNormal1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forward0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upwards1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Inventory>()
inline Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * GameObject_GetComponent_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m2B3FEF49563E1E1F30D1DED19FC080B4C4A00449 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void Weapon::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Shoot_m8FC1208456BC2F62B9EB212EAC4D70FA5F60EE0E (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Enemy>()
inline Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void Enemy::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TakeDamage_m8ED97095FA9B507B51F93662632CEC2FD5A6304F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___amount0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<PlayerMovement>()
inline PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_m9FA35B427F2B9FDFD390E9812C2556775C62CB02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		__this->set_player_4(L_1);
		// gameController = GameObject.FindGameObjectWithTag("GameController").GetComponent<GameController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralE77F01078A5DB9C4085488D582D8669D837FD2C4, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_3 = GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479(L_2, /*hidden argument*/GameObject_GetComponent_TisGameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274_m0906D4CAD135F57311BB9B9B920527676AB73479_RuntimeMethod_var);
		__this->set_gameController_8(L_3);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_mA01EE7AF5D3B97687752E9D22BECB4A3E13F8FD2 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerEnter_mC91FFDE471C63A39A97C086223C815D9085CA6D8 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnTriggerEnter_mC91FFDE471C63A39A97C086223C815D9085CA6D8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Player" && hasEntered == false && player.health >= 1){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		bool L_4 = __this->get_hasEntered_5();
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_5 = __this->get_player_4();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_health_5();
		if ((((int32_t)L_6) < ((int32_t)1)))
		{
			goto IL_0047;
		}
	}
	{
		// player.health --;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7 = __this->get_player_4();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->get_health_5();
		NullCheck(L_8);
		L_8->set_health_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)1)));
		// hasEntered = true;
		__this->set_hasEntered_5((bool)1);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Enemy::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnTriggerExit_mDAC04E5B3BE9BF5D8BEC28180F583C888AF55225 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	{
		// hasEntered = false;
		__this->set_hasEntered_5((bool)0);
		// }
		return;
	}
}
// System.Void Enemy::TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_TakeDamage_m8ED97095FA9B507B51F93662632CEC2FD5A6304F (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_TakeDamage_m8ED97095FA9B507B51F93662632CEC2FD5A6304F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health -= amount;
		int32_t L_0 = __this->get_health_6();
		int32_t L_1 = ___amount0;
		__this->set_health_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// Debug.Log("took damage");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE4FB3FB3BD2D5548B01BCAA7045346BFE8EA0AE3, /*hidden argument*/NULL);
		// if(health <= 0){
		int32_t L_2 = __this->get_health_6();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// Die();
		Enemy_Die_m9FD6BE305AA5A3AA47F4BA3E3D0DBFC39E4F7CFE(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_m9FD6BE305AA5A3AA47F4BA3E3D0DBFC39E4F7CFE (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// enemy.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_enemy_7();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// health = 10;
		__this->set_health_6(((int32_t)10));
		// gameController.score ++;
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_1 = __this->get_gameController_8();
		GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * L_2 = L_1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_score_11();
		NullCheck(L_2);
		L_2->set_score_11(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_m3C82F8269DE4132408E15B523907244771640734 (Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * __this, const RuntimeMethod* method)
{
	{
		// private int health = 10;
		__this->set_health_6(((int32_t)10));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyFollow::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_Start_mA494EE67D59E30DB540CB52D7621E41BF6771A00 (EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyFollow_Start_mA494EE67D59E30DB540CB52D7621E41BF6771A00_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = PlayerManager.instance.player.transform;
		PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * L_0 = ((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->get_instance_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0->get_player_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		__this->set_target_4(L_2);
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_3 = Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m15077FF184192C84FCF6B2A1FC8ECF53C9220F2F_RuntimeMethod_var);
		__this->set_agent_5(L_3);
		// agent.updateUpAxis = true;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_4 = __this->get_agent_5();
		NullCheck(L_4);
		NavMeshAgent_set_updateUpAxis_m7AEC5E7C7BDB65A0103BB9D4652EF3B6C35147D3(L_4, (bool)1, /*hidden argument*/NULL);
		// lastAttack = 0f;
		__this->set_lastAttack_7((0.0f));
		// }
		return;
	}
}
// System.Void EnemyFollow::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_Update_m93E1941810AE9F9FCFB46BEC614596794EBC50A7 (EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyFollow_Update_m93E1941810AE9F9FCFB46BEC614596794EBC50A7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.SetDestination(target.position);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_0 = __this->get_agent_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_target_4();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NavMeshAgent_SetDestination_m244EFBCDB717576303DA711EE39572B865F43747(L_0, L_2, /*hidden argument*/NULL);
		// float distance = Vector3.Distance(target.position, transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = __this->get_target_4();
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		float L_7 = Vector3_Distance_mB648A79E4A1BAAFBF7B029644638C0D715480677(L_4, L_6, /*hidden argument*/NULL);
		// if (distance <= agent.stoppingDistance) {
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_8 = __this->get_agent_5();
		NullCheck(L_8);
		float L_9 = NavMeshAgent_get_stoppingDistance_mE2F58A8DB9C8402F0373576AB91690E8B34C1EA6(L_8, /*hidden argument*/NULL);
		if ((!(((float)L_7) <= ((float)L_9))))
		{
			goto IL_007c;
		}
	}
	{
		// FaceTarget();
		EnemyFollow_FaceTarget_m67B7C309E774EA6F2573F06502D88B11079FA34D(__this, /*hidden argument*/NULL);
		// if (lastAttack < Time.time - attackCooldown) {
		float L_10 = __this->get_lastAttack_7();
		float L_11 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_12 = __this->get_attackCooldown_6();
		if ((!(((float)L_10) < ((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_12))))))
		{
			goto IL_007c;
		}
	}
	{
		// Player player = target.GetComponent<Player>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_target_4();
		NullCheck(L_13);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_14 = Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B(L_13, /*hidden argument*/Component_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m1BED3A96709F9A68D06117FAAE2AE1456F74CE7B_RuntimeMethod_var);
		// player.health -= 1;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_health_5();
		NullCheck(L_15);
		L_15->set_health_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)));
		// lastAttack = Time.time;
		float L_17 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastAttack_7(L_17);
	}

IL_007c:
	{
		// }
		return;
	}
}
// System.Void EnemyFollow::FaceTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow_FaceTarget_m67B7C309E774EA6F2573F06502D88B11079FA34D (EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyFollow_FaceTarget_m67B7C309E774EA6F2573F06502D88B11079FA34D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector3 direction = (target.position - transform.position).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_target_4();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_2), /*hidden argument*/NULL);
		V_0 = L_5;
		// Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0, direction.z));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		float L_7 = L_6.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), L_7, (0.0f), L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = Quaternion_LookRotation_m1B0BEBEBCC384324A6771B9EAC89761F73E1D6BF(L_10, /*hidden argument*/NULL);
		V_1 = L_11;
		// transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_14 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15 = V_1;
		float L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_14, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)(5.0f))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_12, L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyFollow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyFollow__ctor_mE1C38FA382CDB4CC8F3D48D70A49189FB13592CC (EnemyFollow_t417FB61292ACD4EAA7AE9CB22A8AC8483CB9D424 * __this, const RuntimeMethod* method)
{
	{
		// public float attackCooldown = 1f;
		__this->set_attackCooldown_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_m6B02CD71F904E1335A54E17E68D8BB2996347397 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		// pool.Initialize(enemyPrefab, 5);
		ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * L_0 = __this->get_pool_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_enemyPrefab_6();
		NullCheck(L_0);
		ObjectPooler_Initialize_m25160B5469E27CF5BA52B18DFE4755E7B8222482(L_0, L_1, 5, /*hidden argument*/NULL);
		// lastSpawn = -spawnRate;  
		float L_2 = __this->get_spawnRate_4();
		__this->set_lastSpawn_9(((-L_2)));
		// lastSpeedIncrease = Time.time; 
		float L_3 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastSpeedIncrease_10(L_3);
		// }
		return;
	}
}
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_mE9B85A2C67A3E6E48ADC531A0426ECF999A4C2A3 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemySpawner_Update_mE9B85A2C67A3E6E48ADC531A0426ECF999A4C2A3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// if (lastSpawn < Time.time - spawnRate) {
		float L_0 = __this->get_lastSpawn_9();
		float L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_spawnRate_4();
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))))))
		{
			goto IL_0076;
		}
	}
	{
		// int index = Random.Range(0, spawnPoints.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_spawnPoints_7();
		NullCheck(L_3);
		int32_t L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_4;
		// GameObject enemy = pool.Spawn(spawnPoints[index]);
		ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * L_5 = __this->get_pool_8();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_spawnPoints_7();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = ObjectPooler_Spawn_mB87826BA0423874699DB1221EF74FCE0BDF1ECA3(L_5, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (enemy != null) {
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_006b;
		}
	}
	{
		// if (lastSpeedIncrease < Time.time - speedIncreaseRate) {
		float L_13 = __this->get_lastSpeedIncrease_10();
		float L_14 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_15 = __this->get_speedIncreaseRate_5();
		if ((!(((float)L_13) < ((float)((float)il2cpp_codegen_subtract((float)L_14, (float)L_15))))))
		{
			goto IL_006b;
		}
	}
	{
		// NavMeshAgent agent = enemy.GetComponent<NavMeshAgent>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_1;
		NullCheck(L_16);
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_17 = GameObject_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m7E6690ECD1F1847047690CEA07DCF6AD375B9D92(L_16, /*hidden argument*/GameObject_GetComponent_TisNavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B_m7E6690ECD1F1847047690CEA07DCF6AD375B9D92_RuntimeMethod_var);
		// agent.speed += 1;
		NavMeshAgent_tB9746B6C38013341DB63973CA7ED657494EFB41B * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = NavMeshAgent_get_speed_m5AA9A1B23412A8F5CE24A5312F6E6D4BA282B173(L_18, /*hidden argument*/NULL);
		NullCheck(L_18);
		NavMeshAgent_set_speed_mE71CB504B0CC1E977293722F9BA81B7060A99E14(L_18, ((float)il2cpp_codegen_add((float)L_19, (float)(1.0f))), /*hidden argument*/NULL);
	}

IL_006b:
	{
		// lastSpawn = Time.time;
		float L_20 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastSpawn_9(L_20);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_mED6FECD7E1057991ED710CD104501453BEEDA871 (EnemySpawner_t02731B295570E1C2E63CE6A23D2A64D1E5985C9E * __this, const RuntimeMethod* method)
{
	{
		// public float spawnRate = 10f;
		__this->set_spawnRate_4((10.0f));
		// public float speedIncreaseRate = 30f;
		__this->set_speedIncreaseRate_5((30.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DitzelGames.FastIK.FastIKFabric::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_Awake_m28E6507F212F867A14DD4D02BF7EA3C515055C3E (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method)
{
	{
		// Init();
		FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DitzelGames.FastIK.FastIKFabric::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// Bones = new Transform[ChainLength + 1];
		int32_t L_0 = __this->get_ChainLength_4();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		__this->set_Bones_12(L_1);
		// Positions = new Vector3[ChainLength + 1];
		int32_t L_2 = __this->get_ChainLength_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_3 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		__this->set_Positions_13(L_3);
		// BonesLength = new float[ChainLength];
		int32_t L_4 = __this->get_ChainLength_4();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_4);
		__this->set_BonesLength_10(L_5);
		// StartDirectionSucc = new Vector3[ChainLength + 1];
		int32_t L_6 = __this->get_ChainLength_4();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_7 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		__this->set_StartDirectionSucc_14(L_7);
		// StartRotationBone = new Quaternion[ChainLength + 1];
		int32_t L_8 = __this->get_ChainLength_4();
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_9 = (QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)SZArrayNew(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		__this->set_StartRotationBone_15(L_9);
		// Root = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set_Root_17(L_10);
		// for (var i = 0; i <= ChainLength; i++)
		V_1 = 0;
		goto IL_009b;
	}

IL_006d:
	{
		// if (Root == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = __this->get_Root_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_12 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_11, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0086;
		}
	}
	{
		// throw new UnityException("The chain value is longer than the ancestor chain!");
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_13 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var);
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_13, _stringLiteralE7178A8D7000E8E0905E05FCC00178CFBE987CEC, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C_RuntimeMethod_var);
	}

IL_0086:
	{
		// Root = Root.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_Root_17();
		NullCheck(L_14);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_14, /*hidden argument*/NULL);
		__this->set_Root_17(L_15);
		// for (var i = 0; i <= ChainLength; i++)
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_009b:
	{
		// for (var i = 0; i <= ChainLength; i++)
		int32_t L_17 = V_1;
		int32_t L_18 = __this->get_ChainLength_4();
		if ((((int32_t)L_17) <= ((int32_t)L_18)))
		{
			goto IL_006d;
		}
	}
	{
		// if (Target == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19 = __this->get_Target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ef;
		}
	}
	{
		// Target = new GameObject(gameObject.name + " Target").transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_22 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_21, /*hidden argument*/NULL);
		String_t* L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_22, _stringLiteral3FBFABE4A45ED2780DB67B940DF06B09D18C5BA3, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_24, L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_24, /*hidden argument*/NULL);
		__this->set_Target_5(L_25);
		// SetPositionRootSpace(Target, GetPositionRootSpace(transform));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26 = __this->get_Target_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_27, /*hidden argument*/NULL);
		FastIKFabric_SetPositionRootSpace_m719C2B5045265C1A6765C6A96404F5F164F29EFD(__this, L_26, L_28, /*hidden argument*/NULL);
	}

IL_00ef:
	{
		// StartRotationTarget = GetRotationRootSpace(Target);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29 = __this->get_Target_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30 = FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703(__this, L_29, /*hidden argument*/NULL);
		__this->set_StartRotationTarget_16(L_30);
		// var current = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		V_0 = L_31;
		// CompleteLength = 0;
		__this->set_CompleteLength_11((0.0f));
		// for (var i = Bones.Length - 1; i >= 0; i--)
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_32 = __this->get_Bones_12();
		NullCheck(L_32);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)))), (int32_t)1));
		goto IL_01d3;
	}

IL_0123:
	{
		// Bones[i] = current;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_33 = __this->get_Bones_12();
		int32_t L_34 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = V_0;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_35);
		// StartRotationBone[i] = GetRotationRootSpace(current);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_36 = __this->get_StartRotationBone_15();
		int32_t L_37 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38 = V_0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_39 = FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703(__this, L_38, /*hidden argument*/NULL);
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_39);
		// if (i == Bones.Length - 1)
		int32_t L_40 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_41 = __this->get_Bones_12();
		NullCheck(L_41);
		if ((!(((uint32_t)L_40) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)))), (int32_t)1))))))
		{
			goto IL_0172;
		}
	}
	{
		// StartDirectionSucc[i] = GetPositionRootSpace(Target) - GetPositionRootSpace(current);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_42 = __this->get_StartDirectionSucc_14();
		int32_t L_43 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44 = __this->get_Target_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_44, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_45, L_47, /*hidden argument*/NULL);
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_48);
		// }
		goto IL_01c8;
	}

IL_0172:
	{
		// StartDirectionSucc[i] = GetPositionRootSpace(Bones[i + 1]) - GetPositionRootSpace(current);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_49 = __this->get_StartDirectionSucc_14();
		int32_t L_50 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_51 = __this->get_Bones_12();
		int32_t L_52 = V_2;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_54, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_56, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_55, L_57, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_58);
		// BonesLength[i] = StartDirectionSucc[i].magnitude;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_59 = __this->get_BonesLength_10();
		int32_t L_60 = V_2;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_61 = __this->get_StartDirectionSucc_14();
		int32_t L_62 = V_2;
		NullCheck(L_61);
		float L_63 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62))), /*hidden argument*/NULL);
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(L_60), (float)L_63);
		// CompleteLength += BonesLength[i];
		float L_64 = __this->get_CompleteLength_11();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_65 = __this->get_BonesLength_10();
		int32_t L_66 = V_2;
		NullCheck(L_65);
		int32_t L_67 = L_66;
		float L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		__this->set_CompleteLength_11(((float)il2cpp_codegen_add((float)L_64, (float)L_68)));
	}

IL_01c8:
	{
		// current = current.parent;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69 = V_0;
		NullCheck(L_69);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_70 = Transform_get_parent_m7D06005D9CB55F90F39D42F6A2AF9C7BC80745C9(L_69, /*hidden argument*/NULL);
		V_0 = L_70;
		// for (var i = Bones.Length - 1; i >= 0; i--)
		int32_t L_71 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_71, (int32_t)1));
	}

IL_01d3:
	{
		// for (var i = Bones.Length - 1; i >= 0; i--)
		int32_t L_72 = V_2;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_0123;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DitzelGames.FastIK.FastIKFabric::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_LateUpdate_mD2B0570DA911E30C4C51F980A99801D5D3FAC2C9 (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method)
{
	{
		// ResolveIK();
		FastIKFabric_ResolveIK_mEA7812EEA550D803C77F8FB9B45DD57A9E5B3D1B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DitzelGames.FastIK.FastIKFabric::ResolveIK()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_ResolveIK_mEA7812EEA550D803C77F8FB9B45DD57A9E5B3D1B (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKFabric_ResolveIK_mEA7812EEA550D803C77F8FB9B45DD57A9E5B3D1B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_10;
	memset((&V_10), 0, sizeof(V_10));
	int32_t V_11 = 0;
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_13;
	memset((&V_13), 0, sizeof(V_13));
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	{
		// if (Target == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Target_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (BonesLength.Length != ChainLength)
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_BonesLength_10();
		NullCheck(L_2);
		int32_t L_3 = __this->get_ChainLength_4();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		// Init();
		FastIKFabric_Init_mEFAF5EDDFD2CA57C28716C537541E9FE1994CE6C(__this, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// for (int i = 0; i < Bones.Length; i++)
		V_2 = 0;
		goto IL_0047;
	}

IL_0029:
	{
		// Positions[i] = GetPositionRootSpace(Bones[i]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = __this->get_Positions_13();
		int32_t L_5 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_Bones_12();
		int32_t L_7 = V_2;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_9, /*hidden argument*/NULL);
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_10);
		// for (int i = 0; i < Bones.Length; i++)
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0047:
	{
		// for (int i = 0; i < Bones.Length; i++)
		int32_t L_12 = V_2;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_13 = __this->get_Bones_12();
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_0029;
		}
	}
	{
		// var targetPosition = GetPositionRootSpace(Target);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = __this->get_Target_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
		// var targetRotation = GetRotationRootSpace(Target);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16 = __this->get_Target_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17 = FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703(__this, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// if ((targetPosition - GetPositionRootSpace(Bones[0])).sqrMagnitude >= CompleteLength * CompleteLength)
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_19 = __this->get_Bones_12();
		NullCheck(L_19);
		int32_t L_20 = 0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_18, L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		float L_25 = __this->get_CompleteLength_11();
		float L_26 = __this->get_CompleteLength_11();
		if ((!(((float)L_24) >= ((float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26))))))
		{
			goto IL_0102;
		}
	}
	{
		// var direction = (targetPosition - Positions[0]).normalized;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_28 = __this->get_Positions_13();
		NullCheck(L_28);
		int32_t L_29 = 0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_27, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		V_4 = L_32;
		// for (int i = 1; i < Positions.Length; i++)
		V_5 = 1;
		goto IL_00f1;
	}

IL_00b8:
	{
		// Positions[i] = Positions[i - 1] + direction * BonesLength[i - 1];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_33 = __this->get_Positions_13();
		int32_t L_34 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_35 = __this->get_Positions_13();
		int32_t L_36 = V_5;
		NullCheck(L_35);
		int32_t L_37 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_40 = __this->get_BonesLength_10();
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)1));
		float L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_39, L_43, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_38, L_44, /*hidden argument*/NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_45);
		// for (int i = 1; i < Positions.Length; i++)
		int32_t L_46 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)1));
	}

IL_00f1:
	{
		// for (int i = 1; i < Positions.Length; i++)
		int32_t L_47 = V_5;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_48 = __this->get_Positions_13();
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))))
		{
			goto IL_00b8;
		}
	}
	{
		// }
		goto IL_02b3;
	}

IL_0102:
	{
		// for (int i = 0; i < Positions.Length - 1; i++)
		V_6 = 0;
		goto IL_0155;
	}

IL_0107:
	{
		// Positions[i + 1] = Vector3.Lerp(Positions[i + 1], Positions[i] + StartDirectionSucc[i], SnapBackStrength);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_49 = __this->get_Positions_13();
		int32_t L_50 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_51 = __this->get_Positions_13();
		int32_t L_52 = V_6;
		NullCheck(L_51);
		int32_t L_53 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_55 = __this->get_Positions_13();
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_59 = __this->get_StartDirectionSucc_14();
		int32_t L_60 = V_6;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_63 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_58, L_62, /*hidden argument*/NULL);
		float L_64 = __this->get_SnapBackStrength_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_54, L_63, L_64, /*hidden argument*/NULL);
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1))), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_65);
		// for (int i = 0; i < Positions.Length - 1; i++)
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_0155:
	{
		// for (int i = 0; i < Positions.Length - 1; i++)
		int32_t L_67 = V_6;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_68 = __this->get_Positions_13();
		NullCheck(L_68);
		if ((((int32_t)L_67) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_68)->max_length)))), (int32_t)1)))))
		{
			goto IL_0107;
		}
	}
	{
		// for (int iteration = 0; iteration < Iterations; iteration++)
		V_7 = 0;
		goto IL_02a6;
	}

IL_016b:
	{
		// for (int i = Positions.Length - 1; i > 0; i--)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_69 = __this->get_Positions_13();
		NullCheck(L_69);
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_69)->max_length)))), (int32_t)1));
		goto IL_01f5;
	}

IL_0179:
	{
		// if (i == Positions.Length - 1)
		int32_t L_70 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_71 = __this->get_Positions_13();
		NullCheck(L_71);
		if ((!(((uint32_t)L_70) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_71)->max_length)))), (int32_t)1))))))
		{
			goto IL_0197;
		}
	}
	{
		// Positions[i] = targetPosition; 
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_72 = __this->get_Positions_13();
		int32_t L_73 = V_8;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_74 = V_0;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(L_73), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_74);
		goto IL_01ef;
	}

IL_0197:
	{
		// Positions[i] = Positions[i + 1] + (Positions[i] - Positions[i + 1]).normalized * BonesLength[i]; 
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_75 = __this->get_Positions_13();
		int32_t L_76 = V_8;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_77 = __this->get_Positions_13();
		int32_t L_78 = V_8;
		NullCheck(L_77);
		int32_t L_79 = ((int32_t)il2cpp_codegen_add((int32_t)L_78, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_81 = __this->get_Positions_13();
		int32_t L_82 = V_8;
		NullCheck(L_81);
		int32_t L_83 = L_82;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84 = (L_81)->GetAt(static_cast<il2cpp_array_size_t>(L_83));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_85 = __this->get_Positions_13();
		int32_t L_86 = V_8;
		NullCheck(L_85);
		int32_t L_87 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_89 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_84, L_88, /*hidden argument*/NULL);
		V_3 = L_89;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_91 = __this->get_BonesLength_10();
		int32_t L_92 = V_8;
		NullCheck(L_91);
		int32_t L_93 = L_92;
		float L_94 = (L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_95 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_90, L_94, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_96 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_80, L_95, /*hidden argument*/NULL);
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(L_76), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_96);
	}

IL_01ef:
	{
		// for (int i = Positions.Length - 1; i > 0; i--)
		int32_t L_97 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_97, (int32_t)1));
	}

IL_01f5:
	{
		// for (int i = Positions.Length - 1; i > 0; i--)
		int32_t L_98 = V_8;
		if ((((int32_t)L_98) > ((int32_t)0)))
		{
			goto IL_0179;
		}
	}
	{
		// for (int i = 1; i < Positions.Length; i++)
		V_9 = 1;
		goto IL_0262;
	}

IL_0202:
	{
		// Positions[i] = Positions[i - 1] + (Positions[i] - Positions[i - 1]).normalized * BonesLength[i - 1];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_99 = __this->get_Positions_13();
		int32_t L_100 = V_9;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_101 = __this->get_Positions_13();
		int32_t L_102 = V_9;
		NullCheck(L_101);
		int32_t L_103 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_102, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_104 = (L_101)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_105 = __this->get_Positions_13();
		int32_t L_106 = V_9;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_109 = __this->get_Positions_13();
		int32_t L_110 = V_9;
		NullCheck(L_109);
		int32_t L_111 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_110, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_113 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_108, L_112, /*hidden argument*/NULL);
		V_3 = L_113;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_114 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_115 = __this->get_BonesLength_10();
		int32_t L_116 = V_9;
		NullCheck(L_115);
		int32_t L_117 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_116, (int32_t)1));
		float L_118 = (L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_114, L_118, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_120 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_104, L_119, /*hidden argument*/NULL);
		NullCheck(L_99);
		(L_99)->SetAt(static_cast<il2cpp_array_size_t>(L_100), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_120);
		// for (int i = 1; i < Positions.Length; i++)
		int32_t L_121 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_121, (int32_t)1));
	}

IL_0262:
	{
		// for (int i = 1; i < Positions.Length; i++)
		int32_t L_122 = V_9;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_123 = __this->get_Positions_13();
		NullCheck(L_123);
		if ((((int32_t)L_122) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_123)->max_length)))))))
		{
			goto IL_0202;
		}
	}
	{
		// if ((Positions[Positions.Length - 1] - targetPosition).sqrMagnitude < Delta * Delta)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_124 = __this->get_Positions_13();
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_125 = __this->get_Positions_13();
		NullCheck(L_125);
		NullCheck(L_124);
		int32_t L_126 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_125)->max_length)))), (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_127, L_128, /*hidden argument*/NULL);
		V_3 = L_129;
		float L_130 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		float L_131 = __this->get_Delta_8();
		float L_132 = __this->get_Delta_8();
		if ((((float)L_130) < ((float)((float)il2cpp_codegen_multiply((float)L_131, (float)L_132)))))
		{
			goto IL_02b3;
		}
	}
	{
		// for (int iteration = 0; iteration < Iterations; iteration++)
		int32_t L_133 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
	}

IL_02a6:
	{
		// for (int iteration = 0; iteration < Iterations; iteration++)
		int32_t L_134 = V_7;
		int32_t L_135 = __this->get_Iterations_7();
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_016b;
		}
	}

IL_02b3:
	{
		// if (Pole != null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_136 = __this->get_Pole_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_137 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_136, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_137)
		{
			goto IL_03d6;
		}
	}
	{
		// var polePosition = GetPositionRootSpace(Pole);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_138 = __this->get_Pole_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_139 = FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893(__this, L_138, /*hidden argument*/NULL);
		V_10 = L_139;
		// for (int i = 1; i < Positions.Length - 1; i++)
		V_11 = 1;
		goto IL_03c5;
	}

IL_02da:
	{
		// var plane = new Plane(Positions[i + 1] - Positions[i - 1], Positions[i - 1]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_140 = __this->get_Positions_13();
		int32_t L_141 = V_11;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_add((int32_t)L_141, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_143 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_144 = __this->get_Positions_13();
		int32_t L_145 = V_11;
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_145, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_148 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_143, L_147, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_149 = __this->get_Positions_13();
		int32_t L_150 = V_11;
		NullCheck(L_149);
		int32_t L_151 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_150, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_152 = (L_149)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		Plane__ctor_m5B830C0E99AA5A47EF0D15767828D6E859867E67((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_12), L_148, L_152, /*hidden argument*/NULL);
		// var projectedPole = plane.ClosestPointOnPlane(polePosition);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_153 = V_10;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_154 = Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_12), L_153, /*hidden argument*/NULL);
		V_13 = L_154;
		// var projectedBone = plane.ClosestPointOnPlane(Positions[i]);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_155 = __this->get_Positions_13();
		int32_t L_156 = V_11;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_159 = Plane_ClosestPointOnPlane_mDBB63D79FA643E10949FEE1AE692975940716BCE((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_12), L_158, /*hidden argument*/NULL);
		// var angle = Vector3.SignedAngle(projectedBone - Positions[i - 1], projectedPole - Positions[i - 1], plane.normal);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_160 = __this->get_Positions_13();
		int32_t L_161 = V_11;
		NullCheck(L_160);
		int32_t L_162 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_161, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_164 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_159, L_163, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_165 = V_13;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_166 = __this->get_Positions_13();
		int32_t L_167 = V_11;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_169 = (L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_170 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_165, L_169, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_171 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_12), /*hidden argument*/NULL);
		float L_172 = Vector3_SignedAngle_m816C32A674665A4C3C9D850FB0A107E69A4D3E0A(L_164, L_170, L_171, /*hidden argument*/NULL);
		V_14 = L_172;
		// Positions[i] = Quaternion.AngleAxis(angle, plane.normal) * (Positions[i] - Positions[i - 1]) + Positions[i - 1];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_173 = __this->get_Positions_13();
		int32_t L_174 = V_11;
		float L_175 = V_14;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_176 = Plane_get_normal_m71CB4BAB04EE04CAEF9AD272B16766800F7D556B((Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)(&V_12), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_177 = Quaternion_AngleAxis_m4644D20F58ADF03E9EA297CB4A845E5BCDA1E398(L_175, L_176, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_178 = __this->get_Positions_13();
		int32_t L_179 = V_11;
		NullCheck(L_178);
		int32_t L_180 = L_179;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_181 = (L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_182 = __this->get_Positions_13();
		int32_t L_183 = V_11;
		NullCheck(L_182);
		int32_t L_184 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_183, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_186 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_181, L_185, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_177, L_186, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_188 = __this->get_Positions_13();
		int32_t L_189 = V_11;
		NullCheck(L_188);
		int32_t L_190 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_189, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_192 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_187, L_191, /*hidden argument*/NULL);
		NullCheck(L_173);
		(L_173)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_192);
		// for (int i = 1; i < Positions.Length - 1; i++)
		int32_t L_193 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_193, (int32_t)1));
	}

IL_03c5:
	{
		// for (int i = 1; i < Positions.Length - 1; i++)
		int32_t L_194 = V_11;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_195 = __this->get_Positions_13();
		NullCheck(L_195);
		if ((((int32_t)L_194) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_195)->max_length)))), (int32_t)1)))))
		{
			goto IL_02da;
		}
	}

IL_03d6:
	{
		// for (int i = 0; i < Positions.Length; i++)
		V_15 = 0;
		goto IL_04a0;
	}

IL_03de:
	{
		// if (i == Positions.Length - 1)
		int32_t L_196 = V_15;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_197 = __this->get_Positions_13();
		NullCheck(L_197);
		if ((!(((uint32_t)L_196) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_197)->max_length)))), (int32_t)1))))))
		{
			goto IL_0425;
		}
	}
	{
		// SetRotationRootSpace(Bones[i], Quaternion.Inverse(targetRotation) * StartRotationTarget * Quaternion.Inverse(StartRotationBone[i]));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_198 = __this->get_Bones_12();
		int32_t L_199 = V_15;
		NullCheck(L_198);
		int32_t L_200 = L_199;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_201 = (L_198)->GetAt(static_cast<il2cpp_array_size_t>(L_200));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_202 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_203 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_202, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_204 = __this->get_StartRotationTarget_16();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_205 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_203, L_204, /*hidden argument*/NULL);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_206 = __this->get_StartRotationBone_15();
		int32_t L_207 = V_15;
		NullCheck(L_206);
		int32_t L_208 = L_207;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_209 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_208));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_210 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_209, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_211 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_205, L_210, /*hidden argument*/NULL);
		FastIKFabric_SetRotationRootSpace_m847D24B4E47118A009569961C04F31CEBA39018D(__this, L_201, L_211, /*hidden argument*/NULL);
		goto IL_047e;
	}

IL_0425:
	{
		// SetRotationRootSpace(Bones[i], Quaternion.FromToRotation(StartDirectionSucc[i], Positions[i + 1] - Positions[i]) * Quaternion.Inverse(StartRotationBone[i]));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_212 = __this->get_Bones_12();
		int32_t L_213 = V_15;
		NullCheck(L_212);
		int32_t L_214 = L_213;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_215 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_216 = __this->get_StartDirectionSucc_14();
		int32_t L_217 = V_15;
		NullCheck(L_216);
		int32_t L_218 = L_217;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_219 = (L_216)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_220 = __this->get_Positions_13();
		int32_t L_221 = V_15;
		NullCheck(L_220);
		int32_t L_222 = ((int32_t)il2cpp_codegen_add((int32_t)L_221, (int32_t)1));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_224 = __this->get_Positions_13();
		int32_t L_225 = V_15;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_228 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_223, L_227, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_229 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_219, L_228, /*hidden argument*/NULL);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_230 = __this->get_StartRotationBone_15();
		int32_t L_231 = V_15;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_234 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_233, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_235 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_229, L_234, /*hidden argument*/NULL);
		FastIKFabric_SetRotationRootSpace_m847D24B4E47118A009569961C04F31CEBA39018D(__this, L_215, L_235, /*hidden argument*/NULL);
	}

IL_047e:
	{
		// SetPositionRootSpace(Bones[i], Positions[i]);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_236 = __this->get_Bones_12();
		int32_t L_237 = V_15;
		NullCheck(L_236);
		int32_t L_238 = L_237;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_239 = (L_236)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_240 = __this->get_Positions_13();
		int32_t L_241 = V_15;
		NullCheck(L_240);
		int32_t L_242 = L_241;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_243 = (L_240)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		FastIKFabric_SetPositionRootSpace_m719C2B5045265C1A6765C6A96404F5F164F29EFD(__this, L_239, L_243, /*hidden argument*/NULL);
		// for (int i = 0; i < Positions.Length; i++)
		int32_t L_244 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add((int32_t)L_244, (int32_t)1));
	}

IL_04a0:
	{
		// for (int i = 0; i < Positions.Length; i++)
		int32_t L_245 = V_15;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_246 = __this->get_Positions_13();
		NullCheck(L_246);
		if ((((int32_t)L_245) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_246)->max_length)))))))
		{
			goto IL_03de;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 DitzelGames.FastIK.FastIKFabric::GetPositionRootSpace(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893 (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKFabric_GetPositionRootSpace_m245E91B33E8580B054B93897BE46CA448C889893_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Root == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Root_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return current.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___current0;
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// return Quaternion.Inverse(Root.rotation) * (current.position - Root.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_Root_17();
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = ___current0;
		NullCheck(L_7);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_Root_17();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_8, L_10, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_6, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void DitzelGames.FastIK.FastIKFabric::SetPositionRootSpace(UnityEngine.Transform,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_SetPositionRootSpace_m719C2B5045265C1A6765C6A96404F5F164F29EFD (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKFabric_SetPositionRootSpace_m719C2B5045265C1A6765C6A96404F5F164F29EFD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Root == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Root_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// current.position = position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___current0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___position1;
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// current.position = Root.rotation * position + Root.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___current0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_Root_17();
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = ___position1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_6, L_7, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = __this->get_Root_17();
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Quaternion DitzelGames.FastIK.FastIKFabric::GetRotationRootSpace(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703 (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKFabric_GetRotationRootSpace_m0A4F0C1096E72D05759A13DF04DDCFCF0FB3D703_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Root == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Root_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// return current.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___current0;
		NullCheck(L_2);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_0015:
	{
		// return Quaternion.Inverse(current.rotation) * Root.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___current0;
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Quaternion_Inverse_mE2A449C7AC8A40350AAC3761AE1AFC170062CAC9(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = __this->get_Root_17();
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_6, L_8, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.Void DitzelGames.FastIK.FastIKFabric::SetRotationRootSpace(UnityEngine.Transform,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric_SetRotationRootSpace_m847D24B4E47118A009569961C04F31CEBA39018D (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___current0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKFabric_SetRotationRootSpace_m847D24B4E47118A009569961C04F31CEBA39018D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Root == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Root_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// current.rotation = rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___current0;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = ___rotation1;
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_3, /*hidden argument*/NULL);
		return;
	}

IL_0016:
	{
		// current.rotation = Root.rotation * rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = ___current0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_Root_17();
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_7 = ___rotation1;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_4, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DitzelGames.FastIK.FastIKFabric::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKFabric__ctor_mC216F5EE105FFF92613981A5CD2C0D96C37CD003 (FastIKFabric_t7CCDF5C888CD40A2E1E090505711C7EBC88BE5C8 * __this, const RuntimeMethod* method)
{
	{
		// public int ChainLength = 2;
		__this->set_ChainLength_4(2);
		// public int Iterations = 10;
		__this->set_Iterations_7(((int32_t)10));
		// public float Delta = 0.001f;
		__this->set_Delta_8((0.00100000005f));
		// public float SnapBackStrength = 1f;
		__this->set_SnapBackStrength_9((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DitzelGames.FastIK.FastIKLook::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKLook_Awake_mF3D96D6F541AD6B57D9DAA6CBBE42BB32FD3E995 (FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKLook_Awake_mF3D96D6F541AD6B57D9DAA6CBBE42BB32FD3E995_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// StartDirection = Target.position - transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = __this->get_Target_4();
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_3, L_5, /*hidden argument*/NULL);
		__this->set_StartDirection_5(L_6);
		// StartRotation = transform.rotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		__this->set_StartRotation_6(L_8);
		// }
		return;
	}
}
// System.Void DitzelGames.FastIK.FastIKLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKLook_Update_m9FC44F7D83869A5B9D78E0D228ECF17EAD96A0AE (FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FastIKLook_Update_m9FC44F7D83869A5B9D78E0D228ECF17EAD96A0AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Target == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_Target_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// transform.rotation = Quaternion.FromToRotation(StartDirection, Target.position - transform.position) * StartRotation;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = __this->get_StartDirection_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4 = __this->get_Target_4();
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_5, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_3, L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10 = __this->get_StartRotation_6();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = Quaternion_op_Multiply_m5C7A60AC0CDCA2C5E2F23E45FBD1B15CA152D7B0(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_2, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DitzelGames.FastIK.FastIKLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastIKLook__ctor_m8BB610CA66527E05DA0C36834B08B1C55375D7AB (FastIKLook_tF5361312C1C6E311DB5193E9FE854065CF72B2C6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_Update_mA76A2CE1F2AC1AACCDBF913CA6E1EA73DC621CD0 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// UpdateTimer();
		GameController_UpdateTimer_m4774DF097E9402987DA70EDE59F36F673AA07B98(__this, /*hidden argument*/NULL);
		// UpdateScore();
		GameController_UpdateScore_m7213221D246340228C796E0905CA3555EF021CEF(__this, /*hidden argument*/NULL);
		// UpdatePlayerHealth();
		GameController_UpdatePlayerHealth_m5B78160B63C97FE5E467A8323F7099091FF1CA25(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::UpdatePlayerHealth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdatePlayerHealth_m5B78160B63C97FE5E467A8323F7099091FF1CA25 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_UpdatePlayerHealth_m5B78160B63C97FE5E467A8323F7099091FF1CA25_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_11;
	memset((&V_11), 0, sizeof(V_11));
	{
		// if(player.GetComponent<Player>().health == 5){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_5();
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_health_5();
		if ((!(((uint32_t)L_2) == ((uint32_t)5))))
		{
			goto IL_00fa;
		}
	}
	{
		// Color newColor = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ui_6();
		NullCheck(L_3);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_4 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_3, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_4);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = L_4->get_heartSlots_4();
		NullCheck(L_5);
		int32_t L_6 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_7);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_7, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_8);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		V_0 = L_9;
		// newColor.a = 0;
		(&V_0)->set_a_3((0.0f));
		// Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_ui_6();
		NullCheck(L_10);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_11 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_10, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_11);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = L_11->get_heartSlots_4();
		NullCheck(L_12);
		int32_t L_13 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_14, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_15);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_16 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_15);
		V_1 = L_16;
		// newColorFilled.a = 1;
		(&V_1)->set_a_3((1.0f));
		// ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_ui_6();
		NullCheck(L_17);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_18 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_17, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_18);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = L_18->get_heartSlots_4();
		NullCheck(L_19);
		int32_t L_20 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_21, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_23 = V_1;
		NullCheck(L_22);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_23);
		// ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24 = __this->get_ui_6();
		NullCheck(L_24);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_25 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_24, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_25);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_26 = L_25->get_heartSlots_4();
		NullCheck(L_26);
		int32_t L_27 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_29 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_28, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = V_1;
		NullCheck(L_29);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_ui_6();
		NullCheck(L_31);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_32 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_31, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_32);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_33 = L_32->get_heartSlots_4();
		NullCheck(L_33);
		int32_t L_34 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_35, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37 = V_1;
		NullCheck(L_36);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_36, L_37);
		// ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_ui_6();
		NullCheck(L_38);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_39 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_38, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_39);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_40 = L_39->get_heartSlots_4();
		NullCheck(L_40);
		int32_t L_41 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		NullCheck(L_42);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_43 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_42, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_44 = V_1;
		NullCheck(L_43);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_43, L_44);
		// ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_ui_6();
		NullCheck(L_45);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_46 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_45, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_46);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_47 = L_46->get_heartSlots_4();
		NullCheck(L_47);
		int32_t L_48 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_50 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_49, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_51 = V_1;
		NullCheck(L_50);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_50, L_51);
		// }
		return;
	}

IL_00fa:
	{
		// else if(player.GetComponent<Player>().health == 4){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = __this->get_player_5();
		NullCheck(L_52);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_53 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_52, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54 = L_53->get_health_5();
		if ((!(((uint32_t)L_54) == ((uint32_t)4))))
		{
			goto IL_01f4;
		}
	}
	{
		// Color newColor = ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_ui_6();
		NullCheck(L_55);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_56 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_55, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_56);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_57 = L_56->get_heartSlots_4();
		NullCheck(L_57);
		int32_t L_58 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_60 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_59, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_60);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_61 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_60);
		V_2 = L_61;
		// newColor.a = 0;
		(&V_2)->set_a_3((0.0f));
		// Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = __this->get_ui_6();
		NullCheck(L_62);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_63 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_62, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_63);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_64 = L_63->get_heartSlots_4();
		NullCheck(L_64);
		int32_t L_65 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66 = (L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_65));
		NullCheck(L_66);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_67 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_66, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_67);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_68 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_67);
		V_3 = L_68;
		// newColorFilled.a = 1;
		(&V_3)->set_a_3((1.0f));
		// ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = __this->get_ui_6();
		NullCheck(L_69);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_70 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_69, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_70);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_71 = L_70->get_heartSlots_4();
		NullCheck(L_71);
		int32_t L_72 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_74 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_73, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_75 = V_2;
		NullCheck(L_74);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_74, L_75);
		// ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = __this->get_ui_6();
		NullCheck(L_76);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_77 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_76, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_77);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_78 = L_77->get_heartSlots_4();
		NullCheck(L_78);
		int32_t L_79 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_81 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_80, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_82 = V_3;
		NullCheck(L_81);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_81, L_82);
		// ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = __this->get_ui_6();
		NullCheck(L_83);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_84 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_83, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_84);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_85 = L_84->get_heartSlots_4();
		NullCheck(L_85);
		int32_t L_86 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		NullCheck(L_87);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_88 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_87, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_89 = V_3;
		NullCheck(L_88);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_88, L_89);
		// ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_90 = __this->get_ui_6();
		NullCheck(L_90);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_91 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_90, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_91);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_92 = L_91->get_heartSlots_4();
		NullCheck(L_92);
		int32_t L_93 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_95 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_94, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_96 = V_3;
		NullCheck(L_95);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_95, L_96);
		// ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_97 = __this->get_ui_6();
		NullCheck(L_97);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_98 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_97, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_98);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_99 = L_98->get_heartSlots_4();
		NullCheck(L_99);
		int32_t L_100 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_102 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_101, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_103 = V_3;
		NullCheck(L_102);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_102, L_103);
		// }
		return;
	}

IL_01f4:
	{
		// else if(player.GetComponent<Player>().health == 3){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_104 = __this->get_player_5();
		NullCheck(L_104);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_105 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_104, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		NullCheck(L_105);
		int32_t L_106 = L_105->get_health_5();
		if ((!(((uint32_t)L_106) == ((uint32_t)3))))
		{
			goto IL_02f5;
		}
	}
	{
		// Color newColor = ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107 = __this->get_ui_6();
		NullCheck(L_107);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_108 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_107, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_108);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_109 = L_108->get_heartSlots_4();
		NullCheck(L_109);
		int32_t L_110 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_111 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_112 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_111, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_112);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_113 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_112);
		V_4 = L_113;
		// newColor.a = 0;
		(&V_4)->set_a_3((0.0f));
		// Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_114 = __this->get_ui_6();
		NullCheck(L_114);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_115 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_114, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_115);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_116 = L_115->get_heartSlots_4();
		NullCheck(L_116);
		int32_t L_117 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_118 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_119 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_118, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_119);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_120 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_119);
		V_5 = L_120;
		// newColorFilled.a = 1;
		(&V_5)->set_a_3((1.0f));
		// ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_121 = __this->get_ui_6();
		NullCheck(L_121);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_122 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_121, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_122);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_123 = L_122->get_heartSlots_4();
		NullCheck(L_123);
		int32_t L_124 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_125 = (L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		NullCheck(L_125);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_126 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_125, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_127 = V_4;
		NullCheck(L_126);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_126, L_127);
		// ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_128 = __this->get_ui_6();
		NullCheck(L_128);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_129 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_128, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_129);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_130 = L_129->get_heartSlots_4();
		NullCheck(L_130);
		int32_t L_131 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_132 = (L_130)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		NullCheck(L_132);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_133 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_132, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_134 = V_4;
		NullCheck(L_133);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_133, L_134);
		// ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135 = __this->get_ui_6();
		NullCheck(L_135);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_136 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_135, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_136);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_137 = L_136->get_heartSlots_4();
		NullCheck(L_137);
		int32_t L_138 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_139 = (L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_140 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_139, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_141 = V_5;
		NullCheck(L_140);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_140, L_141);
		// ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_142 = __this->get_ui_6();
		NullCheck(L_142);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_143 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_142, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_143);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_144 = L_143->get_heartSlots_4();
		NullCheck(L_144);
		int32_t L_145 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		NullCheck(L_146);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_147 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_146, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_148 = V_5;
		NullCheck(L_147);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_147, L_148);
		// ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_149 = __this->get_ui_6();
		NullCheck(L_149);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_150 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_149, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_150);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_151 = L_150->get_heartSlots_4();
		NullCheck(L_151);
		int32_t L_152 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_153 = (L_151)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		NullCheck(L_153);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_154 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_153, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_155 = V_5;
		NullCheck(L_154);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_154, L_155);
		// }
		return;
	}

IL_02f5:
	{
		// else if(player.GetComponent<Player>().health == 2){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_156 = __this->get_player_5();
		NullCheck(L_156);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_157 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_156, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		NullCheck(L_157);
		int32_t L_158 = L_157->get_health_5();
		if ((!(((uint32_t)L_158) == ((uint32_t)2))))
		{
			goto IL_03f6;
		}
	}
	{
		// Color newColor = ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_159 = __this->get_ui_6();
		NullCheck(L_159);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_160 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_159, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_160);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_161 = L_160->get_heartSlots_4();
		NullCheck(L_161);
		int32_t L_162 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_163 = (L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_163);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_164 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_163, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_164);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_165 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_164);
		V_6 = L_165;
		// newColor.a = 0;
		(&V_6)->set_a_3((0.0f));
		// Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_166 = __this->get_ui_6();
		NullCheck(L_166);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_167 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_166, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_167);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_168 = L_167->get_heartSlots_4();
		NullCheck(L_168);
		int32_t L_169 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_170 = (L_168)->GetAt(static_cast<il2cpp_array_size_t>(L_169));
		NullCheck(L_170);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_171 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_170, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_171);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_172 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_171);
		V_7 = L_172;
		// newColorFilled.a = 1;
		(&V_7)->set_a_3((1.0f));
		// ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_173 = __this->get_ui_6();
		NullCheck(L_173);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_174 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_173, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_174);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_175 = L_174->get_heartSlots_4();
		NullCheck(L_175);
		int32_t L_176 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_177 = (L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_177);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_178 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_177, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_179 = V_6;
		NullCheck(L_178);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_178, L_179);
		// ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_180 = __this->get_ui_6();
		NullCheck(L_180);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_181 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_180, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_181);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_182 = L_181->get_heartSlots_4();
		NullCheck(L_182);
		int32_t L_183 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_184 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		NullCheck(L_184);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_185 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_184, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_186 = V_6;
		NullCheck(L_185);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_185, L_186);
		// ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_187 = __this->get_ui_6();
		NullCheck(L_187);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_188 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_187, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_188);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_189 = L_188->get_heartSlots_4();
		NullCheck(L_189);
		int32_t L_190 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_191 = (L_189)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		NullCheck(L_191);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_192 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_191, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_193 = V_6;
		NullCheck(L_192);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_192, L_193);
		// ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_194 = __this->get_ui_6();
		NullCheck(L_194);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_195 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_194, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_195);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_196 = L_195->get_heartSlots_4();
		NullCheck(L_196);
		int32_t L_197 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		NullCheck(L_198);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_199 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_198, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_200 = V_7;
		NullCheck(L_199);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_199, L_200);
		// ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_201 = __this->get_ui_6();
		NullCheck(L_201);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_202 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_201, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_202);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_203 = L_202->get_heartSlots_4();
		NullCheck(L_203);
		int32_t L_204 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_205 = (L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		NullCheck(L_205);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_206 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_205, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_207 = V_7;
		NullCheck(L_206);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_206, L_207);
		// }
		return;
	}

IL_03f6:
	{
		// else if(player.GetComponent<Player>().health == 1){
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_208 = __this->get_player_5();
		NullCheck(L_208);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_209 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_208, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		NullCheck(L_209);
		int32_t L_210 = L_209->get_health_5();
		if ((!(((uint32_t)L_210) == ((uint32_t)1))))
		{
			goto IL_04f7;
		}
	}
	{
		// Color newColor = ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_211 = __this->get_ui_6();
		NullCheck(L_211);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_212 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_211, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_212);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_213 = L_212->get_heartSlots_4();
		NullCheck(L_213);
		int32_t L_214 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_215 = (L_213)->GetAt(static_cast<il2cpp_array_size_t>(L_214));
		NullCheck(L_215);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_216 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_215, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_216);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_217 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_216);
		V_8 = L_217;
		// newColor.a = 0;
		(&V_8)->set_a_3((0.0f));
		// Color newColorFilled = ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_218 = __this->get_ui_6();
		NullCheck(L_218);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_219 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_218, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_219);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_220 = L_219->get_heartSlots_4();
		NullCheck(L_220);
		int32_t L_221 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_222 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		NullCheck(L_222);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_223 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_222, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_223);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_224 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_223);
		V_9 = L_224;
		// newColorFilled.a = 1;
		(&V_9)->set_a_3((1.0f));
		// ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_225 = __this->get_ui_6();
		NullCheck(L_225);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_226 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_225, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_226);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_227 = L_226->get_heartSlots_4();
		NullCheck(L_227);
		int32_t L_228 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_229 = (L_227)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_229);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_230 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_229, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_231 = V_8;
		NullCheck(L_230);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_230, L_231);
		// ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_232 = __this->get_ui_6();
		NullCheck(L_232);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_233 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_232, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_233);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_234 = L_233->get_heartSlots_4();
		NullCheck(L_234);
		int32_t L_235 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_236 = (L_234)->GetAt(static_cast<il2cpp_array_size_t>(L_235));
		NullCheck(L_236);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_237 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_236, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_238 = V_8;
		NullCheck(L_237);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_237, L_238);
		// ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_239 = __this->get_ui_6();
		NullCheck(L_239);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_240 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_239, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_240);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_241 = L_240->get_heartSlots_4();
		NullCheck(L_241);
		int32_t L_242 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_243 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_242));
		NullCheck(L_243);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_244 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_243, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_245 = V_8;
		NullCheck(L_244);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_244, L_245);
		// ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_246 = __this->get_ui_6();
		NullCheck(L_246);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_247 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_246, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_247);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_248 = L_247->get_heartSlots_4();
		NullCheck(L_248);
		int32_t L_249 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_250 = (L_248)->GetAt(static_cast<il2cpp_array_size_t>(L_249));
		NullCheck(L_250);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_251 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_250, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_252 = V_8;
		NullCheck(L_251);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_251, L_252);
		// ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColorFilled;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_253 = __this->get_ui_6();
		NullCheck(L_253);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_254 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_253, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_254);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_255 = L_254->get_heartSlots_4();
		NullCheck(L_255);
		int32_t L_256 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_257 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_256));
		NullCheck(L_257);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_258 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_257, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_259 = V_9;
		NullCheck(L_258);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_258, L_259);
		// }
		return;
	}

IL_04f7:
	{
		// Color newColor = ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_260 = __this->get_ui_6();
		NullCheck(L_260);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_261 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_260, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_261);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_262 = L_261->get_heartSlots_4();
		NullCheck(L_262);
		int32_t L_263 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_264 = (L_262)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		NullCheck(L_264);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_265 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_264, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_265);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_266 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_265);
		V_10 = L_266;
		// newColor.a = 0;
		(&V_10)->set_a_3((0.0f));
		// Color newColorFilled = ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_267 = __this->get_ui_6();
		NullCheck(L_267);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_268 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_267, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_268);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_269 = L_268->get_heartSlots_4();
		NullCheck(L_269);
		int32_t L_270 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_271 = (L_269)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		NullCheck(L_271);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_272 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_271, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_272);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_273 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_272);
		V_11 = L_273;
		// newColorFilled.a = 1;
		(&V_11)->set_a_3((1.0f));
		// ui.GetComponent<UI>().heartSlots[4].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_274 = __this->get_ui_6();
		NullCheck(L_274);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_275 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_274, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_275);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_276 = L_275->get_heartSlots_4();
		NullCheck(L_276);
		int32_t L_277 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_278 = (L_276)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		NullCheck(L_278);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_279 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_278, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_280 = V_10;
		NullCheck(L_279);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_279, L_280);
		// ui.GetComponent<UI>().heartSlots[3].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_281 = __this->get_ui_6();
		NullCheck(L_281);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_282 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_281, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_282);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_283 = L_282->get_heartSlots_4();
		NullCheck(L_283);
		int32_t L_284 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_285 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		NullCheck(L_285);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_286 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_285, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_287 = V_10;
		NullCheck(L_286);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_286, L_287);
		// ui.GetComponent<UI>().heartSlots[2].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_288 = __this->get_ui_6();
		NullCheck(L_288);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_289 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_288, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_289);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_290 = L_289->get_heartSlots_4();
		NullCheck(L_290);
		int32_t L_291 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_292 = (L_290)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		NullCheck(L_292);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_293 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_292, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_294 = V_10;
		NullCheck(L_293);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_293, L_294);
		// ui.GetComponent<UI>().heartSlots[1].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_295 = __this->get_ui_6();
		NullCheck(L_295);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_296 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_295, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_296);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_297 = L_296->get_heartSlots_4();
		NullCheck(L_297);
		int32_t L_298 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_299 = (L_297)->GetAt(static_cast<il2cpp_array_size_t>(L_298));
		NullCheck(L_299);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_300 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_299, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_301 = V_10;
		NullCheck(L_300);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_300, L_301);
		// ui.GetComponent<UI>().heartSlots[0].GetComponent<Image>().color = newColor;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_302 = __this->get_ui_6();
		NullCheck(L_302);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_303 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_302, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_303);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_304 = L_303->get_heartSlots_4();
		NullCheck(L_304);
		int32_t L_305 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_306 = (L_304)->GetAt(static_cast<il2cpp_array_size_t>(L_305));
		NullCheck(L_306);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_307 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_306, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_308 = V_10;
		NullCheck(L_307);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_307, L_308);
		// PlayerDied();
		GameController_PlayerDied_m088191F23F58F6E4B2689B4DE64A603FE11E413E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::PlayerDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_PlayerDied_m088191F23F58F6E4B2689B4DE64A603FE11E413E (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_PlayerDied_m088191F23F58F6E4B2689B4DE64A603FE11E413E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player.GetComponent<PlayerMovement>().ableToMove = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_5();
		NullCheck(L_0);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_1 = GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_mC3BF468A30F7857EA612FBEDCC00AFB610840372_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->set_ableToMove_11((bool)0);
		// ui.GetComponent<UI>().gameOverPanel.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_ui_6();
		NullCheck(L_2);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_3 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_2, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_gameOverPanel_5();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// timerActive = false;
		__this->set_timerActive_10((bool)0);
		// timeText.enabled = false;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_5 = __this->get_timeText_7();
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)0, /*hidden argument*/NULL);
		// scoreText.enabled = false;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_6 = __this->get_scoreText_8();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)0, /*hidden argument*/NULL);
		// ui.GetComponent<UI>().gameOverScoreText.GetComponent<TextMeshProUGUI>().text = "Score: " + (int)score;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_ui_6();
		NullCheck(L_7);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_8 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_7, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_8);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_9 = L_8->get_gameOverScoreText_7();
		NullCheck(L_9);
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_10 = Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2(L_9, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2_RuntimeMethod_var);
		int32_t L_11 = __this->get_score_11();
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_10, L_14);
		// ui.GetComponent<UI>().gameOverTimeText.GetComponent<TextMeshProUGUI>().text = "Time: " + (int)seconds;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_ui_6();
		NullCheck(L_15);
		UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * L_16 = GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6(L_15, /*hidden argument*/GameObject_GetComponent_TisUI_t3E798C446A347CD6BDC09248946045F3D3DE3376_mC2A239CA90C224286DD4B9ECFD020029A33ACCD6_RuntimeMethod_var);
		NullCheck(L_16);
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_17 = L_16->get_gameOverTimeText_6();
		NullCheck(L_17);
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_18 = Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2(L_17, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2_RuntimeMethod_var);
		float L_19 = __this->get_seconds_9();
		int32_t L_20 = (((int32_t)((int32_t)L_19)));
		RuntimeObject * L_21 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral299E01A3C227A338CCCF7D17E88F26B036E2B8EC, L_21, /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_18, L_22);
		// if (score > PlayerPrefs.GetInt("score")) {
		int32_t L_23 = __this->get_score_11();
		int32_t L_24 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, /*hidden argument*/NULL);
		if ((((int32_t)L_23) <= ((int32_t)L_24)))
		{
			goto IL_00c7;
		}
	}
	{
		// PlayerPrefs.SetInt("score", score);
		int32_t L_25 = __this->get_score_11();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_25, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		// StartCoroutine(ExitToMainMenu(5));
		RuntimeObject* L_26 = GameController_ExitToMainMenu_m67960153BE8A799A06273E67A072E9B63A359B60(__this, (5.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameController::UpdateTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateTimer_m4774DF097E9402987DA70EDE59F36F673AA07B98 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_UpdateTimer_m4774DF097E9402987DA70EDE59F36F673AA07B98_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(timerActive == true){
		bool L_0 = __this->get_timerActive_10();
		if (!L_0)
		{
			goto IL_0040;
		}
	}
	{
		// seconds += Time.deltaTime;
		float L_1 = __this->get_seconds_9();
		float L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_seconds_9(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		// timeText.GetComponent<TextMeshProUGUI>().text = (int)seconds + " ";
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_3 = __this->get_timeText_7();
		NullCheck(L_3);
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_4 = Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2(L_3, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2_RuntimeMethod_var);
		float L_5 = __this->get_seconds_9();
		int32_t L_6 = (((int32_t)((int32_t)L_5)));
		RuntimeObject * L_7 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_6);
		String_t* L_8 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(L_7, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_4, L_8);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void GameController::UpdateScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController_UpdateScore_m7213221D246340228C796E0905CA3555EF021CEF (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_UpdateScore_m7213221D246340228C796E0905CA3555EF021CEF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scoreText.GetComponent<TextMeshProUGUI>().text = "Score: " + (int)score;
		TMP_Text_t86179C97C713E1A6B3751B48DC7A16C874A7B262 * L_0 = __this->get_scoreText_8();
		NullCheck(L_0);
		TextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1 * L_1 = Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2(L_0, /*hidden argument*/Component_GetComponent_TisTextMeshProUGUI_tCC5BE8A76E6E9AF92521A462E8D81ACFBA7C85F1_mD2F03371CE5606A14816BFE1BBCA1BC74DF01DA2_RuntimeMethod_var);
		int32_t L_2 = __this->get_score_11();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Concat_m4D0DDA7FEDB75304E5FDAF8489A0478EE58A45F2(_stringLiteral1B00FE8D93C8DA57AEA59DB0FE808A827C3503B6, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_1, L_5);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameController::ExitToMainMenu(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameController_ExitToMainMenu_m67960153BE8A799A06273E67A072E9B63A359B60 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, float ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_ExitToMainMenu_m67960153BE8A799A06273E67A072E9B63A359B60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * L_0 = (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 *)il2cpp_codegen_object_new(U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733_il2cpp_TypeInfo_var);
		U3CExitToMainMenuU3Ed__13__ctor_mD355641032E5C7DB69F7B257F7E29498A7CE2B37(L_0, 0, /*hidden argument*/NULL);
		U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * L_1 = L_0;
		float L_2 = ___time0;
		NullCheck(L_1);
		L_1->set_time_2(L_2);
		return L_1;
	}
}
// System.Void GameController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameController__ctor_m9D952052C0A7234373FA5531292FCA8855BE2643 (GameController_tB9A9FA594113443BE7F9A0B6EC8588EB5101D274 * __this, const RuntimeMethod* method)
{
	{
		// private bool timerActive = true;
		__this->set_timerActive_10((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Start_m55E09F90FA409F47F1A42929F294DC60C06FD5CB (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver_Update_m9C017FC54A6BA38547A8EBEC17A7CD20236CB14F (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOver__ctor_mA5E40A40961F188E4CE253D481E8AED893A224E9 (GameOver_t4A9AB4CCE7B6840A7477BA83DC86EFA4CC8A2582 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Health::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Start_m67B788A33501A2CF22C3231FD3FCCD6D1D63A77F (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Health_Start_m67B788A33501A2CF22C3231FD3FCCD6D1D63A77F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906(L_0, /*hidden argument*/GameObject_GetComponent_TisPlayer_t5689617909B48F7640EA0892D85C92C13CC22C6F_m82212DD756C5F3A2B4844722FD1EE504E9AAD906_RuntimeMethod_var);
		__this->set_player_4(L_1);
		// }
		return;
	}
}
// System.Void Health::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_Update_mBCA15B9BB7DC24D8DD34C254D94064723BC0B368 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Health::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health_OnTriggerEnter_m9D198A79F1DAB1D33BC57CE7C06183A2976CD101 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Health_OnTriggerEnter_m9D198A79F1DAB1D33BC57CE7C06183A2976CD101_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Player"  && player.health < 5){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = __this->get_player_4();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_health_5();
		if ((((int32_t)L_5) >= ((int32_t)5)))
		{
			goto IL_0043;
		}
	}
	{
		// player.health ++;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_6 = __this->get_player_4();
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_health_5();
		NullCheck(L_7);
		L_7->set_health_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Health::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Health__ctor_mD50C73D87211EAE260B38B2936F01722E31B9416 (Health_tB86D9293C9CF1E5B8E4C7271395F56DD4C67AE96 * __this, const RuntimeMethod* method)
{
	{
		PowerUp__ctor_mDAF4AED1581D2E6AFD14782F86F935DFDE5E1A87(__this, /*hidden argument*/NULL);
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
// System.Void HeartSlot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeartSlot__ctor_mF99ADDA101E311ACDDC185BFBD8643FC4B0870A6 (HeartSlot_t0FB8096562C3C762DECEB4D8416D7020709EEAAE * __this, const RuntimeMethod* method)
{
	{
		// public bool showSlot = true;
		__this->set_showSlot_4((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HighScore::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore_Start_mD1A2913A860B3CBBFB1D354359191D5AEFAFDB8D (HighScore_tE521702BF43BC092726A498168F5E00DAC878753 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HighScore_Start_mD1A2913A860B3CBBFB1D354359191D5AEFAFDB8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// score.text = PlayerPrefs.GetInt("score",0).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_score_4();
		int32_t L_1 = PlayerPrefs_GetInt_mDA4476C10FCFF55FC65816E5E519B0EAFCB2AC14(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void HighScore::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HighScore__ctor_m08C4FD9898F0CF2B94238FF78936055265C6A981 (HighScore_tE521702BF43BC092726A498168F5E00DAC878753 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Inventory::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Start_mD4A36B4F39D7CDE6707542A799D6EF9D88756155 (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Inventory::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory_Update_m638C06C0982F2CF38FA145712F2613AC79B77D2E (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Inventory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Inventory__ctor_mF2ACBF005FF40F23F68AE8E9E416A4870EC4B27C (Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LegMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegMovement_Start_mC03ED531838E71222DE4CC1B19AE0DB98210BC4D (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, const RuntimeMethod* method)
{
	{
		// lastStep = Time.time + stepCooldown * stepOffset;
		float L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_stepCooldown_6();
		float L_2 = __this->get_stepOffset_7();
		__this->set_lastStep_13(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)))));
		// TakeStep();
		LegMovement_TakeStep_mAA0176EFF5E9BE8529E5BC17786EC796EB316C64(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LegMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegMovement_Update_mA6F9CDCF2E285DF32E986A9D0CE43C9154C671DD (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LegMovement_Update_mA6F9CDCF2E285DF32E986A9D0CE43C9154C671DD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float percent = Mathf.Clamp01((Time.time - lastStep) / stepDuration);
		float L_0 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_1 = __this->get_lastStep_13();
		float L_2 = __this->get_stepDuration_5();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_3 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))/(float)L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		// Vector3 newPosition = Vector3.Lerp(restingPosition, desiredPosition, percent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = __this->get_restingPosition_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = __this->get_desiredPosition_11();
		float L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline(L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// if (velocity != Vector3.zero) {
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = __this->get_velocity_12();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_10 = Vector3_op_Inequality_m15190A795B416EB699E69E6190DE6F1C1F208710(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// newPosition += stepNormal * StepCurve(percent);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = __this->get_stepNormal_8();
		float L_13 = V_0;
		float L_14 = LegMovement_StepCurve_m98F04B65704CE7411E1E5069B63B06DA9E7F88A0(__this, L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, L_14, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_0057:
	{
		// transform.position = newPosition;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_1;
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LegMovement::TakeStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegMovement_TakeStep_mAA0176EFF5E9BE8529E5BC17786EC796EB316C64 (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LegMovement_TakeStep_mAA0176EFF5E9BE8529E5BC17786EC796EB316C64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 castPoint = pole.position + velocity/4f;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_pole_9();
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_velocity_12();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_2, (4.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_3, /*hidden argument*/NULL);
		// if (Physics.Raycast(castPoint, pole.TransformDirection(Vector3.down), out hit, Mathf.Infinity)) {
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = __this->get_pole_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_TransformDirection_m6B5E3F0A7C6323159DEC6D9BC035FB53ADD96E91(L_5, L_6, /*hidden argument*/NULL);
		bool L_8 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_4, L_7, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (std::numeric_limits<float>::infinity()), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0069;
		}
	}
	{
		// restingPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		__this->set_restingPosition_10(L_10);
		// desiredPosition = hit.point;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		__this->set_desiredPosition_11(L_11);
		// stepNormal = hit.normal;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		__this->set_stepNormal_8(L_12);
	}

IL_0069:
	{
		// lastStep = Time.time;
		float L_13 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastStep_13(L_13);
		// }
		return;
	}
}
// System.Single LegMovement::StepCurve(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LegMovement_StepCurve_m98F04B65704CE7411E1E5069B63B06DA9E7F88A0 (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, float ___percent0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LegMovement_StepCurve_m98F04B65704CE7411E1E5069B63B06DA9E7F88A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Mathf.Sqrt(0.3f*(0.25f-Mathf.Pow(percent-0.5f, 2)));
		float L_0 = ___percent0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = powf(((float)il2cpp_codegen_subtract((float)L_0, (float)(0.5f))), (2.0f));
		float L_2 = sqrtf(((float)il2cpp_codegen_multiply((float)(0.300000012f), (float)((float)il2cpp_codegen_subtract((float)(0.25f), (float)L_1)))));
		return L_2;
	}
}
// System.Void LegMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LegMovement__ctor_m3F803DB6CFE1143AF37C02089FEEF0CFDA3103AE (LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * __this, const RuntimeMethod* method)
{
	{
		// public float stepThreshold = 0.2f;
		__this->set_stepThreshold_4((0.200000003f));
		// public float stepDuration = 0.5f;
		__this->set_stepDuration_5((0.5f));
		// public float stepCooldown = 1f;
		__this->set_stepCooldown_6((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Menu::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_PlayGame_m81BF64DE8850EA8E28746F7A1C8FD0D4943F6B4F (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_PlayGame_m81BF64DE8850EA8E28746F7A1C8FD0D4943F6B4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::QuitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_QuitGame_mC0A307F2681D0D684232694A10404FAAA8269A7A (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Menu_QuitGame_mC0A307F2681D0D684232694A10404FAAA8269A7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral52D8B9245A2A273A4683E8EE2EBD1BCC9F0D8B50, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_m7EE9043A2E9DD126B6F69DD8AE3BC9CBDF6E2134 (Menu_t9BC67061F8954119BDB8CE5A0C0B6E1AA114C0D6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void MouseLook::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Start_m699B23D66C4F21B566C48A524BC40A828F5E3541 (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseLook::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook_Update_m3D49361C94E0433BB35499708EE783B4543D83D5 (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MouseLook_Update_m3D49361C94E0433BB35499708EE783B4543D83D5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float mouseX = Input.GetAxis("Mouse X") * mouseSensitivity * Time.deltaTime;
		float L_0 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_1 = __this->get_mouseSensitivity_4();
		float L_2 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_0, (float)L_1)), (float)L_2));
		// float mouseY = Input.GetAxis("Mouse Y") * mouseSensitivity * Time.deltaTime;
		float L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		float L_4 = __this->get_mouseSensitivity_4();
		float L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5));
		// xRotation -= mouseY;
		float L_6 = __this->get_xRotation_6();
		float L_7 = V_1;
		__this->set_xRotation_6(((float)il2cpp_codegen_subtract((float)L_6, (float)L_7)));
		// xRotation = Mathf.Clamp(xRotation, -90f, 90f);
		float L_8 = __this->get_xRotation_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_9 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_8, (-90.0f), (90.0f), /*hidden argument*/NULL);
		__this->set_xRotation_6(L_9);
		// transform.localRotation = Quaternion.Euler(xRotation, 0f, 0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_11 = __this->get_xRotation_6();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_12 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_11, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localRotation_m1A9101457EC4653AFC93FCC4065A29F2C78FA62C(L_10, L_12, /*hidden argument*/NULL);
		// playerBody.Rotate(Vector3.up * mouseX);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = __this->get_playerBody_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		float L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_Rotate_m027A155054DDC4206F679EFB86BE0960D45C33A7(L_13, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MouseLook::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MouseLook__ctor_mD12D8075DDEA2085341B59FF8BA9FB353613200B (MouseLook_t1E1EE79B13022184F3EF9AC8FE8C6771053890DA * __this, const RuntimeMethod* method)
{
	{
		// public float mouseSensitivity = 100f;
		__this->set_mouseSensitivity_4((100.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ObjectPooler::Initialize(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Initialize_m25160B5469E27CF5BA52B18DFE4755E7B8222482 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPooler_Initialize_m25160B5469E27CF5BA52B18DFE4755E7B8222482_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// pool = new List<GameObject>();
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = (List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 *)il2cpp_codegen_object_new(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5_il2cpp_TypeInfo_var);
		List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8(L_0, /*hidden argument*/List_1__ctor_m859B0EE8491FDDEB1A3F7115D334B863E025BBC8_RuntimeMethod_var);
		__this->set_pool_4(L_0);
		// for (int i = 0; i < size; i++) {
		V_0 = 0;
		goto IL_002d;
	}

IL_000f:
	{
		// GameObject obj = Instantiate(prefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		V_1 = L_2;
		// obj.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// pool.Add(obj);
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_4 = __this->get_pool_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
		NullCheck(L_4);
		List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3(L_4, L_5, /*hidden argument*/List_1_Add_m3DD76DE838FA83DF972E0486A296345EB3A7DDF3_RuntimeMethod_var);
		// for (int i = 0; i < size; i++) {
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_002d:
	{
		// for (int i = 0; i < size; i++) {
		int32_t L_7 = V_0;
		int32_t L_8 = ___size1;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPooler::Spawn(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPooler_Spawn_mB87826BA0423874699DB1221EF74FCE0BDF1ECA3 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectPooler_Spawn_mB87826BA0423874699DB1221EF74FCE0BDF1ECA3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach (GameObject obj in pool) {
		List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * L_0 = __this->get_pool_4();
		NullCheck(L_0);
		Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14  L_1 = List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6(L_0, /*hidden argument*/List_1_GetEnumerator_m3616D04A85546C8251A6C376656CDB5358D893F6_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_000e:
		{
			// foreach (GameObject obj in pool) {
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_inline((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mB38DBEFCD264B4682A190F8592464C0658F702B7_RuntimeMethod_var);
			V_1 = L_2;
			// if (!obj.activeSelf) {
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_004b;
			}
		}

IL_001e:
		{
			// obj.SetActive(true);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_1;
			NullCheck(L_5);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
			// obj.transform.position = t.position;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_1;
			NullCheck(L_6);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_6, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8 = ___t0;
			NullCheck(L_8);
			Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_7, L_9, /*hidden argument*/NULL);
			// obj.transform.rotation = t.rotation;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_1;
			NullCheck(L_10);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___t0;
			NullCheck(L_12);
			Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_13 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_11, L_13, /*hidden argument*/NULL);
			// return obj;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_1;
			V_2 = L_14;
			IL2CPP_LEAVE(0x66, FINALLY_0056);
		}

IL_004b:
		{
			// foreach (GameObject obj in pool) {
			bool L_15 = Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mF39107B3A55F66C83EBCA798CBC93AC4C990DBD7_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_000e;
			}
		}

IL_0054:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0056);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0056;
	}

FINALLY_0056:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9((Enumerator_tFF7242F2EA0307D809676E9B45A3AF1F8BB52A14 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m4B68F0A4E0441A036D7E39BC7E639536164196D9_RuntimeMethod_var);
		IL2CPP_END_FINALLY(86)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(86)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_JUMP_TBL(0x64, IL_0064)
	}

IL_0064:
	{
		// return null;
		return (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL;
	}

IL_0066:
	{
		// }
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_2;
		return L_16;
	}
}
// System.Void ObjectPooler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler__ctor_m0841039D1BC3E109F55536253500BFB91136C1A6 (ObjectPooler_t21D65B050763505B53FC7F19451C65C58C3EB74C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_mBA04F1D6FE3C18037EA95DFAEEAA9977BFD49CD3 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::StarSpeedPowerUpTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_StarSpeedPowerUpTime_mBF7D5FD2F6A01DD9C03ECF8188D90BA6511C9040 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_StarSpeedPowerUpTime_mBF7D5FD2F6A01DD9C03ECF8188D90BA6511C9040_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * L_0 = (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 *)il2cpp_codegen_object_new(U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53_il2cpp_TypeInfo_var);
		U3CStarSpeedPowerUpTimeU3Ed__3__ctor_mD050D25A1009F779F941C72B05C894E72A565CD7(L_0, 0, /*hidden argument*/NULL);
		U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Player::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter_mE273002981E5225ABE0C891B825A78BB9FE905E6 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_OnTriggerEnter_mE273002981E5225ABE0C891B825A78BB9FE905E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(collision.gameObject.tag == "Speed"){
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mC21F33D368C18A631040F2887036C678B96ABC33(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002f;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
		// StartCoroutine(StarSpeedPowerUpTime());
		RuntimeObject* L_6 = Player_StarSpeedPowerUpTime_mBF7D5FD2F6A01DD9C03ECF8188D90BA6511C9040(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Player::PickupWeapon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_PickupWeapon_mD4F7F89C7F4951E2608A5053BD4F7C01FB686E5A (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mDE8EB5B351975D4E7E24DE341B8B49B8A29CC2B7 (Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * __this, const RuntimeMethod* method)
{
	{
		// public int health = 5;
		__this->set_health_5(5);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager_Awake_m4E0FE19C5F34114E28F28F04CCF33C2E34C743E7 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerManager_Awake_m4E0FE19C5F34114E28F28F04CCF33C2E34C743E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_StaticFields*)il2cpp_codegen_static_fields_for(PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48_il2cpp_TypeInfo_var))->set_instance_4(__this);
		// }
		return;
	}
}
// System.Void PlayerManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerManager__ctor_m4C7CA12A8243D6CA73C1EA65B361E7B717070471 (PlayerManager_tA626E96D79E0168DAC909A130EC9A26A533AAD48 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if(ableToMove == true){
		bool L_0 = __this->get_ableToMove_11();
		if (!L_0)
		{
			goto IL_012a;
		}
	}
	{
		// isGrounded = Physics.CheckSphere(groundCheck.position, groundDistance, groundMask);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_groundCheck_7();
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = __this->get_groundDistance_8();
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_groundMask_9();
		int32_t L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		bool L_6 = Physics_CheckSphere_m6DFD61C841CEBFDE6645689279AA6E31297B002B(L_2, L_3, L_5, /*hidden argument*/NULL);
		__this->set_isGrounded_13(L_6);
		// if(isGrounded && velocity.y < 0){
		bool L_7 = __this->get_isGrounded_13();
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_8 = __this->get_address_of_velocity_12();
		float L_9 = L_8->get_y_3();
		if ((!(((float)L_9) < ((float)(0.0f)))))
		{
			goto IL_005c;
		}
	}
	{
		// velocity.y = -2f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_10 = __this->get_address_of_velocity_12();
		L_10->set_y_3((-2.0f));
	}

IL_005c:
	{
		// float x = Input.GetAxis("Horizontal");
		float L_11 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_11;
		// float z = Input.GetAxis("Vertical");
		float L_12 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_12;
		// Vector3 move = transform.right * x + transform.forward * z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Transform_get_right_mA8EB1882CCE8759766544448308C88D9200F06CE(L_13, /*hidden argument*/NULL);
		float L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_17, /*hidden argument*/NULL);
		float L_19 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_18, L_19, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_16, L_20, /*hidden argument*/NULL);
		V_2 = L_21;
		// controller.Move(move * speed * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_22 = __this->get_controller_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_2;
		float L_24 = __this->get_speed_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		float L_26 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_25, L_26, /*hidden argument*/NULL);
		NullCheck(L_22);
		CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_22, L_27, /*hidden argument*/NULL);
		// if(Input.GetButtonDown("Jump") && isGrounded){
		bool L_28 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00f3;
		}
	}
	{
		bool L_29 = __this->get_isGrounded_13();
		if (!L_29)
		{
			goto IL_00f3;
		}
	}
	{
		// velocity.y = Mathf.Sqrt(jumpHeight * -2f * gravity);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_30 = __this->get_address_of_velocity_12();
		float L_31 = __this->get_jumpHeight_10();
		float L_32 = __this->get_gravity_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_33 = sqrtf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_31, (float)(-2.0f))), (float)L_32)));
		L_30->set_y_3(L_33);
	}

IL_00f3:
	{
		// velocity.y += gravity * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_velocity_12();
		float* L_35 = L_34->get_address_of_y_3();
		float* L_36 = L_35;
		float L_37 = *((float*)L_36);
		float L_38 = __this->get_gravity_6();
		float L_39 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		*((float*)L_36) = (float)((float)il2cpp_codegen_add((float)L_37, (float)((float)il2cpp_codegen_multiply((float)L_38, (float)L_39))));
		// controller.Move(velocity * Time.deltaTime);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_40 = __this->get_controller_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = __this->get_velocity_12();
		float L_42 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_43 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_40, L_43, /*hidden argument*/NULL);
	}

IL_012a:
	{
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 12f;
		__this->set_speed_5((12.0f));
		// public float gravity = -9.81f;
		__this->set_gravity_6((-9.81000042f));
		// public float groundDistance = 0.4f;
		__this->set_groundDistance_8((0.400000006f));
		// public float jumpHeight = 3f;
		__this->set_jumpHeight_10((3.0f));
		// public bool ableToMove = true;
		__this->set_ableToMove_11((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PowerUp::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Start_m7150C20E88A45A80D2580E0477E19DC98031D14A (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PowerUp::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp_Update_mF5784723CD4D3C2A9B29AABB64D1FC5661E326A5 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void PowerUp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUp__ctor_mDAF4AED1581D2E6AFD14782F86F935DFDE5E1A87 (PowerUp_tB8B78FBDFA5D4C1AD4436A49616BC7E36127E8A3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PowerUpSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpSpawner_Start_mECA34D2B29F6499E8B031A56B042FB7929952B1C (PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D * __this, const RuntimeMethod* method)
{
	{
		// lastSpawn = -spawnRate; 
		float L_0 = __this->get_spawnRate_4();
		__this->set_lastSpawn_7(((-L_0)));
		// }
		return;
	}
}
// System.Void PowerUpSpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpSpawner_Update_m0239C945AA4B2EDEECAE174827EB2242C7426E16 (PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PowerUpSpawner_Update_m0239C945AA4B2EDEECAE174827EB2242C7426E16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// if (lastSpawn < Time.time - spawnRate) {
		float L_0 = __this->get_lastSpawn_7();
		float L_1 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_2 = __this->get_spawnRate_4();
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))))))
		{
			goto IL_0053;
		}
	}
	{
		// int spawnIndex = Random.Range(0, spawnPoints.Length);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_spawnPoints_6();
		NullCheck(L_3);
		int32_t L_4 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, (((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))), /*hidden argument*/NULL);
		V_0 = L_4;
		// int powerUpIndex = Random.Range(0, powerUps.Length);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_powerUps_5();
		NullCheck(L_5);
		int32_t L_6 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, (((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)))), /*hidden argument*/NULL);
		V_1 = L_6;
		// Instantiate(powerUps[powerUpIndex], spawnPoints[spawnIndex]);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_powerUps_5();
		int32_t L_8 = V_1;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = __this->get_spawnPoints_6();
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8(L_10, L_14, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF131D53AB04E75E849487A7ACF79A8B27527F4B8_RuntimeMethod_var);
		// lastSpawn = Time.time;
		float L_15 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastSpawn_7(L_15);
	}

IL_0053:
	{
		// }
		return;
	}
}
// System.Void PowerUpSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PowerUpSpawner__ctor_m5D8D03DB9E22E0C695DAE7EED17F5403CE44E883 (PowerUpSpawner_tD3DB014CDEDAAD0D461BA36D35A0A0BCF7ED4A7D * __this, const RuntimeMethod* method)
{
	{
		// public float spawnRate = 15f;
		__this->set_spawnRate_4((15.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Readme::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_mF465410C5B2E598F2685E82CFCE1F42186AFF448 (Readme_tD58D22679F01C9AD66EA323B2DE68BFF6DBDCEE7 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void Rifle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rifle_Start_mABB5BC0A585D893C9C035192AD78252DFB860820 (Rifle_t7E89F5AC8ADD1399D3A37B9627ECE964275379E5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Rifle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rifle_Update_m68F701C37F13E09DA5E2EE4F50256320E2F6BF1F (Rifle_t7E89F5AC8ADD1399D3A37B9627ECE964275379E5 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Rifle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rifle__ctor_mADB9EC09CF57DBF56C15B0F0A45DCD4D5B2E14BC (Rifle_t7E89F5AC8ADD1399D3A37B9627ECE964275379E5 * __this, const RuntimeMethod* method)
{
	{
		Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_OnEnable_m2BA1F31BEDE84695933E86CF731059D6FAC2111C (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	{
		// m_TargetCameraState.SetFromTransform(transform);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_0 = __this->get_m_TargetCameraState_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647(L_0, L_1, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.SetFromTransform(transform);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_2 = __this->get_m_InterpolatingCameraState_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647(L_2, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Vector3 UnityTemplateProjects.SimpleCameraController::GetInputTranslationDirection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
		// if (Input.GetKey(KeyCode.W))
		bool L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)119), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		// direction += Vector3.forward;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_001d:
	{
		// if (Input.GetKey(KeyCode.S))
		bool L_4 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)115), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// direction += Vector3.back;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Vector3_get_back_mD521DF1A2C26E145578E07D618E1E4D08A1C6220(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0032:
	{
		// if (Input.GetKey(KeyCode.A))
		bool L_8 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)97), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		// direction += Vector3.left;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
	}

IL_0047:
	{
		// if (Input.GetKey(KeyCode.D))
		bool L_12 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)100), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005c;
		}
	}
	{
		// direction += Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		V_0 = L_15;
	}

IL_005c:
	{
		// if (Input.GetKey(KeyCode.Q))
		bool L_16 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)113), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0071;
		}
	}
	{
		// direction += Vector3.down;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
	}

IL_0071:
	{
		// if (Input.GetKey(KeyCode.E))
		bool L_20 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)101), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0086;
		}
	}
	{
		// direction += Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
	}

IL_0086:
	{
		// return direction;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController_Update_m0E587F33074BE72C54BA835B2217B0E8EC94F24A (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController_Update_m0E587F33074BE72C54BA835B2217B0E8EC94F24A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B9_2 = NULL;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B8_2 = NULL;
	int32_t G_B10_0 = 0;
	float G_B10_1 = 0.0f;
	float G_B10_2 = 0.0f;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * G_B10_3 = NULL;
	{
		// Vector3 translation = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (Input.GetKey(KeyCode.Escape))
		bool L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
	}

IL_0014:
	{
		// if (Input.GetMouseButtonDown(1))
		bool L_2 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// Cursor.lockState = CursorLockMode.Locked;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(1, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if (Input.GetMouseButtonUp(1))
		bool L_3 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(1, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// if (Input.GetMouseButton(1))
		bool L_4 = Input_GetMouseButton_m27BF2DDBF38A38787B83A13D3E6F0F88F7C834C1(1, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_00b1;
		}
	}
	{
		// var mouseMovement = new Vector2(Input.GetAxis("Mouse X"), Input.GetAxis("Mouse Y") * (invertY ? 1 : -1));
		float L_5 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, /*hidden argument*/NULL);
		float L_6 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, /*hidden argument*/NULL);
		bool L_7 = __this->get_invertY_10();
		G_B8_0 = L_6;
		G_B8_1 = L_5;
		G_B8_2 = (&V_3);
		if (L_7)
		{
			G_B9_0 = L_6;
			G_B9_1 = L_5;
			G_B9_2 = (&V_3);
			goto IL_005f;
		}
	}
	{
		G_B10_0 = (-1);
		G_B10_1 = G_B8_0;
		G_B10_2 = G_B8_1;
		G_B10_3 = G_B8_2;
		goto IL_0060;
	}

IL_005f:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
		G_B10_2 = G_B9_1;
		G_B10_3 = G_B9_2;
	}

IL_0060:
	{
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)G_B10_3, G_B10_2, ((float)il2cpp_codegen_multiply((float)G_B10_1, (float)(((float)((float)G_B10_0))))), /*hidden argument*/NULL);
		// var mouseSensitivityFactor = mouseSensitivityCurve.Evaluate(mouseMovement.magnitude);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_8 = __this->get_mouseSensitivityCurve_8();
		float L_9 = Vector2_get_magnitude_mD30DB8EB73C4A5CD395745AE1CA1C38DC61D2E85((Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 *)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_8);
		float L_10 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// m_TargetCameraState.yaw += mouseMovement.x * mouseSensitivityFactor;
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_11 = __this->get_m_TargetCameraState_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_12 = L_11;
		NullCheck(L_12);
		float L_13 = L_12->get_yaw_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_14 = V_3;
		float L_15 = L_14.get_x_0();
		float L_16 = V_4;
		NullCheck(L_12);
		L_12->set_yaw_0(((float)il2cpp_codegen_add((float)L_13, (float)((float)il2cpp_codegen_multiply((float)L_15, (float)L_16)))));
		// m_TargetCameraState.pitch += mouseMovement.y * mouseSensitivityFactor;
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_17 = __this->get_m_TargetCameraState_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_18 = L_17;
		NullCheck(L_18);
		float L_19 = L_18->get_pitch_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = V_3;
		float L_21 = L_20.get_y_1();
		float L_22 = V_4;
		NullCheck(L_18);
		L_18->set_pitch_1(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))));
	}

IL_00b1:
	{
		// translation = GetInputTranslationDirection() * Time.deltaTime;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = SimpleCameraController_GetInputTranslationDirection_m924AB4CEA66ADC4F1C63EAC21B660E0495765F4A(__this, /*hidden argument*/NULL);
		float L_24 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_23, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		// if (Input.GetKey(KeyCode.LeftShift))
		bool L_26 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)304), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00da;
		}
	}
	{
		// translation *= 10.0f;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_27, (10.0f), /*hidden argument*/NULL);
		V_0 = L_28;
	}

IL_00da:
	{
		// boost += Input.mouseScrollDelta.y * 0.2f;
		float L_29 = __this->get_boost_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_30 = Input_get_mouseScrollDelta_m018B3C74FC710A166684FC8391CAC93D8EC0ADB7(/*hidden argument*/NULL);
		float L_31 = L_30.get_y_1();
		__this->set_boost_6(((float)il2cpp_codegen_add((float)L_29, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(0.200000003f))))));
		// translation *= Mathf.Pow(2.0f, boost);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_0;
		float L_33 = __this->get_boost_6();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_34 = powf((2.0f), L_33);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_32, L_34, /*hidden argument*/NULL);
		V_0 = L_35;
		// m_TargetCameraState.Translate(translation);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_36 = __this->get_m_TargetCameraState_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37 = V_0;
		NullCheck(L_36);
		CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96(L_36, L_37, /*hidden argument*/NULL);
		// var positionLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / positionLerpTime) * Time.deltaTime);
		float L_38 = logf((0.00999999046f));
		float L_39 = __this->get_positionLerpTime_7();
		float L_40 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_41 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_38/(float)L_39)), (float)L_40)));
		V_1 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_41));
		// var rotationLerpPct = 1f - Mathf.Exp((Mathf.Log(1f - 0.99f) / rotationLerpTime) * Time.deltaTime);
		float L_42 = logf((0.00999999046f));
		float L_43 = __this->get_rotationLerpTime_9();
		float L_44 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_45 = expf(((float)il2cpp_codegen_multiply((float)((float)((float)L_42/(float)L_43)), (float)L_44)));
		V_2 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_45));
		// m_InterpolatingCameraState.LerpTowards(m_TargetCameraState, positionLerpPct, rotationLerpPct);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_46 = __this->get_m_InterpolatingCameraState_5();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_47 = __this->get_m_TargetCameraState_4();
		float L_48 = V_1;
		float L_49 = V_2;
		NullCheck(L_46);
		CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326(L_46, L_47, L_48, L_49, /*hidden argument*/NULL);
		// m_InterpolatingCameraState.UpdateTransform(transform);
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_50 = __this->get_m_InterpolatingCameraState_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_50);
		CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410(L_50, L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SimpleCameraController__ctor_mC6AE2509DDF461856450EC7DE0058A1687AB5C87 (SimpleCameraController_tB65216922BEA35E0BABF3D14EC92CDEA67C47FA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SimpleCameraController__ctor_mC6AE2509DDF461856450EC7DE0058A1687AB5C87_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CameraState m_TargetCameraState = new CameraState();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_0 = (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C *)il2cpp_codegen_object_new(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var);
		CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D(L_0, /*hidden argument*/NULL);
		__this->set_m_TargetCameraState_4(L_0);
		// CameraState m_InterpolatingCameraState = new CameraState();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_1 = (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C *)il2cpp_codegen_object_new(CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C_il2cpp_TypeInfo_var);
		CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D(L_1, /*hidden argument*/NULL);
		__this->set_m_InterpolatingCameraState_5(L_1);
		// public float boost = 3.5f;
		__this->set_boost_6((3.5f));
		// public float positionLerpTime = 0.2f;
		__this->set_positionLerpTime_7((0.200000003f));
		// public AnimationCurve mouseSensitivityCurve = new AnimationCurve(new Keyframe(0f, 0.5f, 0f, 5f), new Keyframe(1f, 2.5f, 0f, 0f));
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_2 = (KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC*)SZArrayNew(KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_3 = L_2;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_4), (0.0f), (0.5f), (0.0f), (5.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_4);
		KeyframeU5BU5D_tF817D582FE6B521008A03DDBB5D1326DD78DB0BC* L_5 = L_3;
		Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Keyframe__ctor_m572CCEE06F612003F939F3FF439B15F89E8C1D54((&L_6), (1.0f), (2.5f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tBEEE79DF5E970E48A8972FFFCE8B25A6068ACE9F )L_6);
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_7 = (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 *)il2cpp_codegen_object_new(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_il2cpp_TypeInfo_var);
		AnimationCurve__ctor_mDF6C1314A61F0E6F286865DD8BEA991795C07AC0(L_7, L_5, /*hidden argument*/NULL);
		__this->set_mouseSensitivityCurve_8(L_7);
		// public float rotationLerpTime = 0.01f;
		__this->set_rotationLerpTime_9((0.00999999978f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Speed::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Speed_Start_m08C30E82D34C87B7DBE40AC020A3EC849F9458F7 (Speed_tD8F11577123FC649C83FC5E2B1ABA56A720DC895 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Speed::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Speed_Update_mF480EBA4867815C525E4E581A0C0043F9F28D6E9 (Speed_tD8F11577123FC649C83FC5E2B1ABA56A720DC895 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Speed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Speed__ctor_mA03A4B81F7B45293441D83E9986E4DA7D2D3F7AB (Speed_tD8F11577123FC649C83FC5E2B1ABA56A720DC895 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void SpiderMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiderMovement_Start_mF2FB38AC713CF3237DE36640780A4F95924D6863 (SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E * __this, const RuntimeMethod* method)
{
	{
		// oldPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		__this->set_oldPosition_11(L_1);
		// }
		return;
	}
}
// System.Void SpiderMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiderMovement_Update_m9C608A1B9C53411D48B752E6B2B737B3F3A57B68 (SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpiderMovement_Update_m9C608A1B9C53411D48B752E6B2B737B3F3A57B68_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CalculateOrientation();
		SpiderMovement_CalculateOrientation_m12ED17C3B1822AFF824488ABE90DAFE7CC67A358(__this, /*hidden argument*/NULL);
		// velocity = (transform.position - oldPosition) / Time.deltaTime;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_oldPosition_11();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_1, L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_3, L_4, /*hidden argument*/NULL);
		__this->set_velocity_5(L_5);
		// oldPosition = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		__this->set_oldPosition_11(L_7);
		// if (Time.time > lastStep + (timeBetweenSteps / legs.Length) && legs != null) {
		float L_8 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		float L_9 = __this->get_lastStep_10();
		float L_10 = __this->get_timeBetweenSteps_8();
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_11 = __this->get_legs_6();
		NullCheck(L_11);
		if ((!(((float)L_8) > ((float)((float)il2cpp_codegen_add((float)L_9, (float)((float)((float)L_10/(float)(((float)((float)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))))))))))))
		{
			goto IL_00f3;
		}
	}
	{
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_12 = __this->get_legs_6();
		if (!L_12)
		{
			goto IL_00f3;
		}
	}
	{
		// if (legs[index] == null) return;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_13 = __this->get_legs_6();
		int32_t L_14 = __this->get_index_7();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		// if (legs[index] == null) return;
		return;
	}

IL_007f:
	{
		// legs[index].stepDuration = Mathf.Min(0.5f, timeBetweenSteps / 2f);
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_18 = __this->get_legs_6();
		int32_t L_19 = __this->get_index_7();
		NullCheck(L_18);
		int32_t L_20 = L_19;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		float L_22 = __this->get_timeBetweenSteps_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_23 = Mathf_Min_mD28BD5C9012619B74E475F204F96603193E99B14((0.5f), ((float)((float)L_22/(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_21);
		L_21->set_stepDuration_5(L_23);
		// legs[index].velocity = velocity;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_24 = __this->get_legs_6();
		int32_t L_25 = __this->get_index_7();
		NullCheck(L_24);
		int32_t L_26 = L_25;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = __this->get_velocity_5();
		NullCheck(L_27);
		L_27->set_velocity_12(L_28);
		// legs[index].TakeStep();
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_29 = __this->get_legs_6();
		int32_t L_30 = __this->get_index_7();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		LegMovement_TakeStep_mAA0176EFF5E9BE8529E5BC17786EC796EB316C64(L_32, /*hidden argument*/NULL);
		// lastStep = Time.time;
		float L_33 = Time_get_time_m1A186074B1FCD448AB13A4B9D715AB9ED0B40844(/*hidden argument*/NULL);
		__this->set_lastStep_10(L_33);
		// index = (index + 1) % legs.Length;
		int32_t L_34 = __this->get_index_7();
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_35 = __this->get_legs_6();
		NullCheck(L_35);
		__this->set_index_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length)))))));
	}

IL_00f3:
	{
		// }
		return;
	}
}
// System.Void SpiderMovement::CalculateOrientation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiderMovement_CalculateOrientation_m12ED17C3B1822AFF824488ABE90DAFE7CC67A358 (SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SpiderMovement_CalculateOrientation_m12ED17C3B1822AFF824488ABE90DAFE7CC67A358_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_1;
	memset((&G_B3_1), 0, sizeof(G_B3_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B2_1;
	memset((&G_B2_1), 0, sizeof(G_B2_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B4_2;
	memset((&G_B4_2), 0, sizeof(G_B4_2));
	{
		// Vector3 up = Vector3.zero;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_0 = L_0;
		// for (int i = 0; i < legs.Length; i++) {
		V_5 = 0;
		goto IL_00e7;
	}

IL_000e:
	{
		// point = legs[i].restingPosition;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_1 = __this->get_legs_6();
		int32_t L_2 = V_5;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = L_4->get_restingPosition_10();
		V_1 = L_5;
		// a = (transform.position - point).normalized;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_7, L_8, /*hidden argument*/NULL);
		V_6 = L_9;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		V_2 = L_10;
		// b = ((legs[(i+1)%legs.Length].restingPosition) - point).normalized;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_11 = __this->get_legs_6();
		int32_t L_12 = V_5;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_13 = __this->get_legs_6();
		NullCheck(L_13);
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1))%(int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))));
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_15 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = L_15->get_restingPosition_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_16, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19 = Vector3_get_normalized_m2FA6DF38F97BDA4CCBDAE12B9FE913A241DAC8D5((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		V_3 = L_19;
		// c = Vector3.Cross(a, b);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22 = Vector3_Cross_m63414F0C545EBB616F339FF8830D37F9230736A4(L_20, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		// up += c + (legs[i].stepNormal == Vector3.zero ? transform.forward : legs[i].stepNormal);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_4;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_25 = __this->get_legs_6();
		int32_t L_26 = V_5;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = L_28->get_stepNormal_8();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		bool L_31 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_29, L_30, /*hidden argument*/NULL);
		G_B2_0 = L_24;
		G_B2_1 = L_23;
		if (L_31)
		{
			G_B3_0 = L_24;
			G_B3_1 = L_23;
			goto IL_0097;
		}
	}
	{
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_32 = __this->get_legs_6();
		int32_t L_33 = V_5;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		LegMovement_tCD1716F74F7F69E89DF9323BC33722A78B163B76 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36 = L_35->get_stepNormal_8();
		G_B4_0 = L_36;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_00a2;
	}

IL_0097:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_38 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_37, /*hidden argument*/NULL);
		G_B4_0 = L_38;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_00a2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(G_B4_1, G_B4_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(G_B4_2, L_39, /*hidden argument*/NULL);
		V_0 = L_40;
		// Debug.DrawRay(point, a, Color.red, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_2;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60(L_41, L_42, L_43, (0.0f), /*hidden argument*/NULL);
		// Debug.DrawRay(point, b, Color.green, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_45 = V_3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60(L_44, L_45, L_46, (0.0f), /*hidden argument*/NULL);
		// Debug.DrawRay(point, c, Color.blue, 0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_48 = V_4;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60(L_47, L_48, L_49, (0.0f), /*hidden argument*/NULL);
		// for (int i = 0; i < legs.Length; i++) {
		int32_t L_50 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00e7:
	{
		// for (int i = 0; i < legs.Length; i++) {
		int32_t L_51 = V_5;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_52 = __this->get_legs_6();
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		// up /= legs.Length;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53 = V_0;
		LegMovementU5BU5D_tCB8CEF07A67472C7A7A6E25A4C25888B128788A1* L_54 = __this->get_legs_6();
		NullCheck(L_54);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55 = Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline(L_53, (((float)((float)(((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))), /*hidden argument*/NULL);
		V_0 = L_55;
		// Debug.DrawRay(transform.position, up, Color.red, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58 = V_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_59 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_DrawRay_m3954B3FFA675C0660ED438E8B705B45EDE393C60(L_57, L_58, L_59, (0.0f), /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(Vector3.ProjectOnPlane(transform.forward, up), up), 10.0f * Time.deltaTime);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_62 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_61, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_63, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = Vector3_ProjectOnPlane_m066BDEFD60B2828C4B531CD96C4DBFADF6B0EF3B(L_64, L_65, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_68 = Quaternion_LookRotation_m8A7DB5BDBC361586191AB67ACF857F46160EE3F1(L_66, L_67, /*hidden argument*/NULL);
		float L_69 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_70 = Quaternion_Slerp_m6D2BD18286254E28D2288B51962EC71F85C7B5C8(L_62, L_68, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_69)), /*hidden argument*/NULL);
		NullCheck(L_60);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_60, L_70, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpiderMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiderMovement__ctor_m39EE18DA5DCCC5FCAD216A9AF9C4A72E4C83F218 (SpiderMovement_t05C42B8E42A4C0EFB18CD913D1E815C7A4D6039E * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 2f;
		__this->set_speed_4((2.0f));
		// public float timeBetweenSteps = 0.25f;
		__this->set_timeBetweenSteps_8((0.25f));
		// public float maxTargetDistance = 1f;
		__this->set_maxTargetDistance_9((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UI::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_Update_mA081FAF51867015DA684D53F13A41F208BB2D381 (UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI__ctor_m32F07ED0093319080F05523E28240839C73D5164 (UI_t3E798C446A347CD6BDC09248946045F3D3DE3376 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UI__ctor_m32F07ED0093319080F05523E28240839C73D5164_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameObject[] heartSlots = new GameObject[5];
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)5);
		__this->set_heartSlots_4(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Weapon::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Start_m7216819D285B8CDF5DD9E18550E3DF9F1DD76D5A (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_Start_m7216819D285B8CDF5DD9E18550E3DF9F1DD76D5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// inventory = GameObject.FindGameObjectWithTag("Inventory").GetComponent<Inventory>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral68B8DEBED212A277911E2A4827C5A0E30BF70D94, /*hidden argument*/NULL);
		NullCheck(L_0);
		Inventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805 * L_1 = GameObject_GetComponent_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m2B3FEF49563E1E1F30D1DED19FC080B4C4A00449(L_0, /*hidden argument*/GameObject_GetComponent_TisInventory_tF12A20E68964E098DC4A1C249738A1FAA55B5805_m2B3FEF49563E1E1F30D1DED19FC080B4C4A00449_RuntimeMethod_var);
		__this->set_inventory_4(L_1);
		// }
		return;
	}
}
// System.Void Weapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Update_m03BCDE1EF0751A0F043AE300FD31A4BFA8B5D883 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_Update_m03BCDE1EF0751A0F043AE300FD31A4BFA8B5D883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetMouseButtonDown(0)){
		bool L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// Debug.Log("pressed button");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral76564205DF3204E3F1A415C4327AA36F62D7DA7E, /*hidden argument*/NULL);
		// Shoot();
		Weapon_Shoot_m8FC1208456BC2F62B9EB212EAC4D70FA5F60EE0E(__this, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Weapon::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Shoot_m8FC1208456BC2F62B9EB212EAC4D70FA5F60EE0E (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_Shoot_m8FC1208456BC2F62B9EB212EAC4D70FA5F60EE0E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * V_1 = NULL;
	{
		// gunFlash.Play();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = __this->get_gunFlash_8();
		NullCheck(L_0);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_0, /*hidden argument*/NULL);
		// if(Physics.Raycast(fpsCam.transform.position, fpsCam.transform.forward, out hit, range)){
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1 = __this->get_fpsCam_5();
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4 = __this->get_fpsCam_5();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		int32_t L_7 = __this->get_range_6();
		bool L_8 = Physics_Raycast_m18E12C65F127D1AA50D196623F04F81CB138FD12(L_3, L_6, (RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), (((float)((float)L_7))), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.Log(hit.transform.name);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_10, /*hidden argument*/NULL);
		// Enemy enemy = hit.transform.GetComponent<Enemy>();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = RaycastHit_get_transform_m2DD983DBD3602DE848DE287EE5233FD02EEC608D((RaycastHit_t59E5AEC8FE13BFA2ACBB6FFBDB7585FFB7288F89 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_12 = Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005(L_11, /*hidden argument*/Component_GetComponent_TisEnemy_tF0E5C8811BC93A523814C562C545DB3C1A755627_mBC0936621ECF96C215DEFE30C6AA90F4C1255005_RuntimeMethod_var);
		V_1 = L_12;
		// if(enemy != null){
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_13 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0078;
		}
	}
	{
		// Debug.Log("exists");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA97E51C480F71CAF058622299ACEB9C97B722625, /*hidden argument*/NULL);
		// enemy.TakeDamage(damage);
		Enemy_tF0E5C8811BC93A523814C562C545DB3C1A755627 * L_15 = V_1;
		int32_t L_16 = __this->get_damage_7();
		NullCheck(L_15);
		Enemy_TakeDamage_m8ED97095FA9B507B51F93662632CEC2FD5A6304F(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m643DE56148B24BD987E564400E443ACDF43CDB97 (Weapon_tEBB16BDF63DC82DA1243A65A60CB0B01DF542226 * __this, const RuntimeMethod* method)
{
	{
		// public int range = 100000;
		__this->set_range_6(((int32_t)100000));
		// public int damage = 1;
		__this->set_damage_7(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GameController_<ExitToMainMenu>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExitToMainMenuU3Ed__13__ctor_mD355641032E5C7DB69F7B257F7E29498A7CE2B37 (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameController_<ExitToMainMenu>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExitToMainMenuU3Ed__13_System_IDisposable_Dispose_m9B1DBCEDEE17D034EC370DA02001090A33085244 (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameController_<ExitToMainMenu>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CExitToMainMenuU3Ed__13_MoveNext_m3BA291EA91DC3977837B4A28CEC12739C2712D20 (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExitToMainMenuU3Ed__13_MoveNext_m3BA291EA91DC3977837B4A28CEC12739C2712D20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(time);
		float L_3 = __this->get_time_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, L_3, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0031:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Cursor.visible = true;
		Cursor_set_visible_m4747F0DC20D06D1932EC740C5CCC738C1664903D((bool)1, /*hidden argument*/NULL);
		// Cursor.lockState = CursorLockMode.None;
		Cursor_set_lockState_mC0739186A04F4C278F02E8C1714D99B491E3A217(0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex-1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_5 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_5;
		int32_t L_6 = Scene_get_buildIndex_mE32CE766EA0790E4636A351BA353A7FD71A11DA4((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)), /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameController_<ExitToMainMenu>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExitToMainMenuU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3774C7BD3D6DA94BCEEEED2452020AF0D84DDC5C (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameController_<ExitToMainMenu>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CExitToMainMenuU3Ed__13_System_Collections_IEnumerator_Reset_mA08C6E8C02933EC5831D5A0713956CB50A26C391 (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CExitToMainMenuU3Ed__13_System_Collections_IEnumerator_Reset_mA08C6E8C02933EC5831D5A0713956CB50A26C391_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CExitToMainMenuU3Ed__13_System_Collections_IEnumerator_Reset_mA08C6E8C02933EC5831D5A0713956CB50A26C391_RuntimeMethod_var);
	}
}
// System.Object GameController_<ExitToMainMenu>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CExitToMainMenuU3Ed__13_System_Collections_IEnumerator_get_Current_m76CD6F75679DE5D72D50D4B787A20FA911080A80 (U3CExitToMainMenuU3Ed__13_t3CE11985C1C66960E792BAE2CDFE4E2C7DD9F733 * __this, const RuntimeMethod* method)
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
// System.Void Player_<StarSpeedPowerUpTime>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarSpeedPowerUpTimeU3Ed__3__ctor_mD050D25A1009F779F941C72B05C894E72A565CD7 (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Player_<StarSpeedPowerUpTime>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarSpeedPowerUpTimeU3Ed__3_System_IDisposable_Dispose_m48E0B05B10B8467589C624C9DE566118F395973B (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Player_<StarSpeedPowerUpTime>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStarSpeedPowerUpTimeU3Ed__3_MoveNext_m8E616C7D4141F249D03BD2EDAA835BD85C1F1282 (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStarSpeedPowerUpTimeU3Ed__3_MoveNext_m8E616C7D4141F249D03BD2EDAA835BD85C1F1282_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_005d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Start 5 sec");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral6724752CB487F8CB8CFE53574AAB2AFC0D14D72A, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().speed *= 2;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_4 = V_1;
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = L_4->get_player_4();
		NullCheck(L_5);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_6 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(L_5, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_7 = L_6;
		NullCheck(L_7);
		float L_8 = L_7->get_speed_5();
		NullCheck(L_7);
		L_7->set_speed_5(((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))));
		// yield return new WaitForSeconds(5);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_9 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_9, (5.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_9);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("Times Up");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral35273EF570E955E417841668D4DF01E317817BD6, /*hidden argument*/NULL);
		// player.GetComponent<PlayerMovement>().speed /= 2;
		Player_t5689617909B48F7640EA0892D85C92C13CC22C6F * L_10 = V_1;
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = L_10->get_player_4();
		NullCheck(L_11);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_12 = Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C(L_11, /*hidden argument*/Component_GetComponent_TisPlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09_m1E47AA36C5F3CBD5233CE17D324F121BA922460C_RuntimeMethod_var);
		PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * L_13 = L_12;
		NullCheck(L_13);
		float L_14 = L_13->get_speed_5();
		NullCheck(L_13);
		L_13->set_speed_5(((float)((float)L_14/(float)(2.0f))));
		// }
		return (bool)0;
	}
}
// System.Object Player_<StarSpeedPowerUpTime>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC94472F9B473F220FC6CBA0B1B0F3D9BF48863D (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Player_<StarSpeedPowerUpTime>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_IEnumerator_Reset_mAFE8966B5C542F1EFC726F3F40F6C472B3F6D66D (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_IEnumerator_Reset_mAFE8966B5C542F1EFC726F3F40F6C472B3F6D66D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_IEnumerator_Reset_mAFE8966B5C542F1EFC726F3F40F6C472B3F6D66D_RuntimeMethod_var);
	}
}
// System.Object Player_<StarSpeedPowerUpTime>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStarSpeedPowerUpTimeU3Ed__3_System_Collections_IEnumerator_get_Current_m9B12F14BB6AC5B180CC5F574B00BBCBB41668EC1 (U3CStarSpeedPowerUpTimeU3Ed__3_t7AC25B5620802E7022E37FD553C5A64D38F02F53 * __this, const RuntimeMethod* method)
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
// System.Void Readme_Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mBAD5262A353BC071C61B8DB462A3D4D5AB5C7C4E (Section_t9F25FADC74C202674AFDB11AE2AC4D332DE6CA1D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::SetFromTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_SetFromTransform_mAF13C515CFB1085295C01A870D93375E98F16647 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// pitch = t.eulerAngles.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_pitch_1(L_2);
		// yaw = t.eulerAngles.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3 = ___t0;
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		__this->set_yaw_0(L_5);
		// roll = t.eulerAngles.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = ___t0;
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_z_4();
		__this->set_roll_2(L_8);
		// x = t.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = ___t0;
		NullCheck(L_9);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		__this->set_x_3(L_11);
		// y = t.position.y;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = ___t0;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		float L_14 = L_13.get_y_3();
		__this->set_y_4(L_14);
		// z = t.position.z;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = ___t0;
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_z_4();
		__this->set_z_5(L_17);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___translation0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_Translate_mB8F7239BD9DB70190E59D47D75DD125AD9AF3A96_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 rotatedTranslation = Quaternion.Euler(pitch, yaw, roll) * translation;
		float L_0 = __this->get_pitch_1();
		float L_1 = __this->get_yaw_0();
		float L_2 = __this->get_roll_2();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_3 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3(L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___translation0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// x += rotatedTranslation.x;
		float L_6 = __this->get_x_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		float L_8 = L_7.get_x_2();
		__this->set_x_3(((float)il2cpp_codegen_add((float)L_6, (float)L_8)));
		// y += rotatedTranslation.y;
		float L_9 = __this->get_y_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_y_3();
		__this->set_y_4(((float)il2cpp_codegen_add((float)L_9, (float)L_11)));
		// z += rotatedTranslation.z;
		float L_12 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_z_4();
		__this->set_z_5(((float)il2cpp_codegen_add((float)L_12, (float)L_14)));
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::LerpTowards(UnityTemplateProjects.SimpleCameraController_CameraState,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * ___target0, float ___positionLerpPct1, float ___rotationLerpPct2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (CameraState_LerpTowards_mF2D4B962A677B281ED2F539A2FFF8A693FB9A326_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// yaw = Mathf.Lerp(yaw, target.yaw, rotationLerpPct);
		float L_0 = __this->get_yaw_0();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_1 = ___target0;
		NullCheck(L_1);
		float L_2 = L_1->get_yaw_0();
		float L_3 = ___rotationLerpPct2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_0, L_2, L_3, /*hidden argument*/NULL);
		__this->set_yaw_0(L_4);
		// pitch = Mathf.Lerp(pitch, target.pitch, rotationLerpPct);
		float L_5 = __this->get_pitch_1();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_6 = ___target0;
		NullCheck(L_6);
		float L_7 = L_6->get_pitch_1();
		float L_8 = ___rotationLerpPct2;
		float L_9 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_5, L_7, L_8, /*hidden argument*/NULL);
		__this->set_pitch_1(L_9);
		// roll = Mathf.Lerp(roll, target.roll, rotationLerpPct);
		float L_10 = __this->get_roll_2();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_11 = ___target0;
		NullCheck(L_11);
		float L_12 = L_11->get_roll_2();
		float L_13 = ___rotationLerpPct2;
		float L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_10, L_12, L_13, /*hidden argument*/NULL);
		__this->set_roll_2(L_14);
		// x = Mathf.Lerp(x, target.x, positionLerpPct);
		float L_15 = __this->get_x_3();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_16 = ___target0;
		NullCheck(L_16);
		float L_17 = L_16->get_x_3();
		float L_18 = ___positionLerpPct1;
		float L_19 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_15, L_17, L_18, /*hidden argument*/NULL);
		__this->set_x_3(L_19);
		// y = Mathf.Lerp(y, target.y, positionLerpPct);
		float L_20 = __this->get_y_4();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_21 = ___target0;
		NullCheck(L_21);
		float L_22 = L_21->get_y_4();
		float L_23 = ___positionLerpPct1;
		float L_24 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_20, L_22, L_23, /*hidden argument*/NULL);
		__this->set_y_4(L_24);
		// z = Mathf.Lerp(z, target.z, positionLerpPct);
		float L_25 = __this->get_z_5();
		CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * L_26 = ___target0;
		NullCheck(L_26);
		float L_27 = L_26->get_z_5();
		float L_28 = ___positionLerpPct1;
		float L_29 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_25, L_27, L_28, /*hidden argument*/NULL);
		__this->set_z_5(L_29);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::UpdateTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState_UpdateTransform_mE653356FD34828D19ECB6793439A14C38F372410 (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___t0, const RuntimeMethod* method)
{
	{
		// t.eulerAngles = new Vector3(pitch, yaw, roll);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___t0;
		float L_1 = __this->get_pitch_1();
		float L_2 = __this->get_yaw_0();
		float L_3 = __this->get_roll_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_4, /*hidden argument*/NULL);
		// t.position = new Vector3(x, y, z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5 = ___t0;
		float L_6 = __this->get_x_3();
		float L_7 = __this->get_y_4();
		float L_8 = __this->get_z_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_6, L_7, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_5, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UnityTemplateProjects.SimpleCameraController_CameraState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraState__ctor_m9C5338CABE70B8C73F8A4A08C1AFA1B33417DE9D (CameraState_t3CFB67357E39129414AC5C9D628B9B47015CCE8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Vector3_Lerp_m8E095584FFA10CF1D3EABCD04F4C83FB82EC5524AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4D4AC358D24F6DDC32EC291DDE1DF2C3B752A194_il2cpp_TypeInfo_var);
		float L_1 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(L_0, /*hidden argument*/NULL);
		___t2 = L_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___b1;
		float L_5 = L_4.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_x_2();
		float L_8 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = ___a0;
		float L_10 = L_9.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = ___b1;
		float L_12 = L_11.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = ___a0;
		float L_14 = L_13.get_y_3();
		float L_15 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = ___a0;
		float L_17 = L_16.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = ___b1;
		float L_19 = L_18.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = ___a0;
		float L_21 = L_20.get_z_4();
		float L_22 = ___t2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_23), ((float)il2cpp_codegen_add((float)L_3, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), (float)L_8)))), ((float)il2cpp_codegen_add((float)L_10, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_12, (float)L_14)), (float)L_15)))), ((float)il2cpp_codegen_add((float)L_17, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_19, (float)L_21)), (float)L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Division_mE5ACBFB168FED529587457A83BA98B7DB32E2A05_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), ((float)((float)L_7/(float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
