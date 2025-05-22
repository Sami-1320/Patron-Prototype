// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class EJ_Prototype : ModuleRules
{
	public EJ_Prototype(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
