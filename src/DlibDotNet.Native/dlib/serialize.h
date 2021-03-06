#ifndef _CPP_SERIALIZE_H_
#define _CPP_SERIALIZE_H_

#include "export.h"
#include <dlib/serialize.h>

using namespace dlib;

DLLEXPORT proxy_deserialize* proxy_deserialize_new(const char* file_name, const int file_name_length)
{
    return new proxy_deserialize(std::string(file_name, file_name_length));
}

DLLEXPORT void proxy_deserialize_delete(proxy_deserialize* deserialize)
{
    delete deserialize;
}

DLLEXPORT proxy_serialize* proxy_serialize_new(const char* file_name, const int file_name_length)
{
    return new proxy_serialize(std::string(file_name, file_name_length));
}

DLLEXPORT void proxy_serialize_delete(proxy_serialize* serialize)
{
    delete serialize;
}

#endif