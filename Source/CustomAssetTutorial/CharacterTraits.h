// Copyright (c) 2015 Benjamin Reeves
//
// The MIT License (MIT)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include "Object.h"
#include "CharacterTraits.generated.h"

// Various enums relating to our character's traits

UENUM()
enum class EFacialHairStyle : uint8
{
    None,
    Beard,
    Moustache,
};

UENUM()
enum class ENoseShape : uint8
{
    Round,
    Pointy
};

UENUM()
enum class EHairStyle : uint8
{
    Curly,
    Spikey,
    Wavy,
    Long,
    HipsterBun
};

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
	
public:
    
    UPROPERTY()
    FColor FacialHairColor;
    
    UPROPERTY()
    EFacialHairStyle FacialHairStyle;
    
    UPROPERTY()
    FColor HairColor;
    
    UPROPERTY()
    EHairStyle HairStyle;
    
    UPROPERTY()
    FColor EyeColor;
    
    UPROPERTY()
    FColor SkinColor;
};
