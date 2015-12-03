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

#include "Factories/Factory.h"
#include "CharacterTraitsFactory.generated.h"

/**
 * The UFactory is what distinguishes our UCharacterTraits class as an Asset
 * to Unreal Engine. The UFactory is responsible for importing Assets from
 * files or text and creating new assets out of thin air.
 * The engine automagically keeps track of all the UFactories in the project.
 */
UCLASS()
class CUSTOMASSETTUTORIAL_API UCharacterTraitsFactory : public UFactory
{
	GENERATED_BODY()
	
public:
    UCharacterTraitsFactory();
    virtual ~UCharacterTraitsFactory();
    
    // Begin UFactory Interface
    
    /** Imports a UCharacterTraits Asset from the text of an XML file. */
    virtual UObject* FactoryCreateText(UClass* InClass,
                                       UObject* InParent,
                                       FName InName,
                                       EObjectFlags Flags,
                                       UObject* Context,
                                       const TCHAR* Type,
                                       const TCHAR*& Buffer,
                                       const TCHAR* BufferEnd,
                                       FFeedbackContext* Warn) override;
    
    /** Returns whether or not the given class is supported by this factory. */
    virtual bool DoesSupportClass(UClass* Class) override;
    
    /** Returns true if this factory can deal with the file sent in. */
    virtual bool FactoryCanImport(const FString& Filename) override;
    
    /** Returns the name of the factory for menus */
    virtual FText GetDisplayName() const override;
    
    // End UFactory Interface
};
