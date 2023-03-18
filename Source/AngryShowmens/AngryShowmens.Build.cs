// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AngryShowmens : ModuleRules
{
	public AngryShowmens(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
