/*
	THIS FILE IS A PART OF GTA V SCRIPT HOOK SDK
				http://dev-c.com
			(C) Alexander Blade 2015
*/

#pragma once

#include "main.h"
#include <utility>

template <typename T>
static inline void nativePush(T val)
{
	static_assert(sizeof(T) <= sizeof(UINT64), "error, value size > 64 bit");

	UINT64 val64 = 0;
	*reinterpret_cast<T*>(&val64) = val; // &val + sizeof(dw) - sizeof(val)
	nativePush64(val64);
}

template <typename R, typename... Args>
static inline R invoke(UINT64 hash, Args&&... args)
{
	nativeInit(hash);
	(nativePush(std::forward<Args>(args)), ...);

	return *reinterpret_cast<R*>(nativeCall());
}