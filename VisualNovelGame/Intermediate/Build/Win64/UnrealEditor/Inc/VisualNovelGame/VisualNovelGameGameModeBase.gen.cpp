// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VisualNovelGame/VisualNovelGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualNovelGameGameModeBase() {}
// Cross Module References
	VISUALNOVELGAME_API UClass* Z_Construct_UClass_AVisualNovelGameGameModeBase_NoRegister();
	VISUALNOVELGAME_API UClass* Z_Construct_UClass_AVisualNovelGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VisualNovelGame();
// End Cross Module References
	void AVisualNovelGameGameModeBase::StaticRegisterNativesAVisualNovelGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVisualNovelGameGameModeBase);
	UClass* Z_Construct_UClass_AVisualNovelGameGameModeBase_NoRegister()
	{
		return AVisualNovelGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VisualNovelGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "VisualNovelGameGameModeBase.h" },
		{ "ModuleRelativePath", "VisualNovelGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVisualNovelGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::ClassParams = {
		&AVisualNovelGameGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVisualNovelGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AVisualNovelGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVisualNovelGameGameModeBase.OuterSingleton, Z_Construct_UClass_AVisualNovelGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVisualNovelGameGameModeBase.OuterSingleton;
	}
	template<> VISUALNOVELGAME_API UClass* StaticClass<AVisualNovelGameGameModeBase>()
	{
		return AVisualNovelGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVisualNovelGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_VisualNovelGame_Source_VisualNovelGame_VisualNovelGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VisualNovelGame_Source_VisualNovelGame_VisualNovelGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVisualNovelGameGameModeBase, AVisualNovelGameGameModeBase::StaticClass, TEXT("AVisualNovelGameGameModeBase"), &Z_Registration_Info_UClass_AVisualNovelGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVisualNovelGameGameModeBase), 349790674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_VisualNovelGame_Source_VisualNovelGame_VisualNovelGameGameModeBase_h_1223144478(TEXT("/Script/VisualNovelGame"),
		Z_CompiledInDeferFile_FID_VisualNovelGame_Source_VisualNovelGame_VisualNovelGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_VisualNovelGame_Source_VisualNovelGame_VisualNovelGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
