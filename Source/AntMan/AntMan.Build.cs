// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AntMan : ModuleRules
{
	public AntMan(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });

		//PublicDependencyModuleNames.AddRange(new string[] { "AntMan" });
	}
}
