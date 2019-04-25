#ifndef FILE_SYSTEM_INL_H_
#define FILE_SYSTEM_INL_H_

#ifndef FILE_SYSTEM_H_
#error "FileSystem-inl.h" should be included only in "FileSystem.h" file.
#endif

#include "FileSystem.h"

#include <memory>

#include "File.h"
#include "Directory.h"
#include "Link.h"

FileSystem::FileSystem() noexcept
{
    constexpr int ROOT_ID = 0;
    constexpr char ROOT_NAME[] = "root";

    elements.push_back(std::make_shared<Directory>(
            Directory(ROOT_ID, ROOT_NAME, ROOT_ID)));
}

#endif