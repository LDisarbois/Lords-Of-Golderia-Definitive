// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lords_Of_Golderia : ModuleRules
{
	public Lords_Of_Golderia(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
