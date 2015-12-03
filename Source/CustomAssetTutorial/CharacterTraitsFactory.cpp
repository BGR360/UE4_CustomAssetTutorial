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

#include "CustomAssetTutorial.h"
#include "CharacterTraitsFactory.h"
#include "CharacterTraits.h"

UCharacterTraitsFactory::UCharacterTraitsFactory()
{
    // We only want to create assets by importing files.
    // Set this to true if you want to be able to create new, empty Assets from
    // the editor.
    bCreateNew = false;
    
    // Our Asset will be imported from a text file (xml), not a binary file
    bText = true;
    
    // Allows us to actually use the "Import" button in the Editor for this Asset
    bEditorImport = true;
    
    // Tells the Editor which file types we can import
    Formats.Add(TEXT("xml;XML Files"));
    
    // Tells the Editor which Asset type this UFactory can import
    SupportedClass = UCharacterTraits::StaticClass();
}

UCharacterTraitsFactory::~UCharacterTraitsFactory()
{
}

// Begin UFactory Interface

/** Imports the OpenStreetMapFile from the text of the .osm xml file. */
UObject* UCharacterTraitsFactory::FactoryCreateText(UClass* InClass,
                                                    UObject* InParent,
                                                    FName InName,
                                                    EObjectFlags Flags,
                                                    UObject* Context,
                                                    const TCHAR* Type,
                                                    const TCHAR*& Buffer,
                                                    const TCHAR* BufferEnd,
                                                    FFeedbackContext* Warn)
{
    UObject* NewAsset = nullptr;
    return NewAsset;
}

/** Returns whether or not the given class is supported by this factory. */
bool UCharacterTraitsFactory::DoesSupportClass(UClass* Class)
{
    return false;
}

/** Returns true if this factory can deal with the file sent in. */
bool UCharacterTraitsFactory::FactoryCanImport(const FString& Filename)
{
    return false;
}

/** Returns the name of the factory for menus */
FText UCharacterTraitsFactory::GetDisplayName() const
{
    return FText();
}

// End UFactory Interface
