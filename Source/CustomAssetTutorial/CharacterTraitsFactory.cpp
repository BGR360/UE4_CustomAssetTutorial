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
