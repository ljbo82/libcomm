/*
Copyright (c) 2022 Leandro José Britto de Oliveira

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/
#pragma once

#include "log.h"
#include <stdlib.h>
#include <errno.h>
#include <string.h>

#define ASSERT(cond) if (!(cond)) { LOG_ERROR("[ERROR][%s:%d] Assertion failed", __FILE__, __LINE__); exit(1); }
#define ASSERT_EQUALS(fmt, expected, value) if ((expected) != (value)) { LOG_ERROR("[ERROR][%s:%d] Expected: %" fmt ". Given: %" fmt, __FILE__, __LINE__, (expected), (value)); exit(1); }
#define ASSERT_STR_EQUALS(expected, value) if (strcmp((expected),(value)) != 0) { LOG_ERROR("[ERROR][%s:%d] Expected: \"%s\". Given: \"%s\"", __FILE__, __LINE__, (expected), (value)); exit(1); }
#define ASSERT_ERROR(err) if (errno == (err)) { errno = 0; } else { LOG_ERROR("[ERROR][%s:%d] Expected: %d. Given: %d", __FILE__, __LINE__, (err), errno); exit(1); }
