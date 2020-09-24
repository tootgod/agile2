// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MYPROJECT2_Grabber_generated_h
#error "Grabber.generated.h already included, missing '#pragma once' in Grabber.h"
#endif
#define MYPROJECT2_Grabber_generated_h

#define MyProject2_Source_MyProject2_Grabber_h_14_RPC_WRAPPERS
#define MyProject2_Source_MyProject2_Grabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MyProject2_Source_MyProject2_Grabber_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define MyProject2_Source_MyProject2_Grabber_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGrabber(); \
	friend struct Z_Construct_UClass_UGrabber_Statics; \
public: \
	DECLARE_CLASS(UGrabber, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(UGrabber)


#define MyProject2_Source_MyProject2_Grabber_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGrabber(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGrabber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public:


#define MyProject2_Source_MyProject2_Grabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGrabber(UGrabber&&); \
	NO_API UGrabber(const UGrabber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGrabber); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGrabber); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGrabber)


#define MyProject2_Source_MyProject2_Grabber_h_14_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_Grabber_h_11_PROLOG
#define MyProject2_Source_MyProject2_Grabber_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Grabber_h_14_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_Grabber_h_14_INCLASS \
	MyProject2_Source_MyProject2_Grabber_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_Grabber_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Grabber_h_14_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Grabber_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Grabber_h_14_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Grabber_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class UGrabber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_Grabber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
