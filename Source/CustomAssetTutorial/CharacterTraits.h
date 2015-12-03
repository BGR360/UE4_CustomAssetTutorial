// Copyright (c) 2015 Benjamin Reeves

#pragma once

#include "Object.h"
#include "CharacterTraits.generated.h"

/**
 * This is our custom Asset class. Assets don't really inherit from a base
 * Asset class, they're just UObjects. What really makes them Assets is
 * having a UFactory that creates them.
 *
 * Our custom Asset stores information about a Character's traits (physical
 * appearance, skills, etc.). It's a very limited and contrived example, feel
 * free to extend it as you wish.
 */
UCLASS()
class CUSTOMASSETTUTORIAL_API UCharacterTraits : public UObject
{
	GENERATED_BODY()
	
	
	
	
};
