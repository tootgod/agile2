// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_WorldPosition_generated_h
#error "WorldPosition.generated.h already included, missing '#pragma once' in WorldPosition.h"
#endif
#define MYPROJECT2_WorldPosition_generated_h

#define MyProject2_Source_MyProject2_WorldPosition_h_13_RPC_WRAPPERS
#define MyProject2_Source_MyProject2_WorldPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Source_MyProject2_WorldPosition_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorldPosition(); \
	friend struct Z_Construct_UClass_UWorldPosition_Statics; \
public: \
	DECLARE_CLASS(UWorldPosition, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UWorldPosition)


#define MyProject2_Source_MyProject2_WorldPosition_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWorldPosition(); \
	friend struct Z_Construct_UClass_UWorldPosition_Statics; \
public: \
	DECLARE_CLASS(UWorldPosition, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UWorldPosition)


#define MyProject2_Source_MyProject2_WorldPosition_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorldPosition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorldPosition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPosition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPosition(UWorldPosition&&); \
	NO_API UWorldPosition(const UWorldPosition&); \
public:


#define MyProject2_Source_MyProject2_WorldPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorldPosition(UWorldPosition&&); \
	NO_API UWorldPosition(const UWorldPosition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorldPosition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorldPosition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UWorldPosition)


#define MyProject2_Source_MyProject2_WorldPosition_h_13_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_WorldPosition_h_10_PROLOG
#define MyProject2_Source_MyProject2_WorldPosition_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_WorldPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_WorldPosition_h_13_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_WorldPosition_h_13_INCLASS \
	MyProject2_Source_MyProject2_WorldPosition_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_WorldPosition_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_WorldPosition_h_13_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_WorldPosition_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_WorldPosition_h_13_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_WorldPosition_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class UWorldPosition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_WorldPosition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
